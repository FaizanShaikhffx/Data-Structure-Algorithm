#include<bits/stdc++.h>
using namespace std;


void evenOrOdd(int n){
  if(n%2 == 0){
    cout<<"Number is even"; 
  }else{
    cout<<"Number is Odd"; 
  }
}

int factorial(int n){
  int fact = 1;
  for(int i = 1; i<=n; i++){
    fact = fact * i; 
  }
  return fact; 
}

bool checkPrime(int n){
  int i = 2;
  for(i = 2; i<n; i++){
    if(n % i == 0){
      return false; 
    }else{
      return true;
    }
  }
}

int main (){

  // int n = 1234; 

  // while(n > 0){
  //   int digit = n % 10; 
  //   n = n / 10; 
  //   cout<<digit<<" ";

  // }

  // evenOrOdd(2);
  // int n;
  // cout<<"Enter The Value : "; 
  // cin>>n;
  // int ans = factorial(n); 
  // cout<<ans;


  int n;
  cout<<"Enter Number : "; 
  cin>>n;
  bool isPrime = checkPrime(n);
  if(isPrime){
    cout<<"Number Is Prime"; 
  }else{
    cout<<"Number Is Not Prime"; 
  }

  return 0;
}