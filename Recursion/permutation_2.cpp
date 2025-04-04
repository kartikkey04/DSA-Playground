#include<bits/stdc++.h>
using namespace std;

void permutation(int ind, vector<int> &arr, vector<vector<int>> &ds){
    if(ind == arr.size()){
        ds.push_back(arr);
        return;
        
    }

    for(int i=ind; i<arr.size(); i++){
        swap(arr[i], arr[ind]);
        permutation(ind+1,arr,ds);
        swap(arr[i],arr[ind]);
    }
}

void printF(vector<vector<int>> &ans){
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    vector<int> arr = {1,2,3};
    vector<vector<int>> ds;
    permutation(0, arr, ds);
    printF(ds);
    return 0;
}