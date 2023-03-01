#include <iostream>
#include <vector>

using namespace std;


void print_hello(){
	cout << "hello, world." << endl;
}

int main(){
	print_hello();
	float arr[3][3] = {1,23,4,5,6,7,8};
	cout << arr[0][0] << endl;

	vector<int> vec = {1,23,4,5,6,7,8};
	cout << vec[1] << endl << vec[2] << endl;

	cout << "===== end =====" << endl;
	return 0;
}
