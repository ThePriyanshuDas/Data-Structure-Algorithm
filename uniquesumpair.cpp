#include<iostream>
#include<vector>

using namespace std;

int targetdifferencepair(vector<int>&arr, int &size, int &sum){
    int i = 0;
    int j = size-1;
    int count = 0;

    while (i<j)
    {
        if(abs(arr[j]+arr[i]) == sum){
            i++;
            j--;
            count++;
        }
        else if(abs(arr[j]+arr[i]) > sum){
            j--;
        }
        else{
            i++;
        }
    }

    return count;
    
}


int main(){

    vector<int>arr;
    int size;
    cout<<"enter size: ";
    cin>>size;

    for(int i = 0; i<size; i++){
        int ele;
        cout<<"Enter element: ";
        cin>>ele;
        arr.push_back(ele);
    }

    int sum;
    cout<<"Enter sum: ";
    cin>>sum;

    int ans = targetdifferencepair(arr, size, sum);
    cout<<"Count: "<<ans;

    return 0;
}