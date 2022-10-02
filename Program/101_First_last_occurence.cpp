#include <bits/stdc++.h>
#define PB push_back
#define ll long long int
#define MP make_pair
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;

// str.erase(1, 4);
// int B = b - '0' + 48;
int firstOcc(vector<int> &nums, int target)
{

    int n = nums.size(), mid, ans1 = -1;
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (nums[mid] == target)
        {
            ans1 = mid;
            hi = mid - 1;
        }
        else if (nums[mid] > target)
        {
            // ans1 = mid;
            hi = mid - 1;
        }
        else if (nums[mid] < target)
        {
            // ans1 = mid;
            lo = mid + 1;
        }
    }
    return ans1;
}
int LastOcc(vector<int> &nums, int target)
{

    int n = nums.size(), mid, ans2 = -1;
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (nums[mid] == target)
        {
            ans2 = mid;
            lo = mid + 1;
        }
        else if (nums[mid] > target)
        {
            // ans1 = mid;
            hi = mid - 1;
        }
        else if (nums[mid] < target)
        {
            // ans1 = mid;
            lo = mid + 1;
        }
    }
    return ans2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    loop(i, 0, n)
    {
        int x;
        cin >> x;
        v.PB(x);
    }
    int target;
    cin >> target;
    cout<<"first occurence of "<<target<<" is "<<firstOcc(v,target)<<endl;
    cout<<"Last occurence of "<<target<<" is "<<LastOcc(v,target)<<endl;
    return 0;
}