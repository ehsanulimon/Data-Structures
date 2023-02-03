#include<stdio.h>
#include<conio.h>

int main(void)
{
    int n,i,searchelm,x,count=0;
    printf("Please Enter a range of Array : ");
    scanf("%d",&n);
    int array[n];

    printf("Please Enter the element of array :");
    for(i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
    for(i=0; i<n; i++)
        {
            printf("Include item :%d\n",array[i]);

        }
        printf("Which element you want search : \n");
        scanf("%d",&searchelm);


        for(i=0; i<n; i++)
        {
            if(array[i]== searchelm )
            {

                break;
            }
        }

            if(i<n)
            printf("Found : %d",i);

            else{
                printf("Not Found");
            }




}
