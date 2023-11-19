#include <iostream>
#include<math.h>
using namespace std;


bool isprime(int num){
  for(int i=2; i<=sqrt(num); i++){
    
    if(num%i==0){
      return 0;
    }
  }
      return 1;
  
}


int main(){
int num;
  cout<<"Enter num ";
  cin>>num;
  cout<<endl;

  for(int i=2; i<=num; i++){
    bool ans = isprime(i);
    if(ans){
      cout<<i<<" Yes prime "<<endl;
    }
  }
 



  
for(int i=0; i<num; i++){
  for(int j=0; j<i+1; j++){
    if(i==0||i==num-1)
    cout<<j+1<<" ";
    else if(j==0||j==i)
      cout<<j+1<<" ";
    else
      cout<<" "<<" ";
  }
  cout<<endl;
}
  
  int fact = 1;
  for(int i=1; i<=num; i++){
   fact = fact*i;
    
  }
  cout<<"Factorai of "<<num<<" is "<<fact;

  

  return 0;
}