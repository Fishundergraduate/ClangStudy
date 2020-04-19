#include<stdio.h>

int main(void){
    int juice,juice_amount,milk,milk_amount,cost,payment,charge;
    double vat;
    vat = 0.05;
    juice = 198;
    milk = 138;
    juice_amount = 1;
    milk_amount = 2;
    cost = (juice*juice_amount + milk*milk_amount)*(1+vat);
    charge = 0;
    printf("代金は %6d 円です \n ",cost);
    do
    {
        printf("いくら支払いますか？;");
        scanf("%d",&payment);
        charge = payment - cost; 
    }  while (charge<0);
    printf("%6d 円を頂きます \n",payment);
    printf("お釣りは %6d 円です \n",charge);
    return 0;
}