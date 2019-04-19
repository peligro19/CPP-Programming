// C++ program to find intersection of two Unsorted arrays
#include <bits/stdc++.h>
using namespace std;

vector <int> printUnion(vector <int> arr1,vector <int> arr2)
{
    vector <int> ans;
    set<int> hs;
    for (int i = 0; i < arr1.size(); i++)
        hs.insert(arr1[i]);

    for (int i = 0; i < arr2.size(); i++)
        hs.insert(arr2[i]);

    for (auto it = hs.begin(); it != hs.end(); it++)
        ans.push_back(*it);
    return ans;
}

vector <int> printIntersection(vector <int> arr1,vector <int> arr2)
{
    vector <int> ans;
    set<int> hs;
    for (int i = 0; i < arr1.size(); i++)
        hs.insert(arr1[i]);

    for (int i = 0; i < arr2.size(); i++)
        if (hs.find(arr2[i]) != hs.end())
            ans.push_back(arr2[i]);

    return ans;
}

int main()
{
    vector <int> v1 = { 7, 1, 5, 2, 3, 6 };  //list 1
    cout<<"Unsorted Array1 :- ";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    vector <int> v2 = { 3, 8, 6, 20, 7 };   //list 2
    cout<<"\nUnsorted Array2 :- ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";

    cout<<"\n\nUnion of Two Unsorted Array :- ";
    vector<int> ans = printUnion(v1,v2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<"\nIntersection of Two Unsorted Array :- ";
    ans = printIntersection(v1,v2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
