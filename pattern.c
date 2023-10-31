#include<stdio.h>
int main(){
    int i,j,n=20,n1=80;
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                printf("* ");
            }  
            else{
                printf("  ");
            }       
        }
       printf("\n");  
    }
}