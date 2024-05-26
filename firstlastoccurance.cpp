#include<iostream>

using namespace std;
//Given an array of integers nums sorted in non-decreasing order, 
//find the starting and ending position of a given target value.

int main(){
    int arr[1000];
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    cout<<"Enter the elements pf arr: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int first = -1, last = -1, mid, start = 0, end = n-1, target;
    cout<<"Enter target: ";
    cin>>target;

    //First occurance
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    int ans[2];
    ans[0] = first;

    //last occurance
    first = -1, last = -1, start = 0, end = n-1;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    ans[1] = last;

    for(int i = 0; i<2; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
    
}