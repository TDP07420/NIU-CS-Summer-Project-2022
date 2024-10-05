#include <iostream>
using namespace std;

int mm_score(string k, string g, int &b, int &w)
{
	//reset scores
	b = 0;
	w = 0;
	
	if(k.length() == g.length())	//check if strings are equal length
	{
		
		for(std::size_t i = 0; i < g.size(); ++i)
		{
			if(g.at(i) == k.at(i))
			{
				b++;
			}

			else if (g.find(k.at(i)))
				w++;
		}
		return 1;
	}
	else
	{
		return 0;
	}
};

int main(int argc, char *argv[])
{

    int b, w;

    string k1 = "11", g1 = "1";
    if (mm_score(k1, g1, b, w))
	cout << "k=" << k1 << " g=" << g1 << " b=" << b << " w=" << w << endl;
    else
	cout << "k=" << k1 << " g=" << g1 << " INVALID INPUT" << endl;

    string k2 = "111", g2 = "111";
    if (mm_score(k2, g2, b, w))
	cout << "k=" << k2 << " g=" << g2 << " b=" << b << " w=" << w << endl;
    else
	cout << "k=" << k2 << " g=" << g2 << " INVALID INPUT" << endl;

    string k3 = "abcd", g3 = "dcba";
    if (mm_score(k3, g3, b, w))
	cout << "k=" << k3 << " g=" << g3 << " b=" << b << " w=" << w << endl;
    else
	cout << "k=" << k3 << " g=" << g3 << " INVALID INPUT" << endl;

    string k4 = "abcde", g4 = "edcba";
    if (mm_score(k4, g4, b, w))
	cout << "k=" << k4 << " g=" << g4 << " b=" << b << " w=" << w << endl;
    else
	cout << "k=" << k4 << " g=" << g4 << " INVALID INPUT" << endl;

    string k5 = "xxxyy", g5 = "xyzbx";
    if (mm_score(k5, g5, b, w))
	cout << "k=" << k5 << " g=" << g5 << " b=" << b << " w=" << w << endl;
    else
	cout << "k=" << k5 << " g=" << g5 << " INVALID INPUT" << endl;


    exit(0);

} // end main()
