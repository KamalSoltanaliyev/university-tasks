#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if ((a[i] < 0 && a[i - 1] < 0) || (a[i] > 0 && a[i - 1] > 0)) {
			a[i] > a[i - 1] ? cout << a[i - 1] << " " << a[i] : cout << a[i] << " " << a[i - 1];
			break;
		}
	}
}