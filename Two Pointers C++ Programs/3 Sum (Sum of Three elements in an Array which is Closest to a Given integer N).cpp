#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &A, int B) {
    int ans;
    int temp=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++)
    {
        int j=i+1;
        int k=A.size()-1;
        while(j<k)
        {
            int sum=A[i]+A[j]+A[k];
            if(abs(sum-B)<temp)
            {
                ans = sum;
                temp = abs(sum-B);
            }
            if(sum>B)
               k--;
            else
               j++;
        }
    }
    return ans;
}

int main()
{
    vector <int> v = {-1, 2, 1, -4};
    int target = 1;

    cout<<"Answer is :- "<<threeSumClosest(v,target);
    return 0;
}
