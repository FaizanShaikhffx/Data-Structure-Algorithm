#include<bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int n){
  int i = 0; 
  int j = n-1; 

  while(i < j){
    // int temp = arr[i]; 
    // arr[i] = arr[j];
    // arr[j] = temp; 
    // i++; 
    // j--; 

    swap(arr[i], arr[j]); 
    i++; 
    j--; 
  }

  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" "; 
  }

  
}

int main (){;
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int n = 6; 

  // reverseArray(arr, n); 

  int a = 5; 
  int b = 10; 

  // Method 1
  // swap(a, b);
  
  //Method 2
  // int temp = a; 
  // a = b; 
  // b = temp; 

  //Method 3
  a = a^b; 
  b = b^a; 
  a = a^b; 

  cout<<"a: "<<a<<", b: "<<b<<endl; 

  //pathan sara abdul qadir0
   
  return 0;
} 