
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void print(int n) {
	cout << setw(10) << n << endl;
}

int main() {
	vector<int> primes;

	print(1);

	for (int n = 2; true; ++n) {
		bool is_divisible = false;

		for (int p: primes)
			if (n % p == 0) {
				is_divisible = true;
				break;
			}

		if (!is_divisible) {
			primes.push_back(n);
			print(n);
		}
	}
}
