#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    char k;

    cin >> n;
    vector<char> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cin >> k;

    auto it = upper_bound(arr.begin(), arr.end(), k);
    if(it == arr.end()){
        cout << arr[0];
    }else{
        cout << *it;
    }
    return 0;
}