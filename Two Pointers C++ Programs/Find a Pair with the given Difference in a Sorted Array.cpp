#include <bits/stdc++.h>
using namespace std;

int diffPossible(vector<int> &A, int B) {
    int i=0,j=1;
    while(i<A.size() && j<A.size())
    {
        if(i!=j && A[j]-A[i]==B)
        {
            //cout<<"Pairs are :- "<<A[i]<<" "<<A[j];
            return 1;
        }
        else if(A[j]-A[i]<B)
           j++;
        else
           i++;
    }
    //cout<<"Pairs Not Found";
    return 0;
}

int main()
{
    vector <int> v = {1,3,5};
    int k = 4;
    diffPossible(v,k)?cout<<"Pair is Found":cout<<"Pair Not Found";

    return 0;
}
