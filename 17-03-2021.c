#include<stdio.h>
#include<conio.h>
#include <unistd.h>
int main(){

	
  char a[], sub[1000],ins[100];
  int l,p,c = 0;
  printf("Enter the string:");
  scanf("%s",&a);  
 int  length = sizeof(a)/sizeof(a[]);  
  printf("Input the position to start extraction :");
  scanf("%d", &p);
  printf("Input the length of substring :");
  scanf("%d", &l); 

while (c <l) 
   {
      sub[c] = a[p+c-1];
      c++;
   }
   sub[c] = '\0';
  printf("String obtained on concatenation: %s\n", &sub);
  printf("length: %s\n", &length);


return 0;
}
