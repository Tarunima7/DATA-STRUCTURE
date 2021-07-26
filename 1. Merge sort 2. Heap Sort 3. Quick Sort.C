/*   Write a program to implement the following sorting algorithm
1. Merge sort
2. Heap Sort
3. Quick Sort
  */

Program:
#include<stdio.h> 
#include<stdlib.h> 
struct node
{
int data;
struct node *next;
};
struct node *front; struct node *rear; void insert();
void delete(); void display(); void main ()
{
int choice; while(choice!=4)
{
printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n"); printf("\nEnter your choice : ");
scanf("%d",& choice); switch(choice)
{


case 1:
insert(); printf("Queue after insertion: ");display(); break;
case 2:
delete(); printf("Queue after deletion: ");display(); break;
case 3:
display(); printf("The Queue is: "); break;
case 4: printf("Exiting!!"); exit(0);
break; default:
printf("\nInalid choice!!\n");
}
}
}
void insert()
{
struct node *ptr; int item;

ptr = (struct node *) malloc (sizeof(struct node)); if(ptr == NULL)
{
printf("\nOVERFLOW\n"); return;
}


else
{
printf("Enter value: "); scanf("%d",&item); ptr -> data = item; if(front == NULL)
{
front = ptr; rear = ptr;
front -> next = NULL; rear -> next = NULL;
}
else
{
rear -> next = ptr; rear = ptr;
rear->next = NULL;
}
}
}
void delete ()
{
struct node *ptr; if(front == NULL)
{
printf("\nUNDERFLOW\n"); return;
}
