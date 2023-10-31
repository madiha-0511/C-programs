#include<stdio.h>

void formula(int a,int b){
    int res = a*a+2*a*b+b*b;
    printf("%d",res);
}

void main(){

formula(2,4);
}