// Rashi Maheshwari
#include <bits/stdc++.h>
using namespace std;

bool checkPerfectcube(int n)
{
	int d = cbrt(n);
	if (d * d * d == n)
		return true;

	return false;
}

int largestNonPerfectcubeNumber(int a[], int n)
{
	int maxi = -1;
	for (int i = 0; i < n; i++) {
		if (!checkPerfectcube(a[i]))
			maxi = max(a[i], maxi);
	}

	return maxi;
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
	
	cout <<"largest non-perfect cube of array is : "<< largestNonPerfectcubeNumber(a, n)<<endl;
	return 0;
}
