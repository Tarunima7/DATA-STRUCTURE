//Write a program to implement singly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node

{

int info;

struct node *next;

};

int main()

{

int data,choice,item;

node *head=NULL,*newnode,*temp,*loc; while(1)
{ printf("\n1.INSERTION AT BEGINNING.\n2.INSERTION AT END.\n3.TRAVERSE.\n4.SEARCHING. \n5.DELETE FROM BEGINNING.\n6.DELETE FROM END.\n7.DELETE BY ITEM NAME .\n8.EXIT");

printf("\n enter choice"); scanf("%d",&choice); switch(choice)

{

case 1:{

printf("enter the data "); scanf("%d",&data); newnode=(node*)malloc(sizeof(struct node)); newnode->info=data;newnode->next=NULL; if(head==NULL)

head=newnode;

else{ newnode->next=head; head=newnode;}break;

case 2:{

printf("enter the data"); scanf("%d ",&data); newnode=(node*)malloc(sizeof(struct node)); newnode->info=data;newnode->next=NULL; if(head==NULL)

head=newnode; else
{ temp=head;

while(temp->next!=NULL)
{
temp=temp->next;

}temp->next=newnode;

}}break;

case 3:{

temp=head;

if(head==NULL)

printf("list is empty");

else{

while(temp!=NULL)

{printf("%d->",temp->info);

temp=temp->next;}}break;

}

}break;

case 4:{int count = 1;

loc=head;

printf("Enter item to Search :");

scanf("%d",&item);

while(loc!=NULL){

if(loc->info==item)

break;

count++;

loc=loc->next;

}

if(loc==NULL)

printf("item not found");

else

printf("item found at location %d",count); }break;
case 5:{

loc=head;

if(head==NULL)

printf("list is emplty");

else{

head=head->next;

free(loc);	}

}
    break;
  case 6:{if(head==NULL)

printf("list is empty");

else if(head->next==NULL)

{loc=head;

head=NULL;

free(loc);

}

else

{loc=head;


while((loc->next)->next!=NULL)

loc=loc->next;

temp=loc->next;

loc->next=NULL;

free(temp);

}

}break;

case 7:{printf("\NENTER ITEM TO DELETE :"); scanf("%d",&item);

loc=head;

temp=NULL;

while(loc!=NULL)

{

if(loc->info=item)

break;

temp=loc;

loc=loc->next;

loc->next=(loc->next)->next;

free(loc);}

if(head==loc)

{head=head->next;

free(loc);

}

else if(loc==NULL)

printf("element not found");

else {temp->next=loc->next;

free(loc);

}

}break;

case 8:{exit(1);}break;

}}

return 0;

}
---------------------------------------------------------------------------
---------------------------------------------------------------------------
OUTPUT :



1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice1

enter the data 2

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice1

enter the data 2

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice1

enter the data 3

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice3

3->2->2->

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice2
enter the data4

3

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice3->2->2->4->

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice5

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice3

2->2->4->

1.INSERTION AT BEGINNING.

2.INSERTION AT END.

3.TRAVERSE.

4.SEARCHING.

5.DELETE FROM BEGINNING.

6.DELETE FROM END.

7.DELETE BY ITEM NAME .

8.EXIT

enter choice4

Enter item to Search :4

item found at location 3






