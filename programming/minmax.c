#include<stdio.h>
int max(int arr[],int n);
int min(int arr[],int n);
int main(){
    int a[12]={8,5,4,6,4,3,5,7,2,6,8,7};
    int size;
    int maximum,minimum;
    size = sizeof(a)/sizeof(a[0]);
    printf("Size = %d\n",size);
    
    printf("MAX = %d\n",max(a,size));
    printf("MIN = %d",min(a,size));
    return 0;
}
int max(int arr[],int n){
    int ma=arr[0];
    for(int i=0;i<n;i++){
        if(ma<arr[i])
        ma=arr[i];
    }
    return ma;
}
int min(int arr[],int n){
    int mi=arr[0];
    for(int i=1;i<n;i++){
        if(mi>arr[i])
        mi=arr[i];
    }
    return mi;
}

