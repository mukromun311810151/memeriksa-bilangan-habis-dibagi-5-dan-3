#include <iostream>
using namespace std;

int main ()
{
	int a;
	
	cout <<"========================================================="<<endl;
	cout <<"MEMERIKSA BILANGAN APAKAH HABIS DIBAGI 5 DAN 3 ATAU TIDAK"<<endl;
	cout <<"========================================================="<<endl;
	
	cout <<"MASUKKAN BILANGAN = ";
	cin >>a;
	
	if (a%5==0 && a%3==0)
	cout <<"BILANGAN TERSEBUT HABIS DIBAGI 5 DAN 3"<<endl;
	else
	cout <<"BILANGAN TERSEBUT TIDAK HABIS DIBAGI 5 DAN 3"<<endl;
	
	return 0;
}
