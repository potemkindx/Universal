/*
	Simple recursive Great Common Divisor
	http://en.wikipedia.org/wiki/Euclidean_algorithm
*/
long long GCD(long long a, long long b) {
	return b ? GCD(b, a % b) : a;
}
/*
    Least common multiple with GCD
	http://en.wikipedia.org/wiki/Least_common_multiple
*/
long long LCM(long long a, long long b) {
	return a / GCD(a, b) * b;
}

/*
	Check if the number is prime O(sqrt(N))
*/

bool isPrime(long long N) {
	if (N == 2) {
		return true;
	}
	for (int i = 3; i*i <= N; ++i) {
		if (N % i == 0) {
			return false;
		}
	}
	return true;
}
