#include <iostream>
#include <limits.h>
using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

bool lenearSearch(int arr[], int size, int target) {

  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return true;
    }
  }
  return false;
}

void countZO(int arr[], int size) {

  int countz = 0;
  int countO = 0;

  for (int i = 0; i < size; i++)

    if (arr[i] == 0) {
      countO++;
    } else {
      countz++;
    }

  cout << "No of Zero " << countO << endl;
  cout << "No of One " << countz << endl;
}

void minNum(int arr[], int size) {
  int minans = INT_MAX;

  int i = 0;
  while (i < size) {
    if (arr[i] < minans) {
      minans = arr[i];
    }
    i++;
  }

  cout << "Minmium No is " << minans;
}

void reverseArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    swap(arr[left], arr[right]);

    left++;
    right--;
  }

 
}


void extremPrintArr(int arr[],int size){

  int left =0; 
  int right = size-1;

  while(left<=right){

     if(arr[left]==arr[right]){
        cout<<arr[left]<<" ";
     }
      else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
      }
    

    left++;
    right--;
    
  }
  
}



int main() {

  int arr[6] = {10, 20, 30, 40, 50,60};
  int size = 6;


  extremPrintArr(arr,size);
  
  // reverseArray(arr, size);

  // int arr[5] = {-49,5,6,7,8};
  // int size =5;
  // minNum(arr,size);

  // cout<<" MIN NO "<<INT_MIN<<endl;
  // cout<<"Max No "<<INT_MAX<<endl;

  // int arr[9] = {0,1,0,1,0,1,0,1,0} ;
  //   int size=9;

  //   countZO(arr,size);

  //   int arr[5] = {2,3,5,6,7};
  //   int size;
  //   int target = 45;
  //   cout<<"Enter the Element of the aray : "<<endl;
  //   cin>>size;
  cout<<endl;
  cout<<"Original array\n";
  printArr(arr, size);
  
  
  // bool found = lenearSearch(arr,size,target);
  //   if(found){
  //     cout<<"Found ";
  //   }else{
  //     cout<<"Not found";
  //   }

  return 0;
}
