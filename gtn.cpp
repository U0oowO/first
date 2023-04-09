#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main() {
     srand(time(0)) ;
     int k = rand() % 100 ;
     int s , x = 99 , y = 0 ;
     cout << "請輸入一個數字" << endl ; 
    
    while (true){
	
      cout << "(" << y << "," << x <<")" << endl ;
	  cin >> s ;
	  
	if (s < y || s > x) {
	 	cout << "不在範圍內，請重新輸入" << endl ; 
	 	continue;
	  }    
	 
	if (s > k) {
	 	x = s - 1 ;
	 	 
	  } else if (s < k) {
	 	y = s + 1 ; 
	
	  } else {
	 	cout << "獲勝!!!!!\(^▽^*)))\(^▽^*)))" << endl ; 
	 	break ;
	 	
	  }
	  
	  if (x == y) {
	 	cout << "GG (* ╯ ^ ╰ )" << endl ;
	 	cout << "答案是:" << k << endl ; 
	 	cout << "再接再厲，祝您下次猜中( * ^ - ^)" << endl ; 
	 	break ;
	  }
	   
	  
    }
	 return 0 ;
}
      
