//Write a program to implement multiplication of two 2D arrays.
#include<stdio.h>

void inputarray(int [][10],int,int);

void outputarray (int [][10],int,int);

void multiarray (int [][10],int [][10],int [][10],int,int,int);

void main()

{

int array1[10][10], array2[10][10], array3[10][10],row1,col1,row2,col2; printf("enter the value of row and col for array 1..."); scanf("%d %d",&row1,&col1);

printf("enter the value of row and col for array 2..."); scanf("%d %d",&row2,&col2);

printf("enter the first array \n");

inputarray (array1,row1,col1);

printf("enter the second array \n");

inputarray (array2,row2,col2);

printf("array1\n");

outputarray (array1,row1,col1);

printf ("array2\n");

outputarray (array2,row2,col2);

if(col1==row2)

{

multiarray (array1, array2, array3,row1,col1,col2); printf ("multiplication of array\n");
outputarray (array3,row1,col2);

}

else

{

printf ("multiplication can't be possible \n");

}

}

void inputarray (int x[][10],int r, int c)

{

int i,j;

for(i =0;i<r ; i++)

{

for(j=0;j<c ; j++ )

{

printf("enter the value %d,%d ",i,j);

scanf("%d",&x[i][j]);

}

}

}

void outputarray (int x[][10],int r, int c)

{

int i , j;

for (i =0;i<r; i++)

{

for(j=0;j<c ; j++ )

{

printf("%d ",x[i][j]);

}

}

printf("\n");

}

void multiarray(int x[][10],int y[][10],int z[][10],int r1,int c1,int c2)

{

int i,j,k;

for(i=0;i<r1;i++)

{

for(j=0;j<c2;j++)

{

z[i][j]=0;

for(k=0;k<c1;k++)

{

z[i][j] += x[i][k]*y[k][j];

}

}

}

}


OUTPUT:

enter the value of row and col for array 1...2 2

enter the value of row and col for array 2...2 2

enter the first array

enter the value 0,0 2

enter the value 0,1 3	

enter the value 1,0 2

enter the value 1,1 3

enter the second array

enter the value 0,0 2

enter the value 0,1 3

enter the value 1,0 2

enter the value 1,1 3

array1

2323

array2

2323

multiplication of array

10 15 10 15
