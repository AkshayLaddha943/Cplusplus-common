vector<int> reverseArray(vector<int> a) {
    int largest = a[0];
    for (int i=0;i<a.size();i++) {
        rev.push_back(a[a.size() - i - 1]);
    }
    return rev;

}