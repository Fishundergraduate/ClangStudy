/*三人分の名前・年齢・性別を入力し表示するプログラム*/
#include<stdio.h>

typedef struct{
    char name[255];
    int year_old;
    int gendar; /*0なら男性，1なら女性*/
}personal_data;/*データ部*/

void input(personal_data *data,int); /*入力部*/
void output(personal_data *data,int);/*出力部分*/


int main(void){
    personal_data data[3];
    for (int num = 0; num< 3;num++)
    {
        input(&data[num],num);
    }
    printf("入力されたデータは以下の通りです．\n");
    for (int i = 0; i < 3; i++)
    {
        output(&data[i],i);
    }
    
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
}

void output(personal_data *data,int num){
    printf("---------------------------------------------------------------\n");
    printf("%d人目のデータを出力しますね．\n",num+1);
    printf("名前：%s\n年齢：%d\n",data->name,data->year_old);
    if (data->gendar == 0)
    {
        printf("性別：男\n");
    }else if (data->gendar == 1)
    {
        printf("性別：女\n");
    }else
    {
        printf("!Error!:入力値が %d になってるヨ！Bool変数使ってネ！",num);
    }    
}