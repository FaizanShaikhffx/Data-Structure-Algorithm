#include<bits/stdc++.h>
using namespace std;

pair<int, int> checkTwoSum(int arr[], int n, int target){
  pair<int, int> ans = make_pair(-1, -1); 
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      if(arr[i] + arr[j] == target){
        ans.first = arr[i]; 
        ans.second = arr[j]; 
        return ans; 
      }
    }
  }
  return ans; 
}

int main (){;
  int arr[5] = {10, 5, 20, 15, 30}; 
  int size = 5; 
  int target = 35; 

  pair<int, int> ans = checkTwoSum(arr, size, target); 

  ans.first == -1 ? cout<<"Pair not found" : cout<<"Pair Found : {"<<ans.first<<", "<<ans.second<<"}"; 
  
  
  return 0;
}