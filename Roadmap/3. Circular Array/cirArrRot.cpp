// https://www.hackerrank.com/challenges/circular-array-rotation/problem

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    // while (k--)
    // {
    //     int x = a[a.size() - 1];
    //     for (int i = a.size() - 1; i > 0; i--)
    //     {
    //         a[i] = a[i - 1];
    //     }
    //     a[0] = x;
    // }
    vector <int> y;
    for (int x: queries)
    {
        // (a.size() - k % a.size()) finds the start of the array after rotations
        // add x to it
        // mod it to find the index
        y.push_back(a[((x + (a.size() - k % a.size())) % a.size())]);
    }
    return y;
}