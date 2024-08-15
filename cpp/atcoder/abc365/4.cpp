#include <iostream>
#include <string>
#include <vector>
#define fin ios::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<char> winning_moves(N);
    int wins = 0;

    // Determine Takahashi's winning moves
    for (int i = 0; i < N; i++) {
        if (S[i] == 'R') winning_moves[i] = 'P';
        else if (S[i] == 'P') winning_moves[i] = 'S';
        else winning_moves[i] = 'R';
    }

    // Count maximum possible wins
    for (int i = 0; i < N; i++) {
        if (i==0 || winning_moves[i] != winning_moves[i-1]) {
            wins++;
        }
        else if(winning_moves[i] == winning_moves[i-1]){
        	//neverlose
        	winning_moves[i]=S[i];
        }
    }

    cout << wins<< endl;

    return 0;
}