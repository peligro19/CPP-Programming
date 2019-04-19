// C++ program to merge two sorted arrays/
#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int> a1,vector<int> a2)
{
    int i1=0,i2=0,k=0;
    vector<int> ans;
    while(i1<a1.size() && i2<a2.size())
    {
        if(a1[i1]<a2[i2])
            ans.push_back(a1[i1++]);
        else
            ans.push_back(a2[i2++]);
    }
    while(i1<a1.size())
    {
        ans.push_back(a1[i1++]);
    }
    while(i2<a2.size())
    {
        ans.push_back(a2[i2++]);
    }
    return ans;
}

// Driver code
int main()
{
	vector<int> v1({-4, 3});
    vector<int> v2({-2, -2});

	vector<int> ans = mergeArrays(v1, v2);

	cout << "Array after merging" <<endl;
	for (int i=0; i < ans.size(); i++)
		cout << ans[i] << " ";

	return 0;
}
