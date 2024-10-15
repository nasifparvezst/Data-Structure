#include<stdio.h>
void merge (int A[],int low,int mid,int high){
    int i,j,k,B[10];
    i = low,j = mid+1,k = low;
    while(i <= mid && j <= high){
    if (A[i] < A[j]){
        B[k] = A[i];
        i++;k++;
    }
    else{
        B[k] = A[j];
        j++;k++;
    }
    }
    while(i<=mid){
       B[k] = A[i];
        i++;k++;
    }
    while(j<=high){
         B[k] = A[j];
        j++;k++;
    }
    for(i=low;i<=high;i++){
        A[i] = B[i];
    }
}
void mergesort(int A[],int low,int high){
   int mid;
   if(low<high){
    mid = (low+high)/2;
    mergesort(A,low,mid);
    mergesort(A,mid+1,high);
    merge(A,low,mid,high);
   }
}
    void print(int A[],int n){
    for(int i = 0;i<n;i++){

        printf("%d ",A[i]);
    }
    printf("\n");
}
int main(){
int A[] = {12,9,31,14,7,2};
int n = sizeof A / sizeof A[0];

 print(A,n);
 mergesort(A,0,n-1);
 print(A,n);

    return 0;
}