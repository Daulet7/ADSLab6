#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, string> orig_of;   
    map<string, string> current_of;          

    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;

        string original;
        auto it = orig_of.find(a);
        if (it != orig_of.end()) {
            original = it->second;   
            orig_of.erase(it);
        } else {
            original = a;           
        }

        orig_of[b] = original;
        current_of[original] = b;
    }

    cout << current_of.size() << "\n";
    for (auto &p : current_of) {
        cout << p.first << " " << p.second << "\n";
    }
    return 0;
}

