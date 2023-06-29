//while

#include<stdio.h>

void main(){
    int num[5];
    int i=0;

    while (i<5)
    {
        num[i] = (i+1) * 10;
        i=i+1;
    }
    i=0;
    while (i<5)
    {
        printf("Box%d : %d\n",i+1,num[i]);
        i=i+1;
    }


}