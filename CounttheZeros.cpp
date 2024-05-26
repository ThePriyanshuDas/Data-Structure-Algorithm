#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int start = 0, end = 11, mid, first, last;

    //first occurance
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == 0){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid] > 0){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout <<first<<endl;
    first = 0, end = 11; 
    //last occurance
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == 0){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid] > 0){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }

    cout<<last<<endl;
    int count = (last - first);

    cout<<"ans: "<<count+1;

    return 0;
    
}