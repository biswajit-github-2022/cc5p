) C Program to find the largest and smallest element in an array
Source Code:-
//1)	C Program to find the largest and smallest element in an array
//Source Code:-
#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,large,small;
clrscr();
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the Array  elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=small=a[0];
for(i=1;i<n;i++)
{ if(a[i]>large)
  {
   large=a[i];
  } 
  if(a[i]<small)
  {
   small=a[i];
  }
 }
printf("\nThe largest element is %d  ",large);
printf("\nThe smallest element is %d  ",small);
getch();
} 
Output:-

Enter the number of elements: 5
Enter the Array  elements: 12 2 1 34 2
The largest element is 34 
The smallest element is 1