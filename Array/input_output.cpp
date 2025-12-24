#include<bits/stdc++.h>
using namespace std;

int printMax(int arr[],int size){
  int max = INT_MIN; 
  for(int i = 0; i<size; i++){
    if(arr[i] > max){
      max = arr[i]; 
    }
  }
  return max; 
}

int main (){;
  int arr[5]; 
  
  // for(int i = 0; i<5; i++){
    //   cout<<"Enter Array Element : "; 
    //   cin>>arr[i]; 
    // }
    
    // for(int j = 0; j<5; j++){
      //   cout<<arr[j]<<" "; 
      // }
      
  int brr[] = {10, 20, 30, 40, 50};
  int size = 5; 
  
  int ans = printMax(brr, size);
  cout<<ans; 
  return 0;
}