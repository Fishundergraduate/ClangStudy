/*姓と名の文字列を別々に入力，結合し表示*/
#include<stdio.h>
#include<string.h>

int main(void){
    char sei[128],mei[128],namae[256];
    printf("姓をアルファベットで入力してください：");
    scanf("%s",sei);
    printf("名をアルファベットで入力してください：");
    scanf("%s",mei);

    sprintf(namae,"%s%s",sei,mei);
    printf(namae);
    return 0;
}