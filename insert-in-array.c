) C Program to insert an element in an array
Source Code:-
#include<stdio.h>
#include<conio.h>
void main()
{
   int a[40],pos,i,size,val;
  clrscr();
   printf("Enter the number of elements in array: ");
   scanf("%d",&size);
   printf("Enter %d elements are: ",size);
   for(i=0;i<size;i++)
      scanf("%d",&a[i]);
   printf("Enter the position where you want to insert the element: ");
   scanf("%d",&pos);
   printf("Enter the value into that poition: ");
   scanf("%d",&val);
   for(i=size-1;i>=pos-1;i--)
      a[i+1]=a[i];
   a[pos-1]= val;
   printf("Final array after inserting the value is: ");
   for(i=0;i<=size;i++)
      printf("%d ",a[i]);
   getch();
}