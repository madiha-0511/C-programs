#include<stdio.h>
void main(){
   int arr[]={1,5,3,6,8};
    // int arr[5];
    // arr[0]=1;
    // arr[1]=5;
    // arr[2]=3;
    // arr[3]=6;
    // arr[4]=8; 
    int *p;
    p=arr;
    printf("%d\n",*(p+1));
     *(p+2)=9;
    for(int i=0;i<5;i++){
       
        printf("%d\n",*(p+i));
    }

    }