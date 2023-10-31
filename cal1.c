#include <stdio.h>

int main() {

  char choice;
  int a,b,c;
  printf("Enter your choice (+, -, *, /): ");
  scanf("%c", &choice);
  printf("enter value of a:");
  scanf("%d\n",&a);
  printf("enter value of b:");
  scanf("%d\n",&b);
  switch (choice){
    case '+' : c=a+b;
    printf("%d",c);
    break;
    case '-' : c=a-b;
    printf("%d",c);
    break;
    case '*' : c=a*b;
    printf("%d",c);
    break;
    case '/' : c=a/b;
    printf("%d",c);
    break;
    default:
    printf("you enter wrong choice");
  }
}