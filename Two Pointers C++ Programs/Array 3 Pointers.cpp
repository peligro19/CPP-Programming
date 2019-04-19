/*You are given 3 arrays A, B and C. All 3 of the arrays are sorted.

Find i, j, k such that :
max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])) is minimized.
Return the minimum max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i]))
*/
#include <bits/stdc++.h>
using namespace std;

int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
    int minans = INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size())
    {
        int max1 = max(abs(A[i]-B[j]) , max(abs(B[j]-C[k]), abs(C[k]-A[i])));
        minans = min(minans, max1);
        int min1 = min(A[i], min(B[j], C[k]));
        if(min1 == A[i])
           i++;
        else if(min1 == B[j])
           j++;
        else
           k++;
    }
    return minans;
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

    //max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])) is minimized.
    cout<<"\nSolution is :- "<<minimize(v1,v2,v3);
    return 0;
}
