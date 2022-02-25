#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i + 1; ++j) {
			cout << '*';
		}

		cout << '\n';
	}

	for (int i = n - 2; 0 <= i; --i) {
		for (int j = 0; j < i + 1; ++j) {
			cout << '*';
		}

		cout << '\n';
	}

	return 0;
}