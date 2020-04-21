/*名前，年齢，年を入力して出力するやつ！！*/
#ifndef _MK_People_List
#define _MK_People_List

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[255];
    int year_old;
    int gendar; /*0なら男性，1なら女性*/
}personal_data;/*データ部*/

extern void input(personal_data*,int); /*入力部*/
extern void output(personal_data,int);/*出力部分*/
extern void csvoutput(personal_data,int,FILE*);/*CSV_output*/

#endif