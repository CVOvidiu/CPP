// https://www.hackerrank.com/challenges/vector-sort/problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Given N ints, Sort the ints and print sorted order

    int N, o;
    cin >> N;

    vector<int> sorted_v;

    for(int i = 0; i < N; i++) {
        cin >> o;
        sorted_v.push_back(o);
    }

    sort(sorted_v.begin(),sorted_v.end());

    for(int i = 0; i < sorted_v.size(); i++)
        cout << sorted_v[i] << " ";
}