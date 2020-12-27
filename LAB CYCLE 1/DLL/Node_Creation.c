#include<stdio.h>
#include<stdlib.h>
struct node* add_node(struct node* , int);

struct node 
           {
             struct node *prev;
             int data;
             struct node *next;
           }; 

int main()
 {
     
     struct node* head=add_node(NULL,10);
     
     printf("\nData: %d",head->data);
     
     return 0;

 }
struct node* add_node(struct node* head, int data)
  {
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    printf("Prev Link: %p",temp->prev);
    printf("\nNext Link: %p",temp->next);
    head=temp;
    return head;
  }