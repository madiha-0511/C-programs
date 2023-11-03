#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void main(){
   struct node * head = (struct node *) malloc(sizeof(struct node));

    struct node * new_node=(struct node *) malloc(sizeof(struct node));

    new_node->data=20;
   new_node->next=NULL;

   head->data=10;
   head->next=new_node;

   printf("%d",head->data);
   printf("\n%d",head->next->data);

}
