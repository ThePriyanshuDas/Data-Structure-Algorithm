#include<iostream>
#include<vector>

using namespace std;

int main(){

    int m,n;
    cout<<"Enter row and col: ";
    cin>> m , n;

    vector<vector<int>> arr(m,vector<int>(n));
    for(int row = 0; row< m; row++){
        for(int col = 0;  col < n; col++){
            int element;
            cout<<"Enter element: ";
            cin>>arr[row][col];
        }
    }

    int element;
    cout<<"Enter the element to search: ";
    cin>>element;

    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = (start + (end-start))/2;
        int row_ind = mid/4;
        int col_ind = mid%4;
        if(arr[row_ind][col_ind] == mid){
            cout<<"found";
            break;
        }
        else if(arr[row_ind][col_ind] > mid){
            start = mid+1 ;
        }
        else{
            end = mid-1 ;
        }
    }

    return 0;
    
}