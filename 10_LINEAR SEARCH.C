//PROGRAM TO IMPLEMENT LINEAR SEARCH:

#include<stdio.h>

int main()

{

int item,arr[20],size,loc,i;

printf("enter the size of an array");

scanf("%d",&size);

printf("\nenter the item of an array\n");

for (i=0;i<size;i++)

{

scanf("%d",&arr[i]);

}

printf("\nenter item to search");\

scanf("%d",&item);

for(i=0;i<size;i++)

{

if(arr[i]==item)

{

loc=i+1;

break;

}

}



if(i==size)

{
 

printf("\nitem not found");

}

else

{

printf("\nitem found at location %d",loc);

}

return 0;

}


 


































