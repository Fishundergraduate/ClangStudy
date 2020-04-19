/*月の整数値を入力したら陰暦が出るようにしよう！*/
#include<stdio.h>

int main(void){
    int month;
    printf("1~12の整数値を入力してください，陰暦を返します．");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("%2d 月は睦月です",month);
        break;
    case 2:
        printf("%2d 月は如月です",month);
        break;
    case 3:
        printf("%2d 月は弥生です",month);
        break;
    case 4:
        printf("%2d 月は卯月です",month);
        break;
    case 5:
        printf("%2d 月は皐月です",month);
        break;
    case 6:
        printf("%2d 月は水無月です",month);
        break;
    case 7:
        printf("%2d 月は文月です",month);
        break;
    case 8:
        printf("%2d 月は葉月です",month);
        break;
    case 9:
        printf("%2d 月は長月はです",month);
        break;
    case 10:
        printf("%2d 月は神無月です",month);
        break;
    case 11:
        printf("%2d 月は霜月です",month);
        break;
    case 12:
        printf("%2d 月は師走です",month);
        break;
    default:
        printf("Error: Range over: 1~12の整数値を入力してください．");
        break;
    }
}