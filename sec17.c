#include<stdio.h>

typedef struct{
    char name[255];
    int average;
}studentdata;

void input(studentdata *data,int); /*入力部*/
void output(studentdata *data,int,FILE *);/*出力部分*/



int main(void){
    studentdata data[4];
    FILE *file;
    file = fopen("meibo.csv","a+");
    for (int i = 0; i < 4; i++)
    {
        input(&data[i],i);
    }
    
    fprintf(file,"ID,名前,平均点\n");
    for (int i = 0; i < 4; i++)
    {
        output(&data[i],i,file);
    }
    fclose(file);
    return 0;
}

void input(studentdata *data,int num){
    printf("%d人目のデータを入力していきます\n",num+1);
    printf("%d人目の名前を入力してください：",num+1);
    scanf("%s",data->name);
    printf("%d人目の平均点を入力してください：",num+1);
    scanf("%d",&data->average);
}


void output(studentdata *data,int num,FILE *file){
    fprintf(file,"%d,%s,%d\n",num+1,data->name,data->average);
}