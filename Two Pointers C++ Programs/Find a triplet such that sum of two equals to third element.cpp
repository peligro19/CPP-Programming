#include <bits/stdc++.h>
using namespace std;

void findTriplet(vector<int> A)
{
    sort(A.begin(),A.end());
    for (int i = A.size() - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;
        while (j < k)
        {
            if (A[i] == A[j] + A[k]) {

                // pair found
                cout << "numbers are " << A[i] << " "<< A[j] << " " << A[k] << endl;
                return;
            } else if (A[i] > A[j] + A[k])
                j += 1;
            else
                k -= 1;
        }
    }
    // no such triplet is found in array
    cout << "No such triplet exists";
}

int main()
{
    vector <int> v = {5, 32, 1, 7, 10, 50, 19, 21, 2};

    findTriplet(v);
    return 0;
}
