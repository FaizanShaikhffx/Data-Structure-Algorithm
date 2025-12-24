#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size){

  int max = INT_MIN; 

  for(int i =0; i<size; i++){
    if(arr[i] > max){
      max = arr[i]; 
    }
  }
  return max; 

}

int findMin(int arr[], int size){
  int min = INT_MAX; 
  for(int i = 0; i<size; i++){
    if(arr[i] < min)
      min = arr[i]; 
    
  }
  return min; 
}


int main (){;
  
  int arr[5] = {12, 54, 64, 23, 95}; 
  int size = 5; 

  // int ans = findMax(arr, size); 
  int ans = findMin(arr, size); 
  cout<<ans;

  return 0;
}