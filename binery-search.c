Binary Search in C
Source Code:-
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,beg,end,mid,n,search,a[100];
  clrscr();
  printf("\nEnter number of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements ( in ascending order ): ", n);
  for (i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter value to find: ");
  scanf("%d",&search);
  beg=0;
  end=n-1;
  mid=(beg+end)/2;
  while(beg<=end) 
  {
    if(a[mid]<search)
      beg=mid+1;
    else if(a[mid]==search)
    {
      printf("%d found at location %d.\n",search,mid+1);
      break;
    }
    else
      end=mid-1;
    mid=(beg+end)/2;
  }
  if(beg>end)
    printf("Not found! %d isn't present in the Array.\n", search);
  getch();
}
Output:-

Enter number of elements: 5
Enter 5 elements ( in ascending order ): 12 23 34 45 56
Enter value to find: 23
23 found at location 2.