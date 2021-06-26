#include<bits/stdc++.h>
using namespace std;

bool com(pair<string,int> a,pair<string,int> b){
    return (a.second<b.second);
}

int badness(vector<pair<string,int> > teams){
    //Complete this function to return the min badness
    
    sort(teams.begin(),teams.end(),com);
    int cnt=0;
    int len=teams.size();
    for(int i=0;i<len;i++){
        cnt+=abs(teams[i].second-(i+1));
    }
    
    return cnt;
}
