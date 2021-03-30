#include <stdio.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void front_element();
void display();

void main()
  {
      int ch=0;
      while(ch!=5)
      {
          printf("\n\n___________Q U E U E [MAIN MENU]___________");
          printf("\n1.Enqueue!\n");
          printf("\n2.Dequeue!\n");
          printf("\n3.Display front element!\n");
          printf("\n4.Display the entire queue!\n");
          printf("\n5.Exit!!!\n");
          printf("\n\nEnter your Choice(1-5):\n");
          scanf("%d",&ch);
        
        switch(ch)
                {
                 case 1:enqueue();
                        break;
                 case 2:dequeue();
                        break;
                 case 3:front_element();
                        break;
                 case 4:display();
                        break;
                 case 5:
                        break;
                 default:
                         printf("\nWrong Choice!!!\n");
                         break;
                }
        }
  }
void enqueue()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(rear==N-1)
    {
        printf("QUEUE IS FULL\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    { rear++;
    queue[rear]=x;
     }
}
void dequeue()
   {
    if(front==-1&&rear==-1)
      {
        printf("UNDERFLOW\n");
    
      }
    else if(front==rear)
      {
       front=rear=-1;
    
      }
    else
      {
        printf("Dequeued element is:%d",queue[front]);
        front++;
      }
  }
void front_element()
 {
    if(front==-1&&rear==-1)
     {
        printf("QUEUE is EMPTY!!!!!");
        
     } 
    else
      {
        printf("Top element is:%d",queue[front]); 
      }
  }
  
  
void display()
 {
    if(front==-1&&rear==-1)
     {
        printf("QUEUE IS EMPTY");
        
     }
    else
     {
        for(int i=front;i<(rear+1);i++)
          {
            printf("Element[%d]: \n", queue[i]);
            
          }
     }
 }
