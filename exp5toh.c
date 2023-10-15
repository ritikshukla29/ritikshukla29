#include<stdio.h>
#include<stdlib.h>
void toh(int n,char source,char auxillary,char destination)
{
    if(n==1)
    {
        printf("move disk 1 from %c to %c \n",source ,destination);
        return ;
    }
    toh(n-1,source, destination,auxillary);
    printf("move disk %d from %c to %c \n",n,source,destination);
    toh(n-1,auxillary,source,destination);
}
int main()
{
    int n;
    printf("enter the number of disks:");
    scanf("%d",&n);
    toh(n,'a','b','c');
    return 0;
}
