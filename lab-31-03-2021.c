#include<stdio.h>
#include<conio.h>
#include <unistd.h>
#define MAX_SIZE 100
function01(){
	
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
    
}
function02(){
	
	int arr[MAX_SIZE];
    int i, size, pos;

    /* Input size and element in array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input element position to delete */
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    /* Invalid delete position */
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

}
int function03(){
	int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)  //n=4 & c<4 c=0/1/2/3
  {
    for (d = 0 ; d < n - c - 1; d++) // d< 5-(0/1/2/3)-1
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

}
int main(){
	
//	function01(); //insert an element
	//function02(); //deletion
	function03();  //Bubble sort 
	return 0;
}
