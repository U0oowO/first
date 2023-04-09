#include <iostream>
#include <string>

using namespace std;

string purify(string);
bool isPalindrome(string, unsigned int);

string purify(string in) {

	string out = "";
	for (int i = 0 ; i < in.length() ; i ++) {
		if (in.at(i) >= 'a' && in.at(i) <= 'z' ){
			out.append(in.substr(i, 1));
		}
	
		if (in.at(i) >= 'A' && in.at(i) <= 'Z') {
			out.append(string(1, char(in.at(i) + 32)));
		}
	}

	return out;

}

bool isPalindrome(string in, unsigned int i) {
	
	if (i > in.length() / 2) {
	return true;
    }
	
	if (in.at(i) == in.at(in.length() - i - 1))
		return isPalindrome(in, i + 1);
	return false;
    


}

bool isPalindrome(string in) {

	string t = purify(in);
	cout << t << endl;
	return isPalindrome(t, 0);

}

int main() {

	string test_case1 = "www.csie.ntu.edu.tw";
	cout << isPalindrome(test_case1) << endl;  

	string test_case2 = "anna";
	cout << isPalindrome(test_case2) << endl; 

	string test_case3 = "emma";
	cout << isPalindrome(test_case3) << endl;  

	string test_case4 = "Sir, I demand, I am a maid named Iris.";
	cout << isPalindrome(test_case4) << endl; 

	return 0;
}

