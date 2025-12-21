#include<bits/stdc++.h>
using namespace std;

// int countSetBit(int n){
//   int count = 0;
//   while(n > 0){
//     int bit = n % 2; 
//     if(bit == 1){
//       count++; 
//     }

//   }
// }

int main (){;
  // int n; 
  // cin>>n;
  // int setBitCount = countSetBit(n); 
  // cout<<setBitCount<<endl; 
  
  int n;
  cout<<"Enter Number Of Digit : "; 
  cin>>n;

  int ans = 0; 
 
  int num = 0; 
  for(int i = 0; i<n; i++){
    
    int digit; 
    cout<<"Enter Number : "; 
    cin>>digit; 
    num = num * 10 + digit; //10
    
  }
  cout<<num; 

  return 0;
}