#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;
    cin >> n;
    vector<int> sizes(n),cost(n);
    for(int i = 0;i<n;i++) cin >> sizes[i];
    for(int i = 0;i<n;i++) cin >> cost[i];
    int ans = -1;
    for(int i = 1;i<n-1;i++){
        int b = -1;
        int min_left;
        for(int j=0;j<i;j++){
            if(sizes[i] > sizes[j]){
                if(b==-1){
                    min_left = cost[j];
                    b = 0;
                }
                else min_left = min(min_left,cost[j]);
            }
        }
        if(b==-1) continue;
        b = -1;
        int min_right;
        for(int j=i+1;j<n;j++){
            if(sizes[j] > sizes[i]){
                if(b==-1){
                    min_right = cost[j];
                    b = 0;
                }
                else min_right = min(min_right,cost[j]);
            }
        }
        if(b==-1) continue;
        if(ans == -1) ans = min_left + min_right + cost[i];
        else ans = min(min_left+min_right+cost[i],ans);
    }
    cout<<ans;
    return 0;
}