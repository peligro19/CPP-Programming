#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n) & Auxiliary Space : O(1)
int removeDuplicates(vector<int> &A)
{
    if (A.size()<3)
        return A.size();

    int i = 1; // point to previous
    int j = 2; // point to current

    while (j < A.size())
    {
        if (A[j] == A[i] && A[j] == A[i - 1])
            j++;
        else
        {
            i++;
            A[i] = A[j];
            j++;
        }
    }
    return i + 1;
}

int main()
{
    vector <int> v = {2, 2, 2, 4, 4, 4, 4, 5, 5, 6};
    cout<<"Before Removal of Duplicates Array is :- \n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    int n = removeDuplicates(v);
    cout<<"\nAfter Removal of Duplicates Array is :- \n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
