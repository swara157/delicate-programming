# include<stdio.h>

void pattern (int row,int cols) 
{
    int i,j;
    printf("Enter number of row & column");
    scanf ("%d %d",&i,&j);
    for(i=1;i<=row;i++) 
   { for(j=1;j<=cols;j++) 
   {printf ("\t",j);
   }
   printf ("\n");
}
}
void main() 
{int irow=0;
int icols=0;
printf ("Enter any two values");
scanf("%d %d",irow,icols);
pattern(irow, icols);
}
