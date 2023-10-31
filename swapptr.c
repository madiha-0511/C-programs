#include<stdio.h>
void main(){
    int n1=50;
    int n2=40;
    int temp;
    int *p1;
    int *p2;
    int *p3;
    p1=&n1;
    p2=&n2;
    p3=&temp;
    *p3=*p1;
    *p1=*p2;
    *p2=*p3;
    printf("%d\n",*p1);
    printf("%d",*p2);


}