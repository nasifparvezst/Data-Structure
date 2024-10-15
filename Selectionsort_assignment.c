#include<stdio.h>
int main (){

    int i,j,temp,min_idx;
    int A[9] = {425,86,19,69,1,74,53,463};
   
     for(i=0;i<8-1;i++){
        min_idx = i;
        
        for(j=i+1;j<8;j++){
        if(A[min_idx] > A[j]){
            min_idx = j;
        }
      }
        temp = A[min_idx];
        A[min_idx] = A[i];
        A[i] = temp;
       
     }
     printf("\n\nSorted value are : ");
     for(i=0;i<8;i++){
        printf("%d ",A[i]);
     }
     printf("\n\n");
     int position;
     int ins_elem = 58;
       for(i=0;i<8-1;i++){
        if(53 == A[i])
        {
           // printf("The position of 53 is %d index.",i);
            position = i;
        }
       }
      int item = 58;
       for(i=8;i>position;i--){
          A[i+1] = A[i];
         
       }
       A[position + 1] = ins_elem;
       printf("\nAfter insert new element then sorted value are :");
        for(i=0;i<8;i++){
        printf("%d ",A[i]);
     }

    return 0;
}