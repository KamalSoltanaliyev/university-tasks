
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int s, n;
	cin >> s >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	int prev_s = 0, count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] >= s)
		{
			prev_s = a[i];
			count++;
			for (int j = i; j < n; j++)
				if (a[j] - prev_s >= 3)
				{
					count++;
					prev_s = a[j];
				}
			break;
		}
	cout << count;
	return 0;
}