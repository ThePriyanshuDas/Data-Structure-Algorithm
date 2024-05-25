#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size = 6;
    vector<int> vec;

    for(int i = 0; i< size; i++){
        int element;
        cout<<"Enter the element: ";
        cin>>element;
        vec.push_back(element);
    }

    int TargetSum;
    cout<<"Enter the target sum: ";
    cin>>TargetSum;

    int triplet = 0;

    for(int i = 0; i<vec.size(); i++){
        for(int j = i+1; j<vec.size(); j++){ 
            for(int k = j+1; k <vec.size(); k++){
                if(vec[i] + vec[j] + vec[k] == TargetSum){
                    triplet++;
                }  
            }
            
        }
    }
    cout<<"The no. of triplet is: "<<triplet;
    
    return 0;
    
}