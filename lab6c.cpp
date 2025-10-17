#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(long long i = 0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<long long> answer;
    long long dif = abs(arr[1]-arr[0]);
    for(long long i = 1; i<n; i++){
        long long possible_dif = abs(arr[i]-arr[i-1]);
        if(possible_dif==dif){
            answer.push_back(arr[i]);
            answer.push_back(arr[i-1]);
        }
        else if(possible_dif<dif){
            answer.clear();
            answer.push_back(arr[i]);
            answer.push_back(arr[i-1]);
            dif = possible_dif;
        }
    }
    sort(answer.begin(), answer.end());
    for(long long i = 0; i<answer.size(); i++){
        cout << answer[i] << ' ';
    }
    return 0;
}