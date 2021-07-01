//PROGRAM TO IMPLEMENT BINARY SEARCH



#include<stdio.h>

int main()

{

int arr[20],size , i,item ,beg,end,mid;

printf("enter the size of an ARRAY\n");

scanf("%d",&size);

printf("enter the elements\n");

for (i=0;i<size;i++)


{

scanf("%d",&arr[i]);

}

printf("elements in a list are \n");

for(i=0;i<size;i++)

{

printf("%d",arr[i]);

printf("\t");

}

printf("\nenter element to search \n");

scanf("%d",&item);



beg=0;

end=size-1;

mid=(beg+end)/2;

while(arr[mid]!=item && beg<=end)

{

if(item < arr[mid])

{

end = mid - 1 ;

}

else

{

beg = mid + 1 ;

}

mid = (beg + end)/2;

}

if(arr[mid] == item)
 


{

printf("\n item found at location %d",mid+1);

}

else

{

printf("\nitem not found");

}





return 0;

}





 


