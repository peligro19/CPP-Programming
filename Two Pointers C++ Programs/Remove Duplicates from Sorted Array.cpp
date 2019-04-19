#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n) & Auxiliary Space : O(n)
/*int removeDuplicates(vector<int> &A)
{
    if (A.size()==0 || A.size()==1)
        return A.size();

    vector <int> temp(A.size());
    int j = 0;
    for (int i=0; i<A.size()-1; i++)
        if (A[i] != A[i+1])
            temp[j++] = A[i];


    temp[j++] = A[A.size()-1];

    for (int i=0; i<j; i++)
        A[i] = temp[i];

    return j;
}*/

// Time Complexity : O(n) & Auxiliary Space : O(1)
int removeDuplicates(vector<int> &A)
{
    if (A.size()==0 || A.size()==1)
        return A.size();

    int j = 0;
    for (int i=0; i<A.size()-1; i++)
        if (A[i] != A[i+1])
            A[j++] = A[i];

    A[j++] = A[A.size()-1];

    return j;
}

int main()
{
    vector <int> v = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    cout<<"Before Removal of Duplicates Array is :- \n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    int n = removeDuplicates(v);
    cout<<"\nAfter Removal of Duplicates Array is :- \n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
