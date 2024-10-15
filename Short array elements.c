//Problem of shorted an array elements
#include<stdio.h>
int main(){
int i,j,next,arr[5];
printf("Enter the Elements :");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i++){                 //[Nasif Parvez]
    for(j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
          next = arr[i];
          arr[i] = arr[j];
          arr[j] = next;
        }
    }
}
for(i=0;i<5;i++){
    printf("%d ",arr[i]);
}
return 0;
}
