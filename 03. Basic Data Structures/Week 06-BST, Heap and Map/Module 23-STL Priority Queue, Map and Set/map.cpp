#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    mp["Tamim"] = 2;
    mp["Hamim"] = 100;
    mp["Shamim"] = 20;

    for(auto it = mp.begin(); it != mp.end(); it++) { // O(NlogN)
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    if(mp.count("Hamim")) {
        cout << "Have!";
    }
    else {
        cout << "Haven't!";
    }

    return 0;
}