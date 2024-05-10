#include<iostream>
#include<limits.h>
using namespace std;

void print_arr(int arr[],int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

void minNum(int arr[],int size){

  int minans = INT_MAX;
  int i=0;
   while(i<size){
    if(arr[i]<minans){
      minans = arr[i];
      
    }
     i++;
  }
  cout<<"Min Num : "<<minans<<endl;
}

void maxNum(int arr[],int size){
  int maxNum = INT_MIN;

  int i=0;
  while(i<size){
    if(arr[i]>maxNum){
      maxNum = arr[i];
    }
    i++;
  }
  cout<<"Max Num : "<<maxNum<<endl;
}

int uniqueELEMENT(int arr[],int size){
  int ans =0;
  for(int a = 0; a<size; a++){
  
    ans = arr[a]^ans;
      
   
  }
 return ans;
}

void printPair(int arr[],int size){

  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      cout<<arr[i]<<" "<<arr[j]<<endl;
    }
  }
}

void printTriplet(int arr[],int size){
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      for(int k=0; k<size; k++){
        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
      }
    }
  }
}

//sort 0's & 1's
void sortZeroOne(int arr[],int size){
  int zeroCount = 0;
  int oneCount = 0;

  for(int i=0; i<size; i++){
    if(arr[i]==0){
      zeroCount++;
    }
    if(arr[i]==1){
      oneCount++;
    }
  }

 int index=0;
  while(zeroCount--){
    arr[index] = 0; 
    index++;
  }

  while(oneCount--){
    arr[index] = 1;
    index++;
  }
    
  
}

//right shift
void shiftArr(int arr[],int size){
  //step 1 
  int temp = arr[size-1];
  //step 2
  for(int i=size-1; i>=1; i--){
    arr[i]= arr[i-1];
  }

  //step 3
  arr[0] = temp;
  
}

//left shift


int main(){

int arr[11] = {10,20,30,40,50,60,70,80,90,100,100};
int size = 11;

  shiftArr(arr,size);
  // sortZeroOne(arr,size);
   print_arr(arr,size);
  // printTriplet(arr, size);
  // printPair(arr,size);
 // int ans =  uniqueELEMENT(arr, size);
 //  cout<<"Unique element : "<<ans;
  // minNum(arr,size);
  // maxNum(arr,size);
 

  return 0;
}