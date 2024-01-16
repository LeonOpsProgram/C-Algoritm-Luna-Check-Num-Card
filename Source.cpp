#include <iostream>
using namespace std;


//string genRandomCode(string s) {
//
//}

int main() {
	char a[17];
	cin >> a;
	int sum = 0;
	for (int i = 0; i < 16; i++) {
		int x = a[i] - '0';
		if (i % 2 != 0) {
			sum += x;
		}
		else {
			if (x * 2 >= 10) {
				sum += (x * 2 - 9);
			}
			else 
				sum += (x * 2);
		};
		cout << sum << endl;
	}
	if (sum % 10 == 0) 
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}