#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void main(){
   struct node * head = (struct node *) malloc(sizeof(struct node));

    struct node * second_node=(struct node *) malloc(sizeof(struct node));
    struct node * third_node=(struct node *) malloc(sizeof(struct node));
    struct node * fourth_node=(struct node *) malloc(sizeof(struct node));
    struct node * new_node=(struct node *) malloc(sizeof(struct node));

    new_node->data=50;
   new_node->next=NULL;

   fourth_node->data=40;
   fourth_node->next=new_node;

   third_node->data=30;
   third_node->next=fourth_node;

   second_node->data=20;
   second_node->next=third_node;

   head->data=10;
   head->next=second_node;

  /* printf("%d",head->data);
   printf("\n%d",head->next->data);
   printf("\n%d",head->next->next->data);
   printf("\n%d",head->next->next->next->data);
   printf("\n%d",head->next->next->next->next->data);*/



   
   
   //insert at first
   struct node  *temp1;
   head=temp1;
   printf("enter the element at starting position");
   scanf("%d",&temp1);

   struct node  *temp;
   temp=head;
   while (temp != NULL)
   {
     printf("\n%d",temp->data);
     temp=temp->next;
   }
   
}
