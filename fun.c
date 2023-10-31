#include<stdio.h>

int formula(){
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    int res = a*a+2*a*b+b*b;
    return res;
    
}

void main(){
    
printf("%d",formula());

}