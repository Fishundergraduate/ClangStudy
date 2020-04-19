/*定価を入力すると1,3,5,8割引の値段を一覧表示するprogramを作成する．結果はintで表示．*/
#include<stdio.h>

int main(void){
    int price;
    printf("物品の定価を入力してください:");
    scanf("%d",&price);
    int wari1,wari3,wari5,wari8;
    wari1 = (int)price*0.9,wari3=(int)price*0.7,wari5=(int)price*0.5,wari8=(int)price*0.2;
    printf("定価：%6d 円，1割引：%6d円，3割引：%6d円，5割引：%6d円，8割引：%6d円",price,wari1,wari3,wari5,wari8);
    return 0;
}