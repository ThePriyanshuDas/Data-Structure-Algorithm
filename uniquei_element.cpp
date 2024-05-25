#include<iostream>
#include<vector>

using namespace std;

int UniqueElement (vector<int>arr){

    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;  
}

int main(){

    int n;
    cout<<"Enter elemrnts: ";
    cin>> n;

    for(int i = 0; i<n; i++){
        
    }
    
    vector<int>arr(n);

    cout<<"the umique element is: ";
    int ans = UniqueElement(arr);
    cout<< ans;

    return 0;
    
}