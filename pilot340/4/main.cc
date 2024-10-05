#include <iostream>
#include <bitset>
using namespace std;

void shiftbits(int nbits, int len)
{
	//print label
	std::cout << "Input: N = " << nbits << " L = " << len << std::endl;
	//check if bitmask is within range of len
	if(nbits <= 0 || nbits > len)
	{
		std::cout << "INVALID INPUT" << std::endl;
	}
	else
	{
		for(int i = 0; i < len; i++)
		{
		
			(nbits>>1);
			long long unsigned int unbits = nbits;
			std::cout << std::bitset<4>{unbits} << std::endl;
			
			nbits++;
		}
	}
	
	std::cout << std::endl;
};

int main(int argc, char *argv[])
{
    shiftbits(0, 0); // INVALID INPUT
    shiftbits(0, 1); // INVALID INPUT
    shiftbits(1, 0); // INVALID INPUT
    shiftbits(2, 1); // INVALID INPUT

    shiftbits(1, 1); 
    shiftbits(1, 2); 
    shiftbits(2, 2); 
    shiftbits(1, 3); 
    shiftbits(2, 3); 
    shiftbits(2, 4); 
    shiftbits(3, 3); 
    shiftbits(1, 5); 
    shiftbits(2, 5); 
    shiftbits(3, 5); 
    shiftbits(4, 5); 
    shiftbits(5, 5); 

    exit(0);

} /* end main() */
