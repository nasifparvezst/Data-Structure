//Binary search
#include<stdio.h>
int main(){
  int n,left,right,mid;
  printf("Total index : ");     // [NASIF PARVEZ]
  scanf("%d",&n);
  int arr[n];
  printf("Enter the sorted value : ");
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }

   left = 0;
   right = n-1;

   int item;
    printf("Finding value : ");
    scanf("%d",&item);

   while (left <= right){
    mid = (left+right)/2;

        if(item == arr[mid]){
        printf("Item found at number of %d index.",mid);
        return 0;
        }
    else if(item > arr[mid]){
        left = mid + 1;
     }
    else //if (item < arr[mid])
        {
        right = mid - 1;
    }
   }
   printf("Item is not found.");

return 0;
}
