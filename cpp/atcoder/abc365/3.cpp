#include<iostream>
#include<vector>
#include<algorithm>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;


int main(){
	fin
    long long N, M;
    cin >> N >> M;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Check if subsidy can be infinitely large
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    
    if (sum <= M) {
        cout << "infinite" << endl;
        return 0;
    }
    
    // Binary search for the maximum subsidy limit
    long long left = 0, right = 1e9;
    while (left < right) {
        long long mid = left + (right - left + 1) / 2;
        long long total_subsidy = 0;
        
        for (int i = 0; i < N; i++) {
            total_subsidy += min(mid, A[i]);
        }
        
        if (total_subsidy <= M) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    
    cout << left << endl;
    return 0;

}