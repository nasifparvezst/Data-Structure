#include<stdio.h>
int main(){
int i,n,size,pos;
printf("The value of size :");
scanf("%d",&size);
int arr[size];
printf("The value of n :");
scanf("%d",&n);
printf("The value of Array :");      //[ Nasif Parvez]
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Delete Index Position :");
scanf("%d",&pos);

arr[pos]= 100;
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
