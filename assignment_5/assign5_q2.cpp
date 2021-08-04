// Rani Maheshwari q2

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
    int arr[500],n,i;
    cout<<"enter the length of array :";
    cin>>n;
    cout<<"elements are :";
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout << "\n GCD : "<<findGCD(arr, n) << endl;
    return 0;
}
