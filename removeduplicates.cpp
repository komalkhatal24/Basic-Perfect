#include<iostream>
using namspace std;
int remove_duplicates(int arr[],int n){
    if(n==0) return 0;

    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[n-1];
}
int main(){
    int
}