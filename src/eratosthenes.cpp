
#include <eratosthenes>

// Computes the next highest prime number after the numbers already computed
// by the sieve.
long SieveOfEratosthenes::next() {
    if (primes.size() == 0) {
        primes.push_back(1);
        return 1;
    }

    for (long n = primes.back()+1; true; ++n) {
        bool isDivisible = false;

        for (
            std::vector<long>::iterator i = primes.begin()+1;
            i != primes.end();
            ++i
        )
            if (n % *i == 0) {
                isDivisible = true;
                break;
            }

        if (!isDivisible) {
            primes.push_back(n);
            return n;
        }
    }
}
