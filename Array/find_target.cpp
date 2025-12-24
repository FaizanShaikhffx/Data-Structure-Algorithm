#include<bits/stdc++.h>
using namespace std;
bool findtarget(int arr[], int size, int target){
  for(int i = 0; i<size; i++){
    if(arr[i] ==  target){
      return true; 
    }
  }
  return false;

}

int main (){;
  
  int arr[6] = {1, 4, 7, 9, 2, 6}; 
  int size = 6; 
  int target = 2; 

  bool isAvailable = findtarget(arr, size, target); 
  if(isAvailable){
    cout<<"Target Is Avaialble"; 
  }else{
    cout<<"Target Is Not Avaialble"; 
  }

  return 0;
}