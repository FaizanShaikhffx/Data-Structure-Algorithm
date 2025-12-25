#include<bits/stdc++.h>
using namespace std;

void printTriplets(int arr[], int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      for(int k = 2; k<n; k++){
        if(arr[i] == arr[j] || arr[i] == arr[k] || arr[j] == arr[k]){
          continue; 
        }else{
          cout<<"{"<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<"}";  
        }
      }
    }
    cout<<endl; 
  }
}

int main (){;
  int arr[4] = {10, 20, 30, 40}; 
  int size = 4; 
  printTriplets(arr, size); 

  return 0;
}