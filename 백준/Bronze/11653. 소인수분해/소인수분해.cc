#include<iostream>
using namespace std;

int main() {
	int N;

	scanf("%d",&N);

	for (int i = 2; i < N + 1; i++) {
		if(N % i==0) {
				printf("%d\n", i);
				N /= i;
				i = 1;

		}
	}
	return 0;
}