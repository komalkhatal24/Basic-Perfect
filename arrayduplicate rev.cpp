#include<iostream>
using namespace std;
void printArray(int arr[],int len){
    for int (i=0;i<len;i++){
        cout<<arrr[i]<<" ";
    }
}
int main(){
  int original_arr[]={1,2,3,4,5};
  int len =sizeof(original_arr)/sizeof(original_arr[0]);
  int cpoied_arr[len];
  for(int i=0;i<len;i++){
    copied_arr[i]=original_arr[len-i-1];
  }
  // Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
void printArray(int arr[],int len){
    for ( int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
  int original_arr[]={1,2,3,4,5};
  int len =sizeof(original_arr)/sizeof(original_arr[0]);
  int copied_arr[len];
  for(int i=0;i<len;i++){
    copied_arr[i]=original_arr[len-i-1];
  }
  
  cout<<"original array:";
  printArray(original_arr,len);
  cout<<"\nResultant array:";
  printArray(copied_arr,len);
  return 0;
}
  cout<<"original array:";
  printArray(original_arr,len);
  cout<<"\nResultant array:";
  printArray(original_arr,len);
  return 0;
}