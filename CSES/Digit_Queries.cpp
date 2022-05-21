#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;



int main()
{
    ll test=1;
    cin>>test;
    
    vector<ll> pTen(19,1);
    for(int i=1;i<19;i++){
        pTen[i] = pTen[i-1]*10;
    }

    while(test--){
        ll n;
        cin>>n;
        ll prev=0, next=0;

        ll noDigit;

        for(ll i=1;i<=18;i++){
            prev += (pTen[i] - pTen[i-1])* i;
            if(prev>=n){
                noDigit = i;
                break;
            }
            next += (pTen[i]-pTen[i-1])*i;
        }

        ll lo=pTen[noDigit-1];
        ll hi=pTen[noDigit]-1;

        ll best = 0;
        ll sBest;

        while(lo<=hi){
            ll mid = (lo+hi)/2;
            ll st = next + 1 + (mid-pTen[noDigit-1])*noDigit;

            if(st<=n){
                if(mid>best){
                    best = mid;
                    sBest = st;
                }
                lo = mid+1;
            }
            else hi = mid-1;
        }

        string no = to_string(best);
        cout<<no[n-sBest]<<"\n";
    }

    return 0;
}