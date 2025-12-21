#include<bits/stdc++.h>
using namespace std;

int printMaxOfTwo(int a, int b){
  if(a > b){
    return a; 
  }else{
    return b; 
  }
}

int main (){;
  // int n; 
  // cout<<"Enter Value : "; 
  // cin>>n; 
  // int fact = 1; 

  // for(int i = 1; i<=n; i++){
  //   fact = fact * i; 
  // }
  // cout<<"Factorial Of "<<n<<" Is : "<<fact<<endl; 


  int a;
  int b; 

  cout<<"Enter A : "; 
  cin>>a; 
  
  cout<<"Enter B : "; 
  cin>>b;
  
  int ans = printMaxOfTwo(a, b); 
  cout<<"Answer Is : "<<ans; 

  return 0;
}