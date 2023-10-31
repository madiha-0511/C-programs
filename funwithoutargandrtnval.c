#include<stdio.h>

void formula(){
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    int res = a*a+2*a*b+b*b;
    printf("%d",res);
    
}

void main(){
    
formula();

}