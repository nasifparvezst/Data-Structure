#include<stdio.h>
int main(){
int i,j,temp;
int arr[5]={8,6,12,3,9};
for(i=1;i<5;i++){
    temp = arr[i];
    j = i-1;
    while(j>=0 && arr[j] > temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}
printf("The sorted value are : ");
 for(i=0;i<5;i++){
    printf("%d ",arr[i]);
 }

 int left,right,item,midd;\
 left = 0;
 right = 5-1;
 printf("\nItem Value = ");
 scanf("%d",&item);
 while (left <= right){

    midd = (left+right)/2;

    if(arr[midd] == item){
        printf("\nFound the value in %d Index.",midd);
        return 0;
    }
    else if(arr[midd] < item)
        left = midd + 1;
    else if(arr[midd] > item)
    right = midd - 1;

 }
   printf("\nItem Not Found in Any Index.");

return 0;
}
