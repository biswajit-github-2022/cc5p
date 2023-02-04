) C program to delete element from an array
Source Code:-
#include <stdio.h>  
#include <conio.h>  
  
void main ()  
{ 
    int arr[50],pos,i,num;
    printf ("\nEnter the number of elements in an array: ");  
    scanf ("%d", &num); 
    printf("Enter %d elements in array: ", num);  
    for(i=0;i<num;i++)  
    {    
        scanf("%d",&arr[i]);  
    }  
    printf("Define the position of the array element where you want to delete: ");  
    scanf ("%d",&pos);  
    if (pos>=num+1)  
    {  
        printf("Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i=pos-1;i<num-1;i++)  
        {  
            arr[i]=arr[i+1];
        }  
        printf ("After the deletion the array: \n");  
        for (i=0;i<num-1;i++)  
        {  
            printf ("%d ", arr[i]);  
        }  
    }  
    getch();  
}  
Output:-

Enter the number of elements in an array: 5
Enter 5 elements in array: 23 45 12 56 23
Define the position of the array element where you want to delete: 3
After the deletion the array: 
23 45 56 23