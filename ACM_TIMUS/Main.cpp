#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <set>
#include <string>
	using namespace std;

	int input[32002];
	int main() {
		int N, M, Mul = 1;
		scanf("%d %d", &N, &M);
		--N;
		--M;
		if (N == M){
			printf("%d", N);
			return 0;
		}
		int count = 0;
		int step = 0;
		input[0] = 0;
		for (int i = 1; i <= N; ++i) {
			double b = floor(static_cast<double>(M) / static_cast<double>(N)*i);
			count += b - step;
			step = b - 1;
		}
		cout << count << endl;
		return 0;
		/*end first way*/
	}
	