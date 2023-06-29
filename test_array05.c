#include<stdio.h>

void main(){
    int num[5];
    int i=0;

    do{
      num[i] = (i+1) * 10;
      i = i+1;
    }while(i<5);

    i = 0;
    do{
        printf("Box%d : %d\n",i+1,num[i]);
        i = i+1;
    }while(i<5);

}