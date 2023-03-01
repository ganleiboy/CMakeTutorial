#include <iostream>
#include "count.h"

using namespace std;

int main(){
	int m, n;
	m = 5; n = 8;
	int p = count(m, n);
	cout << "p = " << p << endl;
	cout << "===== end =====" <<endl;
	return 0;
}
