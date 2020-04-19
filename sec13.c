/*10個の整数値入力を逆順に返す*/
#include<stdio.h>

int main(void){
    int array[10],i;
    printf("10個の整数を\" \"区切りで入力してください：\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4],&array[5],&array[6],&array[7],&array[8],&array[9]);
    for ( i = 10-1; i >=0; i--)
    {
        printf("%3d,",array[i]);
    }
    return 0;    
}