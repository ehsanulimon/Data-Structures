#include <stdio.h>
int	function01()
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);


}
int function02(){

   int c, BEG, END, MID, n, ITEM, LOC[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   
   printf("Enter %d integers item:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",& LOC[c]); 
      
   printf("Enter the item to find:\n");
   scanf("%d", &ITEM);
   
   
   BEG = 0;
   END= n - 1;
   MID = (BEG+END)/2;
   
   while (BEG <= END) {
      if ( LOC[MID] < ITEM)
        BEG = MID + 1;    
      else if ( LOC[MID] == ITEM) {
         printf("%d is present at index %d.\n", ITEM, MID+1);
         break;
      }
      else
         END = MID - 1;
     MID = (BEG + END)/2;
   }
   if (BEG > END)
      printf("Not found! %d is not present in the list.\n",ITEM);
 

}
int function03(){
	
	
	
}

int main(){
//	function01(); /Binary Search X
	function02(); //Binary Search v
         // function03();
	  return 0;
}
