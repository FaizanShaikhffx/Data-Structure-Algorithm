#include<bits/stdc++.h>
using namespace std;

int main (){;
  int arr[4] = {10, 20, 30, 40}; 
  int size = 4; 
  
  for(int i = 0; i<size; i++){
    for(int j = i+1; j<=size; j++){
      cout<<" { "<<arr[i]<<", "<<arr[j]<<"} "; 
    }
    cout<<endl;
  }

  return 0;
}