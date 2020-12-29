#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    int q;
    cin >> n >> q;

    vector<int> a[n];

    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int o;

        for(int j = 0; j < m; j++){
            cin >> o;
            a[i].push_back(o);
        }
    }
    
}