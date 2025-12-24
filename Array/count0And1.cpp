#include<bits/stdc++.h>
using namespace std;

// void count0and1(int arr[], int size){
//   int count0 = 0; 
//   int count1 = 0; 

//   for(int i = 0; i<size; i++){
//     if(arr[i] == 0){
//       count0++; 
//     }else if(arr[i] ==1){
//       count1++; 
//     }else{
//       continue; 
//     }
//   }

//   cout<<"Total 0's Are : "<<count0<<endl; 
//   cout<<"Total 1's Are : "<<count1<<endl; 
// }

void extremePrint(int arr[], int size){
  int i = 0; 
  int j = size-1; 
  
  while(i <= j){
    if(i == j){
      cout<<arr[i]<<" "; 
      i++; 
    }else{
      cout<<arr[i]<<" "; 
      i++; 
      cout<<arr[j]<<" "; 
      j--; 
    }
  }

}

int main (){;
  
  // int arr[12] = {1, 1, 0, 1, 1, 0 , 0, 1, 1, 0, 1, 0}; 
  // int size = 12; 

  // count0and1(arr, size); 

  int brr[7] = {10, 20, 30, 40, 50, 60, 70}; 
  int n = 7; 
  extremePrint(brr, n); 

  return 0;
}