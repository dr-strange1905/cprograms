// A C PROGRAM TO FIND A LOCAL PEAK ELEMENT IN AN ARRAY

#include<stdio.h>

int main(){
    int a[]={7,6,5,27,8,9,22};
    for(int i=0; i<7;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
