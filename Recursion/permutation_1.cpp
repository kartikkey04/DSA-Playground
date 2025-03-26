#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int *freq){
    if(ds.size() == arr.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0; i<arr.size(); i++){

        if(!freq[i]){
            freq[i] = 1;
            ds.push_back(arr[i]);
            permutation(arr, ds, ans, freq);
            ds.pop_back();
            freq[i] = 0;
        }

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

    vector<int> ds;
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    int freq[arr.size()] = {0};

    permutation(arr, ds, ans, freq);

    printF(ans);
    return 0;
}