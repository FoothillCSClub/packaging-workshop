
#include <iostream>
#include <iomanip>

#include <eratosthenes>

using namespace std;

int main() {
    SieveOfEratosthenes sieve;

    while (true)
        cout << setw(7) << sieve.next() << " : " << sieve.size() << endl;

    return 0; // NOT REACHED
}
