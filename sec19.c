/*n人分の名前・年齢・性別を入力し表示するプログラム*/
#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[255];
    int year_old;
    int gendar; /*0なら男性，1なら女性*/
}personal_data;/*データ部*/

void input(personal_data*,int); /*入力部*/
void output(personal_data,int);/*出力部分*/

enum{
    LOOP_IN,
    LOOP_OUT,
};/*LOOP判定変数*/

int check = LOOP_IN;

int main(void){
    int size=2,num=0;
    personal_data *heap;
    heap = (personal_data*) malloc(sizeof(personal_data)*size);
    if (heap == NULL)
    {
        printf("ERROR: Malloc function cannot save enough memory.");
        exit(0);
    }    
    while (check != LOOP_OUT)
    {
        input(&heap[num],num);
        num ++;        
        if (num > size)
        {
            size += 10;
            heap = (personal_data*) realloc(heap,sizeof(personal_data)*size);
        }
    }
    
    printf("入力されたデータは以下の通りです．\n");
    for (int i = 0; i < num-1; i++)
    {
        output(heap[i],i);
    }
    free(heap);   
    return 0;
}

void input(personal_data *data,int num){
    printf("%d人目のデータを入力していきます\n",num+1);
    printf("%d人目の名前を入力してください：",num+1);
    scanf("%s",data->name);
    printf("%d人目の年齢を入力してください：",num+1);
    scanf("%d",&data->year_old);
    printf("%d人目の性別を入力してください，男性なら\"0\"，女性なら\"1\"です．：",num+1);
    scanf("%d",&data->gendar);
    if (data->year_old == -1)/*LOOP判定部分*/
    {
        check = LOOP_OUT;
    }else
    {
        check = LOOP_IN;
    }
}

void output(personal_data data,int num){
    printf("---------------------------------------------------------------\n");
    printf("%d人目のデータを出力しますね．\n",num+1);
    printf("名前：%s\n年齢：%d\n",data.name,data.year_old);
    if (data.gendar == 0)
    {
        printf("性別：男\n");
    }else if (data.gendar == 1)
    {
        printf("性別：女\n");
    }else
    {
        printf("!Error!:入力値が %d になってるヨ！Bool変数使ってネ！",data.gendar);
    }    
}