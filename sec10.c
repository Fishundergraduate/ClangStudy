#include<stdio.h>

int main(void){
    int score=0;
    do
    {
        if (score !=0)
        {
            printf("0~100点で入力してください！！！！！！\n");
        };
        
        printf("テストの点数を入力してください(0~100)\n：");
        scanf("%3d",&score);
    } while (score<0||100<score);

    printf("テストの点数は %d 点です",score);
    
    return 0;
}