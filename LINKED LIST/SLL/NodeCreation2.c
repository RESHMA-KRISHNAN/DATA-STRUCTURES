#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    if(head!=NULL)
      head->data=10;
    
    
    struct node *current=malloc(sizeof(struct node));
    printf("Link of CURRENT= %p", current);
    head->link=current;
    current->data=20;
    current->link=NULL;
    
    
    printf("\nData in HEAD= %d",head->data);
    printf("\nLink in HEAD= %p",head->link);
    printf("\nData in CURRENT= %d",current->data);
    printf("\nLink in CURRENT= %p",current->link);
    
    
    return 0;
}