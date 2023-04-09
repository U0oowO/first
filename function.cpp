#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int find_range(int[], int);

int find_range(int A[], int size) {
	
    int max = A[0] ;
    int min = A[0] ;
    for (int i = 1 ; i < size ; i ++){
    	if (A[i]> max){
		max = A[i];
		}
    	if (A[i]< min){
		min = A[i];
	    }
    	
    }
   
    
    return max - min; 

}

int main() {
	
	srand(time(0));
	
	int A[10];
	for (int i = 0; i < 10; i++) {
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	
	cout << find_range(A, 10) << endl;
	
	return 0;
}
