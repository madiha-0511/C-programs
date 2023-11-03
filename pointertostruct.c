#include<stdio.h>
struct student{
    int id;
    int age;
};


void main(){
    struct student sameer={63,20};
    struct student  * ptr=&sameer;
ptr->id=122;
    printf("%d %d",ptr->id,ptr->age);

}

