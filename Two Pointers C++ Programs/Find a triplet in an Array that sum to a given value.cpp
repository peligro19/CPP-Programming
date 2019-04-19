#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(vector<int> &A, int B)
{
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++)
    {
        int j=i+1;
        int k=A.size()-1;
        while(j<k)
        {
            int sum=A[i]+A[j]+A[k];
            if(sum==B)
            {
                cout<<A[i]<<" "<<A[j]<<" "<<A[k];
                return true;
            }
            if(sum>B)
               k--;
            else
               j++;
        }
    }
    return false;
}

int main()
{
    vector <int> v = { 1, 4, 45, 6, 10, 8 };
    int targetsum = 22;

    find3Numbers(v,targetsum) ? cout<<"\nTriplet Found" : cout<<"\nTriplet Not Found";
    return 0;
}
