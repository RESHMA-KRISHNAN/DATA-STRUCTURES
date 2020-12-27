#include <stdio.h>
#include <stdlib.h>

struct node
   {
      int value;
      struct node *next;
   } *head;

void push();
void pop();
void display();

void main ()
   {
    int ch;
    printf("\n________LINKED STACK_______\n");

    while(ch!= 4)
      {

        printf("\n 1.Push!\n 2.Pop!\n 3.Display!\n 4.Exit!!!\n");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
          {
            case 1:
                    push();
                    break;
        
            case 2:
                    pop();
                    break;

            case 3:
                    display();
                    break;

            case 4:
                    break;

            default:
                    printf("\nWRONG CHOICE!! Please enter again!!!\n ");
            }
       }
  }

void push ()
   {
    int value;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
       {
        printf("\n Not able to push the element\n");
       }
    else
       {
        printf("\nEnter the value:\n");
        scanf("%d",&value);
        if(head==NULL)
          {
            ptr->value = value;
            ptr -> next = NULL;
            head=ptr;
          }
        else
          {
            ptr->value = value;
            ptr->next = head;
            head=ptr;

          }
        printf("\nItem pushed!\n");

       }
   }

void pop()
  {
    int item;
    struct node *ptr;
    if (head == NULL)
      {
        printf("\nUnderflow!!\n");
      }
    else
      {
        item = head->value;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\nItem popped!\n");

      }
  }
void display()
   {
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
      {
        printf("\nStack is EMPTY!\n");
      }
    else
      {
        printf("\nElements: \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->value);
            ptr = ptr->next;
        }
      }
   }
