#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main() {
     srand(time(0)) ;
     int k = rand() % 100 ;
     int s , x = 99 , y = 0 ;
     cout << "�п�J�@�ӼƦr" << endl ; 
    
    while (true){
	
      cout << "(" << y << "," << x <<")" << endl ;
	  cin >> s ;
	  
	if (s < y || s > x) {
	 	cout << "���b�d�򤺡A�Э��s��J" << endl ; 
	 	continue;
	  }    
	 
	if (s > k) {
	 	x = s - 1 ;
	 	 
	  } else if (s < k) {
	 	y = s + 1 ; 
	
	  } else {
	 	cout << "���!!!!!\(^��^*)))\(^��^*)))" << endl ; 
	 	break ;
	 	
	  }
	  
	  if (x == y) {
	 	cout << "GG (* �� ^ �� )" << endl ;
	 	cout << "���׬O:" << k << endl ; 
	 	cout << "�A���A�F�A���z�U���q��( * ^ - ^)" << endl ; 
	 	break ;
	  }
	   
	  
    }
	 return 0 ;
}
      
