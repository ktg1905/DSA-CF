#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n, k, pb, ps;
        cin>>n>>k>>pb>>ps;
 
        vector<ll> p;
        p.push_back(0);
        vector<ll> a;
        a.push_back(0);
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            p.push_back(x);
        }
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
        ll score_b = a[pb]*k;
        ll score1_b = score_b;
        set<ll> st_b;
        st_b.insert(pb);
        ll pos_b=pb;
        ll prev_b = pb;
 
        for(ll i=1; i<n; i++){
            if(st_b.find(p[pos_b])!=st_b.end()){
                break;
            }
            ll m = max((ll)0, k-i);
            //cout<<score_b<<" "<<score1_b-a[pos_b]*m+a[p[pos_b]]*m<<" "<<pos_b<<" "<<p[pos_b]<<" "<<m<<'
';
            score_b = max(score_b, score1_b-a[pos_b]*m+a[p[pos_b]]*m);
            score1_b = score1_b-a[pos_b]*m+a[p[pos_b]]*m;
            //cout<<score_b<<'
';
            //prev_b = pos_b;
            st_b.insert(p[pos_b]);
            pos_b = p[pos_b];
        }
 
        ll score_s = a[ps]*k;
        ll score1_s = score_s;
        set<ll> st_s;
        st_s.insert(ps);
        ll pos_s=ps;
        ll prev_s = ps;
 
        for(ll i=1; i<n; i++){
            if(st_s.find(p[pos_s])!=st_s.end()){
                break;
            }
            ll m = max((ll)0, k-i);
            //cout<<score_s<<" "<<score_s-a[pos_s]*m+a[p[pos_s]]*m<<" "<<pos_s<<" "<<p[pos_s]<<'
';
            score_s = max(score_s, score1_s-a[pos_s]*m+a[p[pos_s]]*m);
            //prev_s = pos_s;
            score1_s = score1_s-a[pos_s]*m+a[p[pos_s]]*m;
            st_s.insert(p[pos_s]);
            pos_s = p[pos_s];
        }
 
        //cout<<score_b<<" "<<score_s<<'
';
        if(score_s > score_b){
            cout<<"Sasha"<<'
';
        }
        else if(score_s < score_b){
            cout<<"Bodya"<<'
';
        }
        else{
            cout<<"Draw"<<'
';
        }
 
    }
 
    
 
    return 0;
}