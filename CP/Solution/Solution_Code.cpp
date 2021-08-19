#include <bits/stdc++.h>
using namespace std;

int inc(pair <int,string> p1, pair<int,string> p2){
    return p1.first > p2.first;
}

int main(){
    int n,k; cin>>n>>k;
    vector <pair<int,string>> ans;
    for(int i=0; i<n; i++){
        vector <int> v(6);
        string roll; cin>>roll;
        int count = 0, score = 0;
        for(int j=0; j<6; j++){
            cin>>v[j];
            if(v[j]>0){
                count++;
                score += v[j];
            }
        }
        if(count>0){
            score = (score/count) + count*10; 
            for(int j=0; j<roll.size(); j++){
                int s = roll[j] - 48;
                score += s*(1 + s);
            }
            ans.push_back(make_pair(score,roll));
        }
    }
    
    sort(ans.begin(),ans.end(),inc);

    if(ans.empty()){
        cout<<"-1";
    }
    else{
        for(int i=0; i<k && i<ans.size(); i++){
            cout<<ans[i].second<<" "<<ans[i].first<<"\n";
        }
    }
    return 0;
}