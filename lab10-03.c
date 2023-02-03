#include<stdio.h>
#include<conio.h>
#include <unistd.h>
int	function(); 
int function02(); 
int function03();   
int function04();
int function()
{
int i, n,A_max,length ;
    int arr[] = {66, 111, 77,75,80,956};            
  length = sizeof(arr)/sizeof(arr[0]);       
   A_max = arr[0];            
    for ( i = 0; i < length; i++) {          
       if(arr[i] > A_max)    
           A_max = arr[i];    
    }      
    printf("Largest element of array: %d\n", A_max);    
    return 0;    
}
int function02(){
	  char s[20];  
    printf("Enter the string?");  
    scanf("%s",s);  
    printf("You entered %s",s);
	  
}
int function03(){
//String concatenation 
//int function03(){
//	
//  char a[1000], b[1000];
//
//  printf("Enter the first string\n");
//  gets(a);
//
//  printf("Enter the second string\n");
//  gets(b);
//
//  strcat(a, b);
//
//  printf("String obtained on concatenation: %s\n", a);
//
//  return 0;
  

//  
//		 char s1[100] = "Imon", s2[] = "Mostafa";
//		  int length, j;
//		
//		
//		  length = 0;
//		  while (s1[length] != '\0')
//		    {
//		    ++length;
//		    }
//		  for (j = 0; s2[j] != '\0'; ++j, ++length)
//		   {
//		    s1[length] = s2[j];
//		   }
//		   
//		  s1[length] = '\0';
//		
//		  printf("concatenation: ");
//		  puts(s1);
//		
//		  return 0;
//		
			  
	  
}
int	function04(){

	
  char a[1000], b[1000];
  int l,p,c = 0;
  printf("Enter the string:");
  scanf("%s",&a);  
  printf("Input the position to start extraction :");
  scanf("%d", &p);
  printf("Input the length of substring :");
  scanf("%d", &l); 

while (c < l) 
   {
      b[c] = a[p+c-1];
      c++;
   }
   b[c] = '\0';
  printf("String obtained on concatenation: %s\n", &b);

  return 0;
	
}


int main()
{     
//function();   
 	//function02();   
 //	function03();
 //String concatenation 
 		function04(); 
		 //substring 
    return 0;
}
