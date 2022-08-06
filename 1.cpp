#include <iostream>
#define endl "\n"
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;
int main() {
	int zero[41] = { 1,0 };
	int one[41] = { 0,1 };
	int a;
	cin >> a;
	for (int j = 2; j <= 40; j++) {
		zero[j] = zero[j - 1] + zero[j - 2];
		one[j] = one[j - 1] + one[j - 2];
	}
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		cout << zero[b] << " " << one[b] << endl;
	}
}