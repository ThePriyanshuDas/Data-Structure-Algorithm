#include<iostream>

using namespace std;

// Selection Sort Algorithm to sort the array of integers in decreasing order.

int main(){

    int arr[10] = {3,5,1,8,6,2,9,4,0,7};
    for(int i = 0; i<10; i++){
        int index = i;
        for(int j = i+1; j<10; j++){
            if(arr[j]>arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int k = 0; k<10; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
    
}