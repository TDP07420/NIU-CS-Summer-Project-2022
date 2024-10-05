#include <iostream>
using namespace std;

int longestbitpair(int n)
{
	//declare count
	int count = 0;
	
	while(n > 0)
	{
		if(n & 1)	//to check '1' of '10'
		{
			n >>= 1;
			if(!(n&1))	// to check '0' of '10'
			{
				count++;	//increase count once sequence of '1' and '0' complete
			}
			else
			{
				n >>= 1;
			}
		}
		
		n >>= 1;
	}
	
	return count;	
}

int main(int argc, char *argv[])
{
    int n;

    n=   3; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=   2; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=   4; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=   0; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=   1; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n= 948; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=1748; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=87466; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=349610; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;
    n=349866; cout << "n=" << n <<" longestbitpair=" << longestbitpair(n) << endl;

    exit(0);

} /* end main() */
