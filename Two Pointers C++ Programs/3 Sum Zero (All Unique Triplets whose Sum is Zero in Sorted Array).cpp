#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> ThreeSumZero(vector<int> &A)
{
    sort(A.begin(),A.end());
    vector <vector <int>> ans;
    for(int i=0;i<A.size()-2;i++)
    {
        if (i > 0 && A[i] == A[i - 1])
            continue;

        int j=i+1;
        int k=A.size()-1;
        while(j<k)
        {
            int sum=A[i]+A[j]+A[k];
            if(sum==0)
            {
                vector <int> v;
                v.push_back(A[i]) ,v.push_back(A[j]), v.push_back(A[k]);
                ans.push_back(v);
            }
            if(sum>0)
               k--;
            else if(sum<0)
               j++;
            else
            {
                j++;
                while (j < k && A[j] == A[j-1])
                    j++;
            }
        }
    }
    return ans;
}

int main()
{
    vector <int> v = {-1, 0, 1, 2, -1, -4};
    cout<<" The Triplets Whose Sum is Zero are :- \n";
    vector <vector <int>> ans = ThreeSumZero(v);
    for (int i=0; i<ans.size(); i++)
    {
        for (int j=0; j<ans[i].size() ;j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
