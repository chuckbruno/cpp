#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << "dollars and sue has" << sue;
	cout << " dollars deposited." << endl
	<< " Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\n Poor sam!" << endl;

	sam = ZERO;
	sue = ZERO;

	cout << "Sam has" << sam << " dollars and Sue has " << sue;
	cout <<  " dollars deposited." << endl;

	cout << "Take $1 from each account " << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;

	cout << "Sam has " << sam << "dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

	return 0;
}
