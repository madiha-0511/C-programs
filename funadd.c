#include<stdio.h>
void swap(int *ptr1,int *ptr2){
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr2-*ptr1;
    
}
void main(){
    int a=40, b=55;
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d",b);

}
