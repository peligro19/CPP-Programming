#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &A, int B) {
    int j=0;
    for(int i=0;i<A.size();i++)
       if(A[i]!=B)
           A[j++] = A[i];

    return j;
}


int main()
{
    vector <int> v = {1, 2, 1, 3, 1, 4, 1, 5, 5};
    int k = 1; // element to be removed
    cout<<"Before Removal of Element in Array is :- \n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    int n = removeElement(v,k);
    cout<<"\nAfter Removal of Element in Array is :- \n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
