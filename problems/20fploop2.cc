#include <iostream>
using namespace std;

int main() {
	float sum = 0;
	for (float x = 0; x < 1000000; x += 0.1)
		sum += x;
	cout << sum << '\n';
	// is the answer right?  What should it be?
}
