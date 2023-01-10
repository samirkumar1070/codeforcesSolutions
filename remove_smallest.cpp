#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=1;i<n;i++){
                if(abs(v[i-1]-v[i])>1){
                    flag++;
                }
        }
        if(flag>0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        t--;
    }
    
    return 0;
}