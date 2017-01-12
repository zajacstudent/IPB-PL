/*
tekst	A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z
szyfr	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z	A	B	C	
*/

#include <iostream>
#include <string>

using namespace std;

string Zaszyfrowanie(string);
string Odszyfrowanie(string);

const int ile = 3;

int main()
{

	string slowo;
	
	cout <<"Podaj slowo do zaszyfrowania: ";
	cin >>slowo;
	cin.ignore();
	
	cout <<"Zaszyfrowane dane: "<<Zaszyfrowanie(slowo)<<"\n";
	
	cout <<"A odszyfrowane to: "<<Odszyfrowanie(Zaszyfrowanie(slowo));
	
	getchar();
	return 0;
}
string Zaszyfrowanie(string slowo)
{
	int t;
	
	for (int i = 0; i <slowo.length(); i++)
{
		t = slowo[i] + ile;
		
		if (t < 0) 
		 slowo[i] += (26 + ile);
		else if (t > 90)
		 slowo[i] -= (26 - ile);	//slowo[i] = slowo[i] - (26 - ile) = slowo[i] - 26 + ile;
		else
		 slowo[i] += ile;
}

	return slowo;
}
string Odszyfrowanie(string slowo)
{
	int t;
	
	for (int i = 0; i <slowo.length(); i++)
	{

		t = slowo[i] - ile;
		
		if (t < 65) 
		 slowo[i] += (26 - ile);
		else if (t > 90)
		 slowo[i] -= (26 + ile);	
		else
		 slowo[i] -= ile;
}

	return slowo;
}



