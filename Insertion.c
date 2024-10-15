#include<stdio.h>
int main(){
    int i,n,size;
    printf("Enter the value of size :");
    scanf("%d",&size);
    printf("Index :");
    scanf("%d",&n);
int arr[size];
if(n>=size){
  printf("The insertion is not possible for this situation");
}
else {
  printf("The value of Array :");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for (i=n;i>=0;i--){
    arr[i+1] = arr[i];
  }
  arr[0]=420;
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);R
  }
 }

return 0;
}
