#include <stdio.h>

void bubble_sort(int arr[], int count){
  int temp;
  for(int i=0; i<count; i++){
    for(int j=0; j<count-1; j++){
      if(arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        }
     }
   }
}

   
