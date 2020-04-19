/*三人分の名前・年齢・性別を入力し表示するプログラム*/
#include<stdio.h>

typedef struct{
    char name[255];
    int year_old;
    int gendar; /*0なら男性，1なら女性*/
}personal_data;/*データ部*/

void input(personal_data *data,int); /*入力部*/


int main(void){
    personal_data data[3];
    int num=0;
    for (num = 0; num< 3;num++)
    {
        input(&data[num],num);
    }
    printf("入力されたデータは以下の通りです．\n");

    return 0;
}

void input(personal_data *data,int num){
    printf("%d人目のデータを入力していきます\n",num+1);
    printf("%d人目の名前を入力してください：",num+1);
    scanf("%s",data[num].name);
    printf("%d人目の年齢を入力してください：",num+1);
    scanf("%d",data[num].year_old);
    printf("%d人目の性別を入力してください，男性なら\"0\"，女性なら\"1\"です．：",num+1);
    scanf("%d",data[num].gendar);
}