#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int sum1=0;
    int sum2=0;
    
    for (int i=0;i<arr.size();i++) {
        sum1 += arr[i][i];
    }
    for (int i=0;i<arr.size();i++) {
        sum2 += arr[i][arr.size()-i-1];
    } 
    
    return abs(sum1-sum2);

}