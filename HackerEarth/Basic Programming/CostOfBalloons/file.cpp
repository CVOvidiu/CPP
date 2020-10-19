/*
You are conducting a contest at your college. This contest consists of two problems and

participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

1.   Use green-colored balloons for the first problem and purple-colored balloons for the second problem
2.   Use purple-colored balloons for the first problem and green-colored balloons for the second problem

You are given the cost of each balloon and problems that each participant solve. 
Your task is to print the minimum price that you have to pay while purchasing balloons.

Input format:

First line: T that denotes the number of test cases (1 <= T <= 10)
For each test case: 

    First line: Cost of green and purple-colored balloons 
    Second line: n that denotes the number of participants (1 <= n <= 10)

Next n lines: Contain the status of users. For example, if the value of the j'th integer in the i'th row is 0, then it depicts
 that the j'th participant has not solved the j'th problem. 
Similarly, if the value of the j'th integer in the i'th row is 1, then it depicts that the i'th participant has solved the j'th problem.

Output format
For each test case, print the minimum cost that you have to pay to purchase balloons.
*/

#include <iostream>
using namespace std;

int main() {
    
    unsigned T; // Num of test cases
    unsigned gB, pB; // Cost of green balloon && purple balloon
    unsigned n; // Num of participants
    unsigned i, j; // i - Status of 1st pb, j - Status of 2nd pb
    unsigned x, y; // x - Index of cases && y - Index of participants

    // sum - sum of prices for each case

    cin >> T;

    for(x = 1; x <= T; x++) {

        if(x % 2 != 0) {
            
            unsigned sum = 0;

            cin >> gB >> pB;
            cin >> n;

            for(y = 1; y <= n; y++) {
                cin >> i >> j;

                sum += i * gB + j * pB;
            }

            cout << sum << endl;
        }
        
        else if(x % 2 == 0) {

            unsigned sum = 0;

            cin >> gB >> pB;
            cin >> n;

            for(y = 1; y <= n; y++) {
                cin >> i >> j;
                
                sum += i * pB + j * gB;
            }

            cout << sum << endl;
        }
    }
}