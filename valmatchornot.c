#include<stdio.h>
void main(){
    int val;
    int arr[]={11,22,33,44,55};
    arr[3]=50;
    printf("enter the value");
    scanf("%d",&val);
    for(int i=0;i<5;i++){
       
        if(val==arr[i]){
            printf("element is found");
        }

        if(i==4 && arr[i]!=val){
            printf("element is not found");
        }

    }
    
}