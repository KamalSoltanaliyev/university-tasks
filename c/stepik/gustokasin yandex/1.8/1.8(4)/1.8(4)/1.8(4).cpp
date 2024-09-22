#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int k = 0; k < n; k++)
		for (int l = 0; l < m; l++)
			cin >> a[k][l];
	int i, j;
	cin >> i >> j;
	for (int k = 0; k < n; k++)
	{
		int buf;
		buf = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = buf;
	}
	for (int k = 0; k < n; k++)
	{
		for (int l = 0; l < m; l++)
			cout << a[k][l] << ' ';
		cout << endl;
	}
	return 0;
}