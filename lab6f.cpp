#include <iostream>
#include <vector>
#include <tuple>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    vector<tuple<double, string, string>> answer;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string a, b;
        int m;
        double gc = 0;
        double c = 0;
        cin >> a >> b >> m;
        for(int j = 0; j<m; j++){
            string mark;
            int credits;
            double g;
            cin >> mark >> credits;
            if(mark=="A+")g = 4.00;
            else if(mark=="A")g = 3.75;
            else if(mark=="B+")g = 3.50;
            else if(mark=="B")g = 3.00;
            else if(mark=="C+")g = 2.50;
            else if(mark=="C")g = 2.00;
            else if(mark=="D+")g = 1.50;
            else if(mark=="D")g = 1.00;
            else if(mark=="F")g = 0;
            gc += g*credits;
            c += credits;
        }
        double gpa = gc/c;
        answer.emplace_back(gpa, a, b);
    }
    sort(answer.begin(), answer.end());
    for(auto[gpa, a, b]:answer){
        cout << a << " " << b << " " << fixed << setprecision(3) << gpa << '\n';
    }
    return 0;
}