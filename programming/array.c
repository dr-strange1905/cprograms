#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int *p;
    p= (int*)malloc(n*sizeof(int));
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
       scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
       printf("a[%d] = %d\n",i,*(p+i));
    }

    free(p);
    return 0;
}