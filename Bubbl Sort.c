#include<stdio.h>
int main(){
int n,i,j,temp;
printf("How many index do you want : ");
scanf("%d",&n);
int arr[n];
printf("The value of array : ");
for (i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
  for (i=0;i<n-1;i++){
    for (j=0;j<n-i-1;j++){
        if (arr[j] > arr[j+1]){

            temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
     }
    }
  }
  printf("The sorted value are : ");
  for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
  }

return 0;
}


