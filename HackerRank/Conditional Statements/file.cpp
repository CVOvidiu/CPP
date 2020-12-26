/*
    https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
*/

#include<iostream>
#include<vector>

using namespace std;

vector<string> nums {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    int n;
    cin >> n;

    if(n < 10) {
        cout << nums[n];
    } 
    else
        cout << "Greater than 9";
}