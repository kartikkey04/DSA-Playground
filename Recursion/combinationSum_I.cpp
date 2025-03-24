#include<bits/stdc++.h>
using namespace std;

void findCombinationSum(int ind, int target, vector<int> &candidates, vector<int> &ds, vector<vector<int>> &ans){

    if(ind == candidates.size()){
        if(target == 0){
            ans.push_back(ds);
            return;
        }

        return;
    }

    if(candidates[ind] <= target){
        ds.push_back(candidates[ind]);
        findCombinationSum(ind, target-candidates[ind], candidates, ds, ans);
        ds.pop_back();
    }

    findCombinationSum(ind+1, target, candidates, ds, ans);

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

    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> candidates = {2,3,6,7};
    int target = 7;

    findCombinationSum(0, target, candidates, ds, ans);
    printF(ans);

    return 0;
}