#include<stdio.h>
int main(){
int i,n,size,pos;
printf("The value of size :");
scanf("%d",&size);
int arr[size];
printf("The value of n :");
scanf("%d",&n);
printf("The value of Array :");       //[ Nasif Parvez]
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Delete Index Position :");
scanf("%d",&pos);

for(i=0;i<n;i++){
   if (i == pos){
  continue;}
    printf("%d ",arr[i]);


}
return 0;
}
