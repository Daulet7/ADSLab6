#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(long long i = 0; i<n; i++){
        cin >> a[i];
    }
    for(long long i = 0; i<m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> answer;
    long long i = 0;
    long long j = 0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            answer.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(long long i = 0; i<answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}