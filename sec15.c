/*0~100のうちの複数の値を順々に入力し，その中から最大値と最小値を表示する．main以外のひとつの関数でmax，minを求めるようにし，当該関数内の配列の要素数は10とする．-1の入力を受けたら入力の終わりと判定する．*/
#include<stdio.h>

int maxmin(int*,int,int*);// 入力配列，入力配列の長さ，出力配列
int print_array(int*,int);//入力配列，入力配列の長さ

int main(void){
    /*Input module*/
    int input_array[10], output_array[2],i,*index,len=10;
    for ( i = 0; i < 10; i++)
    {
        printf("数値を入力してください：");
        scanf("%d",&input_array[i]);
        switch (input_array[i])
        {
        case -1:
                len = i;
                i=10;
            break;        
        default:
            break;
        }
    }
    /*Calc module*/
    maxmin(input_array,len,output_array);
    print_array(input_array,len);
    printf("下の出力の1個目はmax．2個目はminを示します．\n");
    print_array(output_array,2);
    return 0;
}

int print_array(int *array,int len){
    int i,j;
    for ( i = 0; i < len ; i++)
    {
        j = array[i];
        printf("%d個目は%d\n",i+1,j);
    } 
}

int maxmin(int *input,int len,int *output){
    int max=input[0],min=input[0],i;
    for (i = 1; i < len; i++)
    {
        if (max < input[i])
        {
            max = input[i];
        }else if (min > input[i])
        {
            min = input[i];
        }
    }
    output[0] = max;
    output[1] = min ;   
}