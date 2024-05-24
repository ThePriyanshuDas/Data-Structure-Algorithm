#include<iostream>

using namespace std;

//Selection Sort Algorithm to sort the array of integers 
//in increasing order by taking the highest number to last place.

int main(){
    int arr[] = {0,6,4,9,1,3,7,2};
    for(int i = 7; i>=0; i--){
        int index = i;
        for(int j = i-1; j>=0; j--){
            if (arr[j]>arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for(int k = 0; k<8; k++){
        cout<<arr[k]<<" ";
    }

    return 0;
    
}