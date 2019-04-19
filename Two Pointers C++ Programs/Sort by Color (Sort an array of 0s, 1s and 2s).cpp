#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &A) {
   // sort(A.begin(),A.end()); // Time Complexity O(nlog(n))

   // Time Complexity O(n)
   int c0=0,c1=0,c2=0;
   for(int i=0;i<A.size();i++)
   {
        if(A[i]==0)
           c0++;
        else if(A[i]==1)
           c1++;
        else
           c2++;
   }
   int i=0;
    while(c0--)
       A[i++]=0;
    while(c1--)
       A[i++]=1;
    while(c2--)
       A[i++]=2;
}

int main()
{
    vector <int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    cout<<"Before Sorting :- \n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    sortColors(v);
    cout<<"\nAfter Sorting :- \n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
