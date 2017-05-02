#include <iostream>
using namespace std;
int main()
{
	int n, i, curr;
	cin >> n;
	int arr[n], a[n], b[n];
	for(i=0; i<n; ++i) cin >> arr[i];
	for(i=0; i<n && arr[i]; ++i) a[i] = n;
	curr = i;
	a[curr] = 0;
	++i;
	while(i<n)
	{
		if(arr[i]==0)
			curr = i;
		a[i] = i - curr;
		++i;
	}
	for(i=n-1; i>=0 && arr[i]; --i) b[i] = n;
	curr = i;
	b[curr]=0;
	--i;
	while(i>=0)
	{
		if(arr[i]==0)
			curr = i;
		b[i] = curr - i;
		--i;
	}
	for(i=0; i<n; ++i) cout << min(a[i], b[i]) << ' ';
	cout << endl;
	return 0;
}
