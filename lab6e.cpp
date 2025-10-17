#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> mat[j][i];
        }
    }
    for(int j = 0; j<m; j++){
        sort(mat[j].rbegin(), mat[j].rend());
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << mat[j][i] << " ";
        }
        cout << '\n';
    }
    return 0;
}