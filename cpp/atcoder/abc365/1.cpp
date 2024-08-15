#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
#define ll long long 
using namespace std;


int main(){
	int year;
	cin>>year;

	if(year%4 != 0){
		cout<<365<<'\n';
	}
	if(year%4==0 && year%100!=0){
		cout<<366<<'\n';
	}
	if(year%100 ==0 && year%400 !=0){
		cout<<365<<'\n';
	}
	if(year%400==0){
		cout<<366<<'\n';
	}

}