#include <stdio.h>

#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void top_element();
void display();

void main()
{
    int ch=0;
    while(ch!=5)
    {
        printf("\n__________S T A C K (MAIN MENU)____________\n");	
        printf("\n1.Push!\n");
        printf("\n2.Pop!\n");
        printf("\n3.Display the top element!\n");
        printf("\n4.Display the entire stack!\n");
        printf("\n5.Exit!!\n");
        printf("\n\nEnter your choice(1-5):");
        scanf("%d",&ch);
        switch(ch)
                {
                 case 1:push();
                        break;
                 case 2: pop();
                        break;
                 case 3:top_element();
                        break;
                 case 4:display();
                        break;
                 case 5:break;
                 default:printf("\nWrong Choice!!!\n");
                 break;
                }
        }
        
    }

void push()
 {
    int x;
    printf("Enter the element:");
    scanf("%d",&x);
    if(top==N-1)
       {
        printf("OVERFLOW!!!!!!");
        
       }
    
    else 
	   {
        top++;
        stack[top]=x;
       }
 }
void pop()
 {
    int x;
    if(top==-1)
      {
        printf("UNDERFLOW!!!!!");
      }
    else
      {
        x=stack[top];
        top--;
        printf("Popped element is:%d",x);
      }
}
void top_element()
{
    if(top==-1)
      {
        printf("Stack is EMPTY!");
      }
    else{
        printf("%d",stack[top]);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {  
        printf("ELEMENT[%d]",i);
        printf("%d\n",stack[i]);
    }
}

