Delete an element in a Queue in C
Source Code:-
#include<stdio.h>
#include<conio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void enqueue(int val);
void dequeue();
void display();
void main()
{
    int val,prompt;
    do{
        printf("\nPress <1> To Enqueue <2> To Dequeue <3> To Display <0> To End ");
        printf("\nEnter the choice: ");
        scanf("%d",&prompt);
        switch(prompt)
        {case 1:if(rear==MAX-1)
                 printf("\nQueue Overflow");
                else
                 {printf("Enter the value to enqueue: ");
                  scanf("%d",&val);
                  enqueue(val);
                 }
                 break;
        case 2: dequeue();
                break;
        case 3:display();
                break;
        case 0:break;
        default: printf("\nEnter the correct choice. ");
       }
    }while(prompt!=0);
getch();
}
void enqueue(int val)
{
    if(rear==-1)
     ++front;
    QUEUE[++rear]=val;
}
void dequeue()
{int temp;
   if(front==-1)
   {
       printf("\nQueue Underflow"); 
       
   }
   temp=QUEUE[front];
   if(front==rear)
   {
       front=-1;
       rear=-1;
   }
   else
       ++front;
}
void display()
{
int i;
if(rear==-1)
printf("Queue is empty: ");
else
{printf("Queue is : \n");
for(i = front; i <= rear; i++)
printf("%d ", QUEUE[i]);}
}
Output:-

Press <1> To Enqueue <2> To Dequeue <3> To Display <0> To End 
Enter the choice: 1
Enter the value to enqueue: 23

Press <1> To Enqueue <2> To Dequeue <3> To Display <0> To End 
Enter the choice: 1
Enter the value to enqueue: 34

Press <1> To Enqueue <2> To Dequeue <3> To Display <0> To End 
Enter the choice: 2

Press <1> To Enqueue <2> To Dequeue <3> To Display <0> To End 
Enter the choice: 2

Press <1> To Enqueue <2> To Dequeue <3> To Display <0> To End 
Enter the choice: 3
Queue is empty: 
Press <1> To Enqueue <2> To Dequeue <3> To Display <0> To End 
Enter the choice: 0