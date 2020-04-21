/*Olympic Identify System*/
#include<stdio.h>

int identify(int);

enum{
        summer,
        winter,
        none,
    };

int main(void){
    int answer=0,year;
    printf("オリンピックの開催を判定します．西暦年を入力：\n");
    scanf("%d",&year);
    answer = identify(year);
    switch (answer)
    {
    case summer:
        printf("夏季オリンピック開催");
        break;
    case winter:
        printf("冬季オリンピック開催");
        break;    
    case none:
        printf("開催されていない");
        break;
    default:
        printf("ERROR! 多分入力ミス");
        break;
    }
    return 0;
}

int identify(int year){
    if (year % 4 == 0)
    {
        return summer;
    } else if (year % 4 == 2)
    {
        return winter;
    }
    else
    {
        return none;
    }
}