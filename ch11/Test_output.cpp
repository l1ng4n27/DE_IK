#include "std_lib_facilities.h"

int main()
{
	
	int birthyear=2002;

	cout<<showbase;
	cout<<birthyear<<"\t- decimal\n"
	<<hex<<birthyear<<"\t- hexadecimal\n"
	<<oct<<birthyear<<"\t- octal\n";

	cout<<dec<<18<<endl;
	cout<< endl;

	int a,b,c,d;
	cin>>a>>oct>>b>>hex>>c>>d;
	cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<endl;

	cout<<noshowbase<<dec;
	
	float x= 1234567.89;
	cout<<x<<"\t- default float\n"
	<<fixed<<x<<"\t- fixed\n"
	<<scientific<<x<<"\t- scientific\n";
	cout<<endl;

	cout << "Last name" << "\t First name" << "\t   Phone number\t" << "\t e-mail\n"
		 << "Miterli\t" << "\t Dániel\t" << "\t   06301977271\t" << "\t miterlidani@gmail.com\n"
		 << "Szűcs\t" << "\t Ádám\t" << "\t   06202972722\t" << "\t szucsi@gmail.com\n"
		 << "Gyirán\t" << "\t Benedek\t" << "   06309013035\t" << "\t guza01@gmail.com\n"
		 << "Sarbak\t" << "\t Márkó\t" << "\t   06205372164\t" << "\t Smarko1@gmail.com\n"
		 << "Németh\t" << "\t Nándor\t" << "\t   06201942544\t" << "\t angoalna@gmail.com\n";
	return 0;
}