#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3]={{11,12,13},{21,22,23},{31,32,33}};
    for(i=0;i<3;i++){
        printf("[");
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("]\n");}
    
    return 0;
}
