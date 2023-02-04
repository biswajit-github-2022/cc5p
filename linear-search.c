Linear search in C
Source Code:
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,x,n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;++i)
        { scanf("%d",&a[i]); }
    printf("Enter element to search:");
    scanf("%d",&x);
    for(i=0;i<n;++i)
        { if(a[i]==x)
           { break; }
        } 
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
    getch();
}
Output:-

Enter the number of elements: 5
Enter array elements: 12 23 34 22 1
Enter element to search:34
Element found at index 2