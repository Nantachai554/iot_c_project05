//for
#include<stdio.h>

void main(){
    int num[2][4];
    int x,y;

    for(x = 0;x<2;x=x+1){
        for(y=0;y<4;y=y+1){
            num[x][y] = (y+1+x+x+x+x) * 10;
        }
    }

        for(x = 0;x<2;x=x+1){
        for(y=0;y<4;y=y+1){
            printf("%d ",num[x][y]);
        }
        printf("\n");
    }


}