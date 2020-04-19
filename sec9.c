/*九九の表を表示*/

#include<stdio.h>

int main(void){
    int i;
    printf("九九の表を表示しよう！\n");
    for (i=1;i<=9;i++)
    {
        printf("%2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d, %2d \n", i*1,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9);
    };
    int j;
    printf("九九の表を表示しよう！\n");
    for (i=1;i<=9;i++)
    {
        for (j=1;j<=9;j++)
        {
            printf("%2d,", i*j);
        }
        printf("\n");
    }
    return 0;
}