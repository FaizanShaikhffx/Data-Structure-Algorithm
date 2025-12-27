#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int k){
  int temp[10]; 

  //shift se pehle wale elements temp me le rahe hai taaki woh preserve rahe.
  for(int i = 0; i<k; i++){
    temp[i] = arr[i]; 
  }

  for(int i = k; i<n; i++){
    arr[i-k] = arr[i]; 
  }

  int idx = 0; 
  for(int i = n-k; i<n; i++){
    arr[i] = temp[idx]; 
    idx++; 
  }
}

int main (){;
  int arr[5] = {10, 20, 30, 40, 50}; 
  int n = 5; 
  int k = 3; 

  rotateArray(arr, n, k); 

  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" "; 
  }
  
  return 0;
}