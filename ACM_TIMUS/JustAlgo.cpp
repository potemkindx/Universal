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

