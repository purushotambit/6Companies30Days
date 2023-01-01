#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&temp,int k,int sum,int num){
        if(k==0){
            if(sum==0){
                ans.push_back(temp);
            }
                return;
        }
        if(num>=10||k<0)return ;
        if(sum>=num){
            temp.push_back(num);
            solve(ans,temp,k-1,sum-num,num+1);
            temp.pop_back();
            solve(ans,temp,k,sum,num+1);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,k,n,1);
        return ans;
    }
};