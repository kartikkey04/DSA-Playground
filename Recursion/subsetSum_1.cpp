#include<bits/stdc++.h>
using namespace std;

void subsetSum(int ind, int sum, vector<int> &candidates, vector<int> &ds){
    if(ind == candidates.size()){
        ds.push_back(sum);
        return;
    }

    subsetSum(ind+1, sum+candidates[ind], candidates, ds);
    subsetSum(ind+1, sum, candidates, ds);
}

int main(){
    vector<int> candidates = {3,1,2};
    vector<int> ds;
    vector<vector<int>> ans;
    sort(candidates.begin(), candidates.end());

    subsetSum(0, 0, candidates, ds);
    
    for(int i=0; i<ds.size(); i++){
        cout<<ds[i]<<" ";
    }
}