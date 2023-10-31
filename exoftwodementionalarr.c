#include<stdio.h>
void main(){
    int i,j;
    //initialization of arr
    int arr[3][3]={{1,2,3},{5,6,7},{8,9,10}};
    arr[1][1]=11;//modify val
    arr[2][2]=15;
    printf("%d\n",arr[0][0]);//for pirticular print
    //trasesing in 2 dim arr
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",arr[i][j]);
        }
     printf("\n");
    }
}