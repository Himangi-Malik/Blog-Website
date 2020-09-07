#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n;
    cin >> n;
    int ans = 0;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int curr_members = 0;
    for(int i =0 ;i<n;i++){
        curr_members++;
        if(curr_members >= arr[i]){
            curr_members = 0;
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}