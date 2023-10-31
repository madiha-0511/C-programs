#include<stdio.h>
void main(){
    char name[200]={'M','a','d','i','h','a','p','a','t','e','l','\0'};
    printf("%d\n",sizeof(name));//find size of array
    printf("%c\n",name[4]);


    for(int i=0;i<200;i++){
        printf("%c",name[i]);
    }
}