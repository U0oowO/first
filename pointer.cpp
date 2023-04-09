#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int* array_gen(int, int, int);
int* two_sum(int*, int);
void display(int*, int);

void display(int* A, int size) {
	
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	
}

int* two_sum(int* A, int size) {
	
	for (int i = 0 ; i <= size ; i++){
		for (int k = i + 1 ; k <= size ; k++){
			if (A[i] + A[k] == 0){
				return new int[2] {i,k};
			}
		}
	}
	return 0;
}

int* array_gen(int low, int high, int size) {
	
	int* arr = new int[size];
	int N = high - low + 1;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % N + low;
	}
	return arr;
	
}

int main() {
	
	srand(time(0));
	int* test_array = array_gen(-10, 10, 10);
	display(test_array, 10);
	int* ans = two_sum(test_array, 10);
	if (ans == 0) {
		cout << "Cannot find any pair." << endl;
	} else {
		display(ans, 2);	
	}

	return 0;
}
