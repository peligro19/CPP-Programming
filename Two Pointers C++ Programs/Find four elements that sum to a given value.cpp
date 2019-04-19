#include <bits/stdc++.h>
using namespace std;

void find4Numbers(vector<int> A, int X)
{
    int l, r;
    sort (A.begin(),A.end());
    for (int i = 0; i < A.size() - 3; i++)
    {
        for (int j = i+1; j < A.size() - 2; j++)
        {
            l = j + 1;
            r = A.size() - 1;

            // To find the remaining two
            // elements, move the index
            // variables (l & r) toward each other.
            while (l < r)
            {
                if( A[i] + A[j] + A[l] + A[r] == X)
                {
                    cout << A[i]<<", " << A[j] <<
                        ", " << A[l] << ", " << A[r];
                    l++; r--;
                }
                else if (A[i] + A[j] + A[l] + A[r] < X)
                    l++;
                else // A[i] + A[j] + A[l] + A[r] > X
                    r--;
            } // end of while
        } // end of inner for loop
    } // end of outer for loop
}

int main()
{
    vector <int> v = {1, 4, 45, 6, 10, 12};
    int x=21;

    find4Numbers(v,x);
    return 0;
}

