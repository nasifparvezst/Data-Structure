//Bubble sort
#include<stdio.h>
 int main(){
    int n,i,j,next;

    printf("Enter The Number of Elements : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter The Elments of Array:");            //[NASIF PARVEZ]
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
      for(i=0;i<=n;i++){

        for(j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
            next = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = next;
        }
       }
      }
      for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
      }

 return 0;
 }

