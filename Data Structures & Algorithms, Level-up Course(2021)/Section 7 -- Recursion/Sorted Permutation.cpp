#include<bits/stdc++.h>
using namespace std;

void per(string &s,string &temp,set<string> &str,vector<bool> var){
    
    if(temp.length()==s.length()){
        if(str.find(temp)==str.end()){
            str.insert(temp);
        }
        return;
    }
    for(int i=0;i<s.length();i++){
        if(var[i]==false){
            temp.push_back(s[i]);
            var[i]=true;
            per(s,temp,str,var);
            temp.pop_back();
            var[i]=false;
        }
    }
}

vector<string> findSortedPermutations(string s){
    //Your code goes here. Do not change the function or parameters. You can use helper functions if needed.
    
    int len=s.size();
    vector<bool> var(s.length(),false);
    string temp;
    set<string> str;
    
    per(s,temp,str,var);
    vector<string> ans;
    //iterate over set to print ans;
    for(auto it=str.begin();it!=str.end();it++){
        ans.push_back(*it);
    }
    return ans;
}

