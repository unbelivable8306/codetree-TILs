#include <iostream>
using namespace std;
int a[100];
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) cout << a[i] << " ";
	}
}