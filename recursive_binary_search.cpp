#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start, int end, int k){
    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;
    if(k==arr[mid]){
        return mid;
    }
    else if(k<arr[mid]){
        binarySearch(arr,start,mid-1,k);
    }
    else if(k>arr[mid]){
        binarySearch(arr,start+1,end,k);
    }
}

int main() {
    // Write C++ code here
   int arr[]={1,4,3,6,8,40};
   int k=40;
   cout<<binarySearch(arr,0,6,k);

    return 0;
}
