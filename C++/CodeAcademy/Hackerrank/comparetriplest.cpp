#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> arr(2);
    
    for (int i=0;i<(int)a.size();i++) {
        if (a[i] > b[i]) {
            arr[0]++;
        }
        else if (a[i] < b[i]) {
            arr[1]++;
        }
    }
    return arr;
}