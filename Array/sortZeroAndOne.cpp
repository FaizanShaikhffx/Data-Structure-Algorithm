#include<bits/stdc++.h>
using namespace std;

  void sortZero(int arr[], int size){
    int countZero = 0; 

    for(int i = 0; i<size; i++){
      if(arr[i] == 0){
        countZero++; 
      }
    }

    for(int i = 0; i<countZero; i++){
      arr[i] = 0; 
    }

    for(int i = countZero; i<size; i++){
      arr[i] = 1; 
    }

    for(int i = 0; i<size; i++){
      cout<<arr[i]<<" "; 
    }
  }

int main (){
  
  int arr[7] = {0, 1, 0, 1, 0, 1, 1};
  int size = 7;

  sortZero(arr, size); 

  

  return 0;
}