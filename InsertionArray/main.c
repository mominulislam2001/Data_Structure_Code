#include <stdio.h>
#include <stdlib.h>


void display(int arr[],int n){
    //Traversal in Array:
   for(int i=0;i<n;i++){
     printf("%d\n",arr[i]);
   }

}

//Insertion Element in perticular Index in Array:
int indInsertion(int arr[],int size,int element,int capacity,int index){
   if(size>=capacity){

      return -1;
   }
   for(int i=size-1;i>=index;i--){

   arr[i+1]= arr[i];
   }
   arr[index] = element;
   return 1;
}

int main()
{

}
