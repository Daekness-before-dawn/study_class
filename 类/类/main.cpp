#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<Windows.h>
using namespace std;


class plurality
{
public:
	plurality() {}
	plurality(double A, double B)
	{
		this->m_A = A;
		this->m_B = B;
	}
	
	plurality operator+(plurality &p)
	{
		double A = m_A + p.m_A;
		double B = m_B + p.m_B;
		return plurality(A,B);
	}
	void show()
	{
		cout << this->m_A << " " << this->m_B  << endl;
	}
	double m_A, m_B;
};
ostream &operator<<(ostream &cout, plurality &p)
{
	cout << p.m_A << " " << p.m_B << endl;
	return cout;
}
istream &operator>>(istream &cin, plurality &p)
{
	cin >> p.m_A >> p.m_B;
	return cin;
}
int main()
{
	/*plurality pl(10);
	pl.show();*/
	plurality a,b,c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;


	system("pause");
	return 0;
}