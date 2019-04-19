//Minimize (max(A[i], B[j], C[k]) – min(A[i], B[j], C[k])) of three different sorted arrays
#include <bits/stdc++.h>
using namespace std;

int MinimizeAbsoluteDiff(vector <int> A,vector <int> B, vector <int> C)
{
    int i = A.size()-1, j = B.size()-1, k = C.size()-1;
    int currmin, ansmin = INT_MAX, currmax = 0;

    while(i!=-1 && j!=-1 && k!=-1)
    {
        currmin  = abs( max(A[i], max(B[j], C[k])) - min(A[i], min(B[j], C[k])) );
        ansmin = min(ansmin, currmin);
        currmax = max(A[i], max(B[j], C[k]));

        if(currmax == A[i])
           i--;
        else if(currmax == B[j])
           j--;
        else
           k--;
    }
    return ansmin;
}

int main()
{
    vector <int> v1 = { 11, 4, 5, 8, 10 };  //list 1
    cout<<"Sorted Array1 :- ";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    vector <int> v2 = { 6, 9, 11 };   //list 2
    cout<<"\nSorted Array2 :- ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";

    vector <int> v3 = { 2, 3, 16, 6 };   //list 3
    cout<<"\nSorted Array3 :- ";
    for(int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";

    // Minimize (max(A[i], B[j], C[k]) – min(A[i], B[j], C[k])) of three different sorted arrays
    int ans = MinimizeAbsoluteDiff(v1,v2,v3);
    cout<<"Answer is :- "<<ans;
    return 0;
}
