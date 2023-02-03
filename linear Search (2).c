#include<stdio.h>
#include<conio.h>
#include <unistd.h>
int	function(); 


int function()
{
  int item,i,l,al,c;   
       int num[]={33,44,55,22,59,12,90};
         //length of array
          l= sizeof(num);
           al=l/sizeof(int);
          //  item list output
         for(c=0; c<al; c++) {
		printf("%d,",num[c]);  
        } 
	    	//Search item input     
         printf("\n Enter Item:\t");
         scanf("%d",&item);
        for( i=0; i<al;i++){
            if(num[i]==item){
                printf("\nItem found at index: %d \t ",i);
			//	break;		  
            }  	     	         
        }
		return i; 
}

int main()
{     
	function(); 
     
 	
    return 0;
}
