//Selection Sort
#include<stdio.h>
int main(){

int num,i,j,temp,min_ind;
printf("Enter the value of Array number : ");
scanf("%d",&num);

int arr[num];
printf("Enter the value of Array : ");        //[NASIF PARVEZ]
for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
}
  for(i=0;i<num-1;i++){
    min_ind = i;
    for(j=i+1;j<num;j++){
        if(arr[min_ind] > arr[j]){
            min_ind = j;
     }
    }
    temp = arr[min_ind];
    arr[min_ind] = arr[i];
    arr[i] = temp;
  
  }
  printf("The sort value of Array : ");
    for(i=0;i<num;i++){
    printf("%d  ",arr[i]);
}
printf("\n\n\n\t Programme End Successfully");


return 0;
}
