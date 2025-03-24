#include<bits/stdc++.h>
using namespace std;

void findCombinationSum(int ind, int target, vector<int> &candidates, vector<int> &ds, vector<vector<int>> &ans){

    if(target == 0){
        ans.push_back(ds);
        return;
    }

    for(int i=ind; i<candidates.size(); i++){
        if(i>ind && candidates[i] == candidates[i-1]) continue;
        if(candidates[i] > target) break;
        ds.push_back(candidates[i]);

        findCombinationSum(i+1, target-candidates[i], candidates, ds, ans);
        ds.pop_back();
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
    vector<int> candidates = {1,1,1,2,2};
    vector<vector<int>> ans;
    int target = 4;

    findCombinationSum(0, target, candidates, ds, ans);
    printF(ans);
    
    return 0;
}