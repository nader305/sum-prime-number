#include<iostream>
using namespace std;
int main() {
	int start;
	cout << "Enter the start:\n";
	cin >> start;
	int end;
	cout << "Enter the end:";
	cin >> end;
	if (start < end) {
		int sum = 0;
		for (int i = start; i <= end; i++) {
			sum += i;
		}
		cout << "Sum of prime between " << start << " and " << end << " is " << sum << endl;
	}
	else {
		cout << "The beginning should be smaller than the end\a\n";
	}
	return 0;
}