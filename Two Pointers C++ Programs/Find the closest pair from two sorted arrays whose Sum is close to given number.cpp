#include <bits/stdc++.h>
using namespace std;

void printClosest(vector<int> ar1, vector<int> ar2,int x)
{
    int diff = INT_MAX;
    int res_l, res_r;
    int l = 0, r = ar2.size()-1;
    while (l<ar1.size() && r>=0)
    {
       if (abs(ar1[l] + ar2[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(ar1[l] + ar2[r] - x);
       }
       // If sum of this pair is more than x, move to smaller side
       if (ar1[l] + ar2[r] > x)
           r--;
       else  // move to the greater side
           l++;
    }

    // Print the result
    cout << "The closest pair is [" << ar1[res_l] << ", "
         << ar2[res_r] << "] \n";
}
int main()
{
    vector <int> v1 = {1, 4, 5, 7};
    vector <int> v2 = {10, 20, 30, 40};
    int target = 38;

    printClosest(v1, v2, target);
    return 0;
}
