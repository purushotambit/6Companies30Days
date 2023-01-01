#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string getHint(string secret, string guess) {
        
       vector<int>sec(10,0);
       vector<int>gues(10,0);
        int n=secret.size();
        int bull=0;
       for(int i=0;i<n;i++){
           if(secret[i]!=guess[i]){
               sec[secret[i]-'0']++;
               gues[guess[i]-'0']++;
           }else bull++;
       }
       int cow=0;
       for(int i=0;i<10;i++){
           cow+=min(sec[i],gues[i]);
       }
       string ans=to_string(bull)+"A"+to_string(cow)+"B";
       return ans;
    }
};