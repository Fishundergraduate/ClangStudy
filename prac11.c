#include<stdio.h>

int sum(int); /*Prototype Declear*/
int ave(int);

int main(void){
    int max;
    printf("数値を入力せよ：\n");
    scanf("%d",&max);
    ave(sum(max));
    return 0;
}

int sum(int max){
    int i=0,j=0;
    for (i = 0; i <=max; i++)
    {
        j += i;
    }
    printf("%10d \n",j);
    return j;
}

int ave(int digit){
    printf("1～ %5d の総和は %5d でしょうね．",digit,digit*(digit+1)/2);
}