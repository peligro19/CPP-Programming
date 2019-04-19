#include <bits/stdc++.h>
using namespace std;

int FindNmbersofTriangles(vector<int> &A)
{
    sort(A.begin(),A.end());
    // Initialize count of triangles
    int count = 0;
    if(A.size()<3)
    return count;
    for (int i = 0; i < A.size()-2; ++i)
    {
        // Initialize index of the rightmost third  element
        int k = i+2;

        // Fix the second element
        for (int j = i+1; j < A.size(); ++j)
        {
            while (k < A.size() && A[i] + A[j] > A[k])
            ++k;

            if(k>j)
            count += k - j - 1;
            if(count >= 1000000007) count = count % 1000000007;
        }
    }

    return count;
}

int main()
{
    vector <int> v = {10, 21, 22, 100, 101, 200, 300};
    cout<<"Number of Possible triangles are :- "<<FindNmbersofTriangles(v);

    return 0;
}
