#include<stdio.h>
void swap(int *ptr1,int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void main(){
    int a,b;
    printf("enter the values of a,b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d  %d",a,b);

}
