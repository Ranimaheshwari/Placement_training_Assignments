// Rani Maheshwari

#include <bits/stdc++.h>
using namespace std;

int findNumOfPair(int* a, int n)
{
	sort(a, a + n);
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] <= 0)
			continue;
		int j = lower_bound(a, a + n, -a[i] + 1) - a;
		ans += i - j;
	}
	return ans;
}
int main()
{
    int a[500],n,i;
	cout<<"enter the length of array :";
	cin>>n;
	cout<<"enter array elements :";
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int ans = findNumOfPair(a, n);
	cout<<"Number of paires for array: " << ans << endl;

	return 0;
}
