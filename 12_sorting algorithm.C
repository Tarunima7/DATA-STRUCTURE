/*Write a program to implement the following sorting algorithm

1. Bubble Sort

2. Selection Sort

3. Insertion Sort
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 15
void main()
{

int a[MAX],n; char ch;
void inputarray(int [],int); 
void outputarray(int [],int);
void bubblesort(int[],int);
void selectionsort(int[],int); 
void insertionsort(int[],int); 
void swap(int[],int,int); 
while(1)
{

printf("\n	");
printf("\n1.Bubble Sort.\n2.Seletion Sort.\n3.Insertion Sort.\n4.Exit.\n"); printf("Enter Your choice: ");
 

scanf("%d",&ch); switch(ch)
{
case 1:
printf("\nEnter array Size: "); scanf("%d",&n);
if(n<MAX)
{

printf("\nEnter the values of array :\n"); inputarray(a,n);                            printf("	\n");
printf("Entered array values are :\n"); outputarray(a,n);
printf("\nBubble sorted array is :\n"); bubblesort(a,n);
outputarray(a,n);
}

else
{

printf("Array size is greater than MAX.");
}

break; case 2:
printf("Enter array Size: "); scanf("%d",&n);
if(n<MAX)
{

printf("Enter the values of array :\n");
 
inputarray(a,n);       
printf("	\n");
printf("Entered array values are :\n");
outputarray(a,n);
printf("\nSelection sorted array is :\n"); 
selectionsort(a,n);
outputarray(a,n);
}

else
{

printf("Array size is greater than MAX.");
}

break; case 3:
printf("Enter array Size: "); scanf("%d",&n);
if(n<MAX)
{

printf("Enter the values of array :\n"); inputarray(a,n);                         printf("	\n");
printf("Entered array values are :\n"); outputarray(a,n);
printf("\nInsertion sorted array is :\n"); insertionsort(a,n);
outputarray(a,n);
}

else
 
{
printf("Array size is greater than MAX.");
}

break; case 4:
exit(1); default :
printf("\nPlease enter correct choice.");
}
}
}

void inputarray(int arr[],int n)
{

int i; for(i=0;i<n;i++)
{

scanf("%d",&arr[i]);
}
}

void outputarray(int arr[],int n)
{

int i; for(i=0;i<n;i++)
{

printf("%d ",arr[i]);
}
}

void bubblesort(int arr[],int n)
 
{
int i,j,temp; for(i=0;i<n-1;i++)
{

for(j=i+1;j<n;j++)
{

if(arr[j]<arr[i])
{

temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
}
}
}
}

void swap(int arr[],int i,int j)
{

int temp; temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
}

void selectionsort(int arr[],int n)
{

int i,j,min,minindex,temp; for(i=0;i<n-1;i++)
{

min=arr[i];
 
minindex=i; for(j=i+1;j<n;j++)
{
if(arr[j]<min)
{

min=arr[j]; minindex=j;
}
}

if(minindex!=i)
{

swap(arr,i,minindex);
}
}
}

void insertionsort(int arr[],int n)
{

int i,j,key; for(i=1;i<n;i++)
{

key=arr[i]; j=i-1;
while(j>0 && key<arr[j])
{

arr[j+1]=arr[j]; j=j-1;
}

arr[j+1]=key;
 
}
}


OUTPUT




....................


1.	Bubble Sort.


2.	Seletion Sort.


3.	Insertion Sort.


4.	Exit.


Enter Your choice: 1





Enter array Size: 5





Enter the values of array :


7
 
DATA STRUCTURE AND ANALYSIS OF ALGORITHM KCA 253 : Session 2020-21
5


3


4


9


...........................


Entered array values are :


75349


Bubble sorted array is :


34579


....................


1.	Bubble Sort.


2.	Seletion Sort.


3.	Insertion Sort.


4.	Exit.
 
DATA STRUCTURE AND ANALYSIS OF ALGORITHM KCA 253 : Session 2020-21
Enter Your choice: 2


Enter array Size: 5


Enter the values of array :


7


9


1


3


5


...........................


Entered array values are :


79135


Selection sorted array is :


13579


....................
 
DATA STRUCTURE AND ANALYSIS OF ALGORITHM KCA 253 : Session 2020-21
1.	Bubble Sort.


2.	Seletion Sort.


3.	Insertion Sort.


4.	Exit.


Enter Your choice: 3


Enter array Size: 5


Enter the values of array :


4


9


6


7


5


...........................


Entered array values are :
 




49675
 
DATA STRUCTURE AND ANALYSIS OF ALGORITHM KCA 253 : Session 2020-21
 


Insertion sorted array is :


45679


....................


1.	Bubble Sort.


2.	Seletion Sort.


3.	Insertion Sort.


4.	Exit.


Enter Your choice: 4
