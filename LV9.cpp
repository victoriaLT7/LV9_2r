// Victoria Levacic Tkalec
// LV9

#include <iostream>
#include <vector>
using namespace std;

//								Ulaz(n, p, rezultati)	   Očekivani izlaz   Dobiveni izlaz 
// 4 – ponovljeni maksimum		5 65 | 40 71 52 71 65		  71  2  3			71  2  3
// 5 – nitko ne prolazi	     7 93 | 56 89 43 52 31 91 92	  92  7  0			92  7  0

int najbolji(const vector<int>& v)
{
	int max = 0;
	for (int i = 0; i < v.size();i++) { if (v[i] > max) max = v[i];}
	return max;
}
int pozicija(const vector<int>& v,int najbolji)
{
	for (int i = 0; i < v.size();i++) 
	{
		if (v[i] == najbolji) return i + 1;
	}
	return -1;
}
int razultati(const vector<int>& v, int p)
{
	int b = 0;
	for (int i = 0; i < v.size();i++) { if (v[i] >= p) b++;}
	return b;
}

int main()
{
	int n, p; cin >> n >> p;
	vector<int>v;
	for (int i = 0; i < n;i++)
	{
		int broj; cin >> broj;
		v.push_back(broj);
	}
	int najBolji = najbolji(v);
	cout << "NAJBOLJI " << najbolji(v) << endl;
	cout << "POZICIJA" << pozicija(v,najBolji) << endl;
	cout << "PROLAZ " << razultati(v, p) << endl;
}