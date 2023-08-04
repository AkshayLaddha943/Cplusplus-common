vector<int> reverseArray(vector<int> a) {
    std::vector<int> rev;
    for (int i=0;i<a.size();i++) {
        rev.push_back(a[a.size() - i - 1]);
    }
    return rev;

}