//Minimize (max(A[i], B[j], C[k]) – min(A[i], B[j], C[k])) of three different sorted arrays
#include <bits/stdc++.h>
using namespace std;

void findClosest(vector <int> A,vector <int> B, vector <int> C)
{
    int diff = INT_MAX;
    int ansi =0, ansj = 0, ansk = 0;
    int i=0,j=0,k=0;
    while (i < A.size() && j < B.size() && k < C.size())
    {
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));

        if (maximum-minimum < diff)
        {
             ansi = i, ansj = j, ansk = k;
             diff = maximum - minimum;
        }
        if (diff == 0) break;

        if (A[i] == minimum)
            i++;
        else if (B[j] == minimum)
            j++;
        else
            k++;
    }
    cout<<"\nThe Three Closest Elements are :- ";
    cout << A[ansi] << " " << B[ansj] << " " << C[ansk];
}

int main()
{
    vector <int> v1 = {1, 4, 10};  //list 1
    cout<<"Sorted Array1 :- ";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    vector <int> v2 = {2, 15, 20};   //list 2
    cout<<"\nSorted Array2 :- ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";

    vector <int> v3 = {10, 12};   //list 3
    cout<<"\nSorted Array3 :- ";
    for(int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";

    // Minimize (max(A[i], B[j], C[k]) – min(A[i], B[j], C[k])) of three different sorted arrays
    findClosest(v1,v2,v3);
    return 0;
}
