#include <iostream>
using namespace std;
int main()
{
	bool flag;
	for (int i = 500; i<600; i++) {
		flag = true;
		for (int k = 2; k<i/2; k++) {
			if (i % k == 0) {
				flag = false;
				break;
			}
		}
		if (flag) cout << i<<" ";
 }
	return 0;
}
