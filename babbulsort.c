#include<stdio.h>  
void main ()  
{  
    int i, j,temp;   
    int a[8] = { -12, 4, 67, 54, 70, 0, 81, 8};   
    for(i = 0; i<8; i++)  
    {  
        for(j = i+1; j<8; j++)  
        {  
            if(a[j] > a[i])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;   
            }   
        }   
    }   
    printf("Printing Sorted Element List \n");  
    for(i = 0; i<8; i++)  
    {  
        printf("%d\n",a[i]);  
    }  
}  
