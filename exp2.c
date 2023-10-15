#include<stdio.h>
#define INT_MAX 2147483647
void main()
{
    int i,j,greatest=0,smallest=INT_MAX,gtid,ltid;
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j]&&arr[i]>greatest)
        {
            greatest=arr[i];
            gtid=i;
        }
        else if(arr[j]>arr[i]&&arr[j]>greatest)
        {
            greatest=arr[j];
            gtid=j;
        }

        }
        
    }
            if(arr[i]<arr[j]&&arr[i]<smallest)
        {
            smallest=arr[i];
            ltid=i;
        }
        else if(arr[j]<arr[i]&&arr[j]<smallest)
        {
            smallest=arr[j];
            ltid=j;
        }
    printf("\nGreates number form array is at index[%d]\n smallest number form array is at index[%d]and is:%d\n\n",gtid,ltid,greatest,smallest);
}