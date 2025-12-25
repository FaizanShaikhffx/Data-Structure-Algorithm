#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int size, int n){

  n = n % size; 

  
  if(n == 0){
    // No need to do anything
    return; 
  }
  
  //copy last n elements into a temp array
  int temp[1000]; 
  int idx = 0; 
  for(int i = size-n; i<size; i++){
    temp[idx] = arr[i]; 
    idx++;  
  }

  for(int i = size-1; i>=0; i--){
    arr[i] = arr[i - n]; 
  }


  for(int i = 0; i<n; i++){
    arr[i] = temp[i]; 
  }


}

int main (){
  
  int arr[6] = { 10, 20, 30, 40, 50, 60 }; 
  int size = 6;
  int n = 2;

  rotateArray(arr, size, n); 

  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" "; 
  }

  return 0;
}

