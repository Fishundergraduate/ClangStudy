/*西暦年を入力し夏/冬オリンピックの開催を判定しよう！*/
#include<stdio.h>

int main(void){
    int year;
    printf("オリンピックイヤーかどうかを判定します．西暦年を入力：");
    scanf("%d",&year);
    if (year == 2021 )
    {
        printf("実はオリンピックが開催されています．\n");        
    }
    else if (year %2 == 1)
    {
        printf("オリンピックは開催されていません．\n");        
    }
    else if (year %4 == 0)
    {
        printf("夏季オリンピックが開催されます．\n");        
    }
    else if (year %4==2)
    {
        printf("冬季オリンピックが開催されます．\n");        
    }
    else
    {
        printf("入力したのが整数値かを確認してください．");        
    }
        return 0;
}