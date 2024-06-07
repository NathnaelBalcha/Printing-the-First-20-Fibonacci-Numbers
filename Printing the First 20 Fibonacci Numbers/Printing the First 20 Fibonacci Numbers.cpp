#include <iostream.h>
void printFibonacci(int a) {
	int first_num = 0, second_num = 1, next_num;
	cout << "\n\t\t\tFibonacci Sequence\n";
	cout << "\t\t===================================\n";
	cout<< " First " << a << " numbers:\n";
	for (int i = 0; i < a; ++i) {
			cout <<" "<< first_num << " ";
			next_num = first_num + second_num;
			first_num = second_num;
			second_num = next_num;
		}
	cout << endl;
}
int main() {
	printFibonacci(20);
	return 0;
}

