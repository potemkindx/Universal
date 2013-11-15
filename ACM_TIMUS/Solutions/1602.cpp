/*
													1602. Elevator
												Time limit   : 0.5 second
												Memory limit : 64 MB
	Problem illustration
	Petr is at the upper(nth) floor, and he wants to go down to the first floor.
	The elevator is now going down to the first floor and is at the level of the kth floor.
	The elevator goes up or down one floor in v seconds, and Petr goes down one flight of stairs in u seconds.
	When the elevator has reached the first floor, it has to remain there for 15 seconds; then it can go up.
	You may assume that nobody else will call for the elevator.Boarding the elevator takes 5 seconds.
	All other delays shouldn't be taken into account.
	Input
	The single input line contains the numbers n, k, u, and v(1 < k < n < 100; 0.1 < v < u < 100).
	Output
	Output the number of the floor which Petr should descend to.
	If there are several equivalent variants, output such one in which Petr will go by foot the smaller distance.
													Sample
										input					output
										50 49 4.8 0.2			45
/**/
#include <cstdio>

using namespace std;

double times[102];

int main() {
	int N, K;
	double v, u;
	scanf("%d %d %Lf %Lf", &N, &K, &v, &u);
	double b = (K - 1)*u + 15;
	times[N - 1] = (N - 1)*v;					  //wa #3
	for (int i = 0; i < N - 1; ++i) {             //wa #3 instead of N-1, N

		times[i] = (K - 1)*u + 15 +               //Elevator go down 
			(N - i - 1)*u + 5 +					  //We will wait elevator
			(N - i - 1)*u;		                  //time with speed
		//Wa #4 (-1)
		if (b < i*v)
			times[i] += i*v - b;

	}
	int pos = 0;
	for (int i = 1; i < N; ++i) {
		if (times[pos] > 1e-9 + times[i]) {       //Wa #11 precision
			pos = i;
		}
	}
	printf("%d", N - pos);
	return 0;
}
