#include <stdio.h>
#include<conio.h>

int main()
{
   int array[100], po,c,n, val;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   printf("Enter the location to insert an element\n");
   scanf("%d",&po);

   printf("Enter the value to insert\n");
   scanf("%d",&val);

   for (c =n - 1; c >=po-1;c--)
      array[c+1]=array[c];

   array[po-1]=val;

   printf("Result array is\n");

   for (c=0; c<= n;c++)
      printf("%d\n",array[c]);
    getch();
   return 0;
}
