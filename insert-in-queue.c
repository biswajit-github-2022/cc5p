Insert an element in an Queue in C
Source Code:-
#include<stdio.h>
#include<conio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void enqueue(int val);
void display();
void main()
{
    int val,prompt;
    do{
        printf("\nPress <1> To Enqueue <2> To Display <0> To End ");
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
        case 2: display();
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
void display()
{
int i;
printf("Queue is : \n");
for(i = front; i <= rear; i++)
printf("%d ", QUEUE[i]);
}
Output:-

Press <1> To Enqueue <2> To Display <0> To End 
Enter the choice: 1
Enter the value to enqueue: 23

Press <1> To Enqueue <2> To Display <0> To End 
Enter the choice: 1
Enter the value to enqueue: 34

Press <1> To Enqueue <2> To Display <0> To End 
Enter the choice: 2
Queue is : 
23 34 
Press <1> To Enqueue <2> To Display <0> To End 
Enter the choice: 0