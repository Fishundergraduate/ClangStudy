/*Olympic Identify System*/
#include<stdio.h>

int identify(int);

int main(void){
    int answer=0,year=0;
    printf("オリンピックの開催を判定します．西暦年を入力：\n");
    scanf("%d",&year);
    answer = identify(year);
    switch (answer)
    {
    case 1:
        printf("夏季オリンピック開催");
        break;
    case 2:
        printf("冬季オリンピック開催");
        break;    
    default:
        printf("開催されていない");
        break;
    }
    return 0;
}

int identify(int year){
    if (year % 4 == 0)
    {
        return 1;
    } else if (year % 4 == 2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}