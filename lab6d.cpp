#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<tuple<int,int,int>> dates; 

    for (int i = 0; i < n; ++i) {
        int d, m, y; char dash;
        cin >> d >> dash >> m >> dash >> y;
        dates.emplace_back(y, m, d);   
    }

    sort(dates.begin(), dates.end());

    for (auto [y,m,d] : dates) {
        cout << setfill('0')
             << setw(2) << d << '-'
             << setw(2) << m << '-'
             << setw(4) << y << '\n';
    }
    return 0;
}
