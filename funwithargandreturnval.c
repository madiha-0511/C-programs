#include<stdio.h>

int formula(int a,int b){
    int res = a*a+2*a*b+b*b;
    return res;
}

void main(){

printf("%d",formula(2,4));
}