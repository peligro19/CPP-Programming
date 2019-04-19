#include <bits/stdc++.h>
using namespace std;

void printClosest(vector<int> A, int x)
{
    int diff = INT_MAX;
    int res_l, res_r;
    int l = 0, r = A.size()-1;
    while (l<r)
    {
       if (abs(A[l] + A[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(A[l] + A[r] - x);
       }
       // If sum of this pair is more than x, move to smaller side
       if (A[l] + A[r] > x)
           r--;
       else  // move to the greater side
           l++;
    }

    // Print the result
    cout << "The closest pair is [" << A[res_l] << ", "
         << A[res_r] << "] \n";
}

int main()
{
    vector <int> v = {10, 22, 28, 29, 30, 40};
    int target = 54;

    printClosest(v, target);
    return 0;
}
