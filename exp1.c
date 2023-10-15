#include<stdio.h>
void main()
{
    int i,j,greatest=0,smallest,temp,a,b;
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    a=arr[5];
    b=arr[7];
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j]&&arr[i]>greatest)
        {
            greatest=arr[i];
        }
        else if(arr[j]>arr[i]&&arr[j]>greatest)
        {
            greatest=arr[j];
        }

        }
        
    }
    smallest=greatest;
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]<arr[j]&&arr[i]<smallest)
        {
            smallest=arr[i];
        }
        else if(arr[j]<arr[i]&&arr[j]<smallest)
        {
            smallest=arr[j];
        }

        }
        
    }
    temp=arr[4];
    arr[4]=arr[6];
    arr[6]=temp;
    printf("\n arr[5]=%d\n arr[7]=%d\n\n",a,b);
    printf("greatest number of array is:%d \n smallest number of array is%d \n",greatest,smallest);
    printf("new array is [");
    for(i=0;i<9;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d]\n\n",arr[9]);
}