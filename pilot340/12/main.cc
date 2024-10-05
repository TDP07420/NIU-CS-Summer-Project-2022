#include <iostream>
using namespace std;

int nclimbs(int n)
{
	if(n == 0)
		return 1;	//return n if n = 1
	else if(n < 0)
		return 0;	//return -1 if n < 0
	else
		return nclimbs(n - 3) + nclimbs(n - 2) + nclimbs(n - 1);	
};


int main(int argc, char *argv[])
{

    int  n1=1; // 1
    cout << n1 << " " << nclimbs(n1) << endl;

    int  n2=2; // 2
    cout << n2 << " " << nclimbs(n2) << endl;

    int  n3=4; // 7
    cout << n3 << " " << nclimbs(n3) << endl;

    int  n4=10; // 7
    cout << n4 << " " << nclimbs(n4) << endl;

    exit(0);

} // end main()
