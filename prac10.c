#include<stdio.h>

int main(void){
    long money =1;
    int month = 1;

    while( money <= 1000000){
        printf("%02d 月目 :  %7.0d 円\n",month,money);
        money *=2;
        month ++;
    }
    printf("%02d月目に %7.0d 円となり，100万円を超える．\n",month,money);
    return 0;
}