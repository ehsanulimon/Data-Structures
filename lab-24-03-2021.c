#include<stdio.h>
#include<conio.h>
#include <unistd.h>
int reverse_string01(){
char Str[100], RevStr[100];
  	int i, j, len;
 
  	printf("\n Please Enter any String :  ");
  	gets(Str);
  	
  	j = 0;
  	len = strlen(Str);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}
  	RevStr[i] = '\0';
 
  	printf("\n String after Reversing = %s", RevStr);
  	
  	return 0;	
	
	
	
	
	
}
int reverse_string02(){
 char str[100], temp;
   int i=0, j = 0,count=0;
 
   printf("\nEnter the string :");
   //gets(str);
    scanf("%s",&str);   //imon
   
  // j = strlen(str) - 1;
while(str[count]!='\0'){
	
	count++;
}
 j=count-1;
                          //i=0  & j=3
 
   while (i < j) {
      temp = str[i]; // i  ->
      str[i] = str[j];  //n
      str[j] = temp;  //i
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
   return (0);
	
	
	
	
}
int	pattern_matching(){
	int i,count=0;
 char txt[] = "matchesPointisthebestplatformforprogrammers";
   char pat[] = "a";
   int M = strlen (pat);
   int N = strlen (txt);
   for ( i = 0; i <= N - M; i++){
      int j;
      for (j = 0; j < M; j++)
         if (txt[i + j] != pat[j])
      break;
      if (j == M)
         printf ("Pattern matches at index %d \n", i);
   }
   return 0;
		
	}
int	linear_arr(){
	int i;	
    int s[6];  
    printf("Enter the string?");  
   
    for (i = 0; i<6; i++){
     scanf("%d",&s[i]);  	
	}
  
    for (i = 0; i<6; i++){
    printf("You entered %d",&s[i]);	
	}
  
   
	  	
		
	}

int main(){
//	reverse_string01();
		//reverse_string02(); //Without Using Library Function
		pattern_matching();
//	linear_arr();
	return 0;
}
