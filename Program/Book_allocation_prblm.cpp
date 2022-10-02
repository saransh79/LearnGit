// An array of arr[i] represents number of pages of books and there are m students
// Task is to allocate all the books to all students in such a way that
// 1. each student gets atleast one book
// 2. each book should be alllocated t0 a stident
// 3. book allocation sholud be in a contiguous manner
// 4. allocate the book in such way that the max number of pages assigned to a student is minimum.
#include <bits/stdc++.h>
#define PB push_back
#define ll long long int
#define MP make_pair
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;

// str.erase(1, 4);
// int B = b - '0' + 48;
bool isPossibleSolution(vector<int> v, int n, int m, int mid)
{
    int student = 1;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentSum + v[i] <= mid)
        {
            currentSum += v[i];
        }
        else
        {
            student++;
            if (student > m || v[i] > mid)
            {
                return false;
            }
            currentSum = v[i];
        }
    }
    return true;
}
int min_page(vector<int> v, int n, int m)
{
    int s = 0, e = 0, mid,ans=0;
    for (int i = 0; i < n; i++)
    {
        e += v[i];
    }
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (isPossibleSolution(v, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            v.PB(x);
        }
        int m;
        cin >> m;
        cout<<"MINPage is "<<min_page(v,n,m)<<endl;
    }
    return 0;
}