PUSH() and POP() operation of stack in C
Source Code:-
#include<stdio.h>
#define MAX 40
int stack[MAX],top=-1;
void push(int x);
void pop();
void display();
void main()
{
    int val,prompt;
    clrscr();
    do{printf("\nPress <1> To PUSH data <2> To POP data <3> To DISPLAY <0> To END ");
       printf("\nEnter the choice:  ");
       scanf("%d",&prompt);
       switch(prompt)
       {
           case 1:if(top==MAX-1)
                  { printf("\n!!! stack overflow !!!"); }
                  else
                   {
                    printf("ENTER THE VALUE TO PUSH:  ");
                    scanf("%d",&val);
                    push(val);
                   }
                   break;
           case 2: pop();
                   break;
           case 3: display();
                        break;
           case 0: break;
           default: printf("Enter correct choice: ");
       }
    }while(prompt!=0);
getch();
}
void push(int x)
{
 stack[++top]=x;
}
void pop()
{int temp;
if(top==-1)
 {printf("\n!!! stack underflow !!!");
 }
 else
  temp=stack[top--];
}
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
Output:-

Press <1> To PUSH data  <2> To POP data  <3> To DISPLAY  <4> To END 
Enter the choice:  1
ENTER THE VALUE TO PUSH:  23

Press <1> To PUSH data  <2> To POP data  <3> To DISPLAY  <4> To END 
Enter the choice:  1
ENTER THE VALUE TO PUSH:  34

Press <1> To PUSH data  <2> To POP data  <3> To DISPLAY  <4> To END 
Enter the choice:  3

Stack is...
34
23

Press <1> To PUSH data  <2> To POP data  <3> To DISPLAY  <4> To END 
Enter the choice:  0