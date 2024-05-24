#include<iostream>

using namespace std;
//Selection Sort Algorithm to sort the array of char in ascending order

int main(){
    char arr[5] = {'l','b','s','h','y'};
    int brr[5];
    for(int i = 0; i<5; i++){
        int index = i;  
        for(int j = i+1; j<5; j++){
            if(int(arr[j])<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);  
    }
    
    for(int k = 0; k<5; k++){
        cout<<arr[k]<<" ";
    }
    


    return 0;
    
}