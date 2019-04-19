#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &A) {
    int l = 0;
    int r = A.size()-1;
    int max_area = 0;
    while(l<r)
    {
        int curr_area = min(A[l],A[r]) * (r-l);
        max_area = max(max_area, curr_area);
        if(A[l] < A[r])
           l++;
        else
           r--;
    }
    return max_area;
}

int main()
{
    vector <int> v = {3, 1, 2, 4, 5};
    cout<<"Maximum Area is :- "<<maxArea(v);

    return 0;
}
