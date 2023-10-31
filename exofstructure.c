#include<stdio.h>
#include<string.h>
struct student{
char name[100];
};
int main(){
struct student madiha;
printf("name:");
char temp[100];
scanf("%s",&temp);
strcpy("madiha.name",temp);
}
