//Write a program to transpose a 2D array.



#include <stdio.h>
int insert_array();
int display_array(); 
int transpose();
int arr1[5][5],arr2[5][5],arr3[5][5];
int i,j; int main()

{

int choice,repeat;

do

{

printf("enter your choice \n 1.insertion of matrices.\n2.display of an matrices.\n3.TRANSPOSE of a matrices." );

scanf("%d",&choice);

switch(choice)

{

case 1:insert_array();break;

case 2:display_array();break;

case 3:transpose();break;

}

printf("enter 1 to do more operation\n"); scanf("%d",&repeat);
} while(repeat==1); return 0;
}

int insert_array()

{ printf("Enter the elements of array1\n");

for(i=0; i<3; i++)

{  for(j=0;j<3;j++)

{ printf("Enter value for arr1[%d][%d]:", i, j); scanf("%d", &arr1[i][j]);

}

}



 printf("Enter the elements of array2\n"); for(i=0; i<3; i++)

{  for(j=0;j<3;j++)

{    printf("Enter value for arr2[%d][%d]:", i, j);

scanf("%d", &arr2[i][j]);

}


}return 0;

}

int display_array()

{

printf("elements of array1 are:\n");

for(i=0;i<3; i++)

{

for(j=0;j<3;j++)

{

printf("%d ", arr1[i][j]);

printf(" ");

}

printf("\n"); }

printf("elements of array2 are :\n");

for(i=0;i<3; i++)

{

for(j=0;j<3;j++)

{

printf("%d ", arr2[i][j]);

printf(" ");

}

printf("\n");

}

}

int transpose()

{
 
printf("transpose of matrix 1\n"); {
for( i=0;i<3;i++)
  for(j=0;j<3;j++)
  {
    printf("%d",arr1[j][i]);
    printf(" ");
  }

printf("\n");
}
printf("transpose of matrix 2\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
  printf("%d",arr2[j][i]);
  printf(" ");
  }
printf("\n");
} 


OUTPUT :

enter your choice

1.insertion of matrices.

2.display of an matrices.

3.TRANSPOSE of a matrices.1

Enter the elements of array1

Enter value for arr1[0][0]:1

Enter value for arr1[0][1]:2

Enter value for arr1[0][2]:3

Enter value for arr1[1][0]:4

Enter value for arr1[1][1]:5

Enter value for arr1[1][2]:6

Enter value for arr1[2][0]:7

Enter value for arr1[2][1]:8

Enter value for arr1[2][2]:9

Enter the elements of array2

Enter value for arr2[0][0]:1

Enter value for arr2[0][1]:2

Enter value for arr2[0][2]:3

Enter value for arr2[1][0]:4

Enter value for arr2[1][1]:5

Enter value for arr2[1][2]:6

Enter value for arr2[2][0]:7

Enter value for arr2[2][1]:8

Enter value for arr2[2][2]:9

enter 1 to do more operation

1

enter your choice

1.insertion of matrices.

2.display of an matrices.

3.TRANSPOSE of a matrices.2

elements of array1 are:

1 2 3

4 5 6

7 8 9

elements of array2 are :

1 2 3

4 5 6
 

7 8 9

enter 1 to do more operation

1

enter your choice

1.insertion of matrices.

2.display of an matrices.

3.TRANSPOSE of a matrices.3

transpose of matrix 1

1 4 7

2 5 8

3 6 9

transpose of matrix 2

1 4 7

2 5 8

3 6 9

enter 1 to do more operation

