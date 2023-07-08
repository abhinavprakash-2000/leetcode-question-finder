#include <bits/stdc++.h>

using namespace std;
void merge(vector<int> &ar, int st, int mid, int end)
{
    int i=st;int j=mid+1;
    
}

void mergesort(vector<int> &ar, int st, int end)
{
    if (st >= end)
    {
        return;
    }
    int mid = (st + end) / 2;
    mergesort(ar, st, mid);
    mergesort(ar, mid + 1, end);
    merge(ar, st, mid, end);
}
int main()
{
    set<int> s;
    int n;
    cin >> n;
    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        auto temp = s.find(a[i]);
        // int low = s.find(a[i]) - s.begin();
        // cout<<low<<endl;
    }
    mergesort(arr, 0, n - 1);
    for (int i : a)
        cout << i << " ";
    cout << endl;
}