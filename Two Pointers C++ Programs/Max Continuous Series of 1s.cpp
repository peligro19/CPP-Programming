#include <bits/stdc++.h>
using namespace std;

vector<int> maxone(vector<int> &A, int B) {
    int wL = 0, wR = 0;
    // Left index and size of the widest window
    int bestL = 0, bestWindow = 0;
    // Count of zeroes in current window
    int zeroCount = 0;
    // While right boundary of current window doesn't cross right end
    while (wR < A.size())
    {
        // If zero count of current window is less than m, widen the window toward right
        if (zeroCount <= B)
        {
            if (A[wR] == 0)
              zeroCount++;
            wR++;
        }

        // If zero count of current window is more than m, reduce the window from left
        if (zeroCount > B)
        {
            if (A[wL] == 0)
              zeroCount--;
            wL++;
        }

        // Updqate widest window if this window size is more
        if ((wR-wL > bestWindow) && (zeroCount<=B))
        {
            bestWindow = wR-wL;
            bestL = wL;
        }
    }
    vector <int> v;
    // Print positions of zeroes in the widest window
    for (int i=0; i<bestWindow; i++)
    {
        if (A[bestL+i] == 0)
           v.push_back(bestL+i);
    }
    return v;
}

int main()
{
    vector <int> v = {1, 1, 0, 1, 1, 0, 0, 1, 1, 1};
    int m = 1;
    cout<<"Given Arrays of 0s & 1s :- \n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    vector<int> ans = maxone(v,m);
    cout<<"\nSolution is :- \n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}
