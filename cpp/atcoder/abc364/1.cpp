#include<iostream>
#include<vector>
#include<string>
#define fin ios_base::sync_with_stdio(0);

using namespace std;
int main(){
    fin
    int n;
    cin>>n;
    vector<string>sw(n);
    bool ta=true;
    for(int i=0;i<n;i++){
        cin>>sw[n];
    }
    for(int j=0;j<n-1;j++){
        if(sw[j]==sw[j+1] && sw[j]=="sweet"){
            ta=false;
        }
    }
    if(ta) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}