#include <iostream>
using namespace std;

int maxxor(int A[], int len)
{
	int maxXor = 0;
	
	//Calculate xor of each pair
	for (int i = 0; i < len; i++)
	{
		for(int j = i + 1; j < len; j++)
		{
			maxXor = max(maxXor, A[i] ^ A[j]);
		}
	}
	
	return maxXor;
}

void print_array(int *A, int len)
{
    int i;

    cout << " A[] = {";
    for (i = 0; i < len-1; i ++) cout << A[i] << ", ";
    cout << A[len-1] << "}" << endl; 

    return;

} // end print_arrays()

int main(int argc, char *argv[])
{
    int A1[] = {1, 2}; // max=3 XOR(1,2)
    print_array(A1, 2);
    cout << maxxor(A1, 2) << endl;

    int A2[] = {7, 7, 7}; // max=3 XOR(1,2)
    print_array(A2, 3);
    cout << maxxor(A2, 3) << endl;

    int A3[] = {2, 1, 2, 3}; // max=3 XOR(1,2)
    print_array(A3, 4);
    cout << maxxor(A3, 3) << endl;

    int A4[] = {4, 1, 3, 2}; // max=7 XOR(3,4)
    print_array(A4, 4);
    cout << maxxor(A4, 4) << endl;

    exit(0);

} /* end main() */

