#include <iostream>
using namespace std;

void histogram(int A[], int len)
{
	//mark visited arrays
	bool visited[len];
	for(int i = 0; i <len; i++)
	{
		//mark array nodes as not visited
		visited[i] = 0;
	}
	
	
	for(int i = 0; i < len; i++)
	{
		if(visited[i] == 1)	//if visited skip
			continue;
			
		int count = 1;
		
		for(int j = i+1; j < len; j++)
		{
			if( A[i] == A[j])
			{
				visited[j] = 1;	//mark visited
				count++;
			}
		}
		cout << A[i] << " occurs " << count << " time(s)." << endl;
	}
	
	cout << endl;
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
    int A1[] = {7, -11, 7};
    print_array(A1, 3);
    histogram(A1, 3);

    int A2[] = {20, 436};
    print_array(A2, 2);
    histogram(A2, 2);

    int A3[] = {5};
    print_array(A3, 1);
    histogram(A3, 1);

    int A4[] = {-9, -9, -9};
    print_array(A4, 3);
    histogram(A4, 3);

    int A5[] = {12, -4, 19, 5, 19, 6, 5, -4, -4, 7};
    print_array(A5, 10);
    histogram(A5, 10);

    exit(0);

} /* end main() */

