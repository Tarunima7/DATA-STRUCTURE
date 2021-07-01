//Write a program to implement circular queue using array.


#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#define MAX 10

#define NILL -1

typedef struct queuetype

{

int a[MAX];

int front,rear;

}qu;

void main()

{

int isfull(qu *);

int isempty(qu *);

void equeue(qu *,int);

int deletequeue(qu *);

qu q;

q.front=q.rear=NILL;

int ch,item;

while(1)

{

printf("\n.............................");

printf("\n1.Insert in Queue.\n2.delete from Queue.\n3.Exit\n");


printf("enter Your choice:");

scanf("%d",&ch);

switch(ch)

{

case 1:

printf("\nEnter element to Insert:");

scanf("%d",&item);

if(isfull(&q))

{

printf("Queue is full");

}

else

{

equeue(&q,item);

}

printf("Element inserted is %d",item);

break;

case 2:

if(isempty(&q))

{

printf("\nQueue is empty");

}

else

{

item=deletequeue(&q);

printf("\nDeleted %d",item);

}

break;
 

case 3:

exit(1);

default:

printf("\nEntered wrong choice");

}

}

}

int isfull(qu *Q)

{

if((Q->front==0 && Q->rear==MAX-1) || (Q->rear==Q->front-1))

{

return 1;

}

else

return 0;

}

int isempty(qu *Q)

{

if(Q->front==NILL)

return 1;

else

return 0;

}

void equeue(qu *Q,int item)

{

int i;

if(Q->front==NILL)

{
 

Q->front=Q->rear=0;

}

else if(Q->rear==MAX-1)

{

Q->rear=0;

}

else

{

Q->rear=Q->rear+1;

}

Q->a[Q->rear]=item;

}

int deletequeue(qu *Q)

{

int i;

i=Q->a[Q->front];

if(Q->front==Q->rear)

(Q->front=Q->rear)==NILL;

else if(Q->front==MAX-1)

Q->front=0;

else

Q->front=Q->front+1;

return i;

}


 

































