#include<stdio.h>
#include<stdlib.h>
void create_list(int);
void display_list();

struct node
    {
        struct node *prev;
        int data;
        struct node *next;

    } *head, *temp;

int main()
   {
       
       int n;
       head=NULL;
       temp=NULL;
       printf("______________DOUBLY LINKED LIST CREATION AND DISPLAY_____________\n");
       printf("Enter the no. of nodes to be created:\n");
       scanf("%d",&n);
       create_list(n);
       display_list();
       return 0;
   }

void create_list(int n)
   {
       int i, data;
       struct node *new_node;
       if(n>=1)    //if n=0, the user doesn't want to add more nodes
          {
              head=(struct node *)malloc(sizeof(struct node));
              if(head!=NULL)
                {
                 printf("\nInput data for node 1:\n");
                 scanf("%d",&data);

                 head->data=data;
                 head->prev=NULL;
                 head->next=NULL;
                 temp=head;
                 
                 for(i=2;i<=n;i++)
                 {
                    new_node=malloc(sizeof(struct node));
                    if(new_node!=NULL)
                      {
                          printf("\nInput data for node %d:\n",i);
                          scanf("%d",&data);
                          new_node->data=data;
                          new_node->next=NULL;
                          new_node->prev=temp;
                          temp->next=new_node;
                          temp=new_node;

                      }
                      else
                      {
                          printf("\nMemory cannot be allocated!");
                          break;
                      }
                      
                  }
         }
        else
                  { printf("\nMemory cannot be allocated!!"); 
                      
                  }
                
          }
      }
   

void display_list()
{
    struct node *traverse_ptr;
    int n=1;
    if(head==NULL)
      {
          printf("\nNO DATA IN THE LIST");
      }
    else
    {
        traverse_ptr=head;
        printf("\nData entered in the list are:\n");

        while(traverse_ptr!=NULL)
        {
            printf("\nNode %d: %d",n,traverse_ptr->data);
            n++;
            traverse_ptr=traverse_ptr->next;
        }


    }
}

