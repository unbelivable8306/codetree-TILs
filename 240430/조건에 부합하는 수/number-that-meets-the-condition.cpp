#include <iostream>
using namespace std;
int main() {
	int n;
	int cnt = 0;
	int prod = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0 && i % 4 != 0) continue;
		else if ((i / 8)%2 == 0) continue;
		else if ((i % 7) < 4) continue;
		else cout << i << " ";
	}
	return 0;
}