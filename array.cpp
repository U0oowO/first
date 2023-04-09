#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
	srand(time(0));
	int a[3][3];
	
	for(int i = 0; i <= 2 ; i ++) {
		for(int k = 0 ; k <= 2 ; k ++ ) 
			a[i][k] = rand()%100 ;
		
	}
		
	for(int i = 0; i <= 2 ; i ++) {
		for(int k = 0 ; k <= 2 ; k ++ ) 
			cout << setw(3) << a[i][k] ;
		cout << endl ;
	}
	cout << endl ;
	
	
	int A[3][3];
	for ( int i = 0 ; i <= 2 ; i ++){
		for (int k = 0 ; k <= 2 ; k ++)
		A[k][2-i] = a[i][k];
	}
	
	for ( int i = 0 ; i <= 2 ; i ++){
		for (int k = 0 ; k <= 2 ; k ++)
		cout << setw(3) << A[i][k] ;
		cout << endl ;
	}
    return 0 ;
}
	
	
	
	
	
	
	
	
	
