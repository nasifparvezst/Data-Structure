#include<bits/stdc++.h>
#include<stdio.h>
#define item 5
using namespace std;
struct walton{
    char name[15];
    char modle_name[20];
    int price;
void print(){
    printf("Product Name : %s .\nModle Name : %s .\nProduct Price : %d \n\n",name,modle_name,price);
  //cout<<name<<" "<< modle_name<<" "<<price<<endl<<endl;
}
};
void sort(walton product[]){
   int i,j,temp,min_idx;
      for (i=0;i<item-1;i++){
        int min_idx = i;
        for( j=i+1;j<item;j++){
         if(product[min_idx].price > product[j].price){
          min_idx = j;
         }
        }
        walton temp = product[min_idx];
        product[min_idx] = product[i];
        product[i] = temp; 
      }
     } 
     void search(walton product[]){
     int find_price,found=0;
     printf("What price are you want? :");
     scanf("%d",&find_price);

      for(int i=0;i<item;i++){
        if(find_price == product[i].price){
          int find_idx = product[i].price;
          found = 1;
          printf("\nProduct Name : %s \nModle Name : %s ",product[i].name,product[i].modle_name);
        }
      }
         if(found == 0)
        printf("\nProduct not found according to the find_price.");
        
     }

int main(){
     struct walton product[item];

      strcpy(product[0].name,"Singer");
      strcpy(product[0].modle_name,"MJ2900");
      product[0].price = 12000;
      //product[0].print();
 
      strcpy(product[1].name,"LG");
      strcpy(product[1].modle_name,"MX2600");
      product[1].price = 16000;
     // product[1].print();

      strcpy(product[2].name,"Vision");
      strcpy(product[2].modle_name,"MJ2400");
      product[2].price = 11000;
     // product[2].print();

      strcpy(product[3].name,"Micro");
      strcpy(product[3].modle_name,"Wg2007");
      product[3].price = 17500;
     // product[3].print();
      strcpy(product[4].name,"Nova");
      strcpy(product[4].modle_name,"A6J100");
      product[4].price = 10000;
     // product[4].print();
   
      sort(product);
      for (int i=0;i<item;i++){
        product[i].print();
       }
       search(product);

    return 0;
}
