/*
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    unsigned T; // Num of cases
    int givenSeat;
    unsigned lim_l = 1, lim_r = 12, num = 0;
    unsigned sum = 13; // + 24 for each 
    int diff;

    cin >> T;

    for(int i = 1; i <= T; i++) {
        
        cin >> givenSeat;

        while(givenSeat > lim_r) {
            lim_r += 12;
            lim_l += 12;
            num++;
            sum += 24;
        }

        if(givenSeat <= lim_r) {
            diff = sum - givenSeat;
            if(fabs(givenSeat - diff) == 1 || fabs(givenSeat - diff) == 11)
                cout << diff << " " << "WS" << endl;
            if(fabs(givenSeat - diff) == 9 || fabs(givenSeat - diff) == 3)
                cout << diff << " " << "MS" << endl;
            if(fabs(givenSeat - diff) == 7 || fabs(givenSeat - diff) == 5)
                cout << diff << " " << "AS" << endl;
        }
        lim_l = 1;
        lim_r = 12;
        num = 0;
        sum = 13;
    }
}