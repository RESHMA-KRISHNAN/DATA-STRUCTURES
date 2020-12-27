#include<stdio.h>
#include<stdlib.h>            //to call malloc()

struct node 
{
    int data;                        //Data of the node
    struct node *link;              //Address of the next node
};

int main()
{
   struct node *head=NULL;
   head=(struct node *)malloc(sizeof(struct node));  
   head->data=10;
   head->link=NULL;

   printf("The data in the node is %d",head->data);
   return 0;
}

