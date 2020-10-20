#include "std_lib_facilities.h"

int main(){
	try{
		//1.
		cout << "Success!\n";//Cout --> cout
		//2.
		cout << "Success!\n";//" --> ""
		//3.
		cout << "Success" << "!\n";//" --> ""
		//4.
		cout << "Success!" << '\n';//success --> "success"
		//5.
		int res=7;// string --> int
		vector<int>v(10);
		v[5]=res;
		cout <<"Success!\n";
		//6.
		vector<int>v2(10);//v --> v2
		v2[5]=7;//v(5) --> v[5]
		if(v[5] ==7){//!= --> ==
			cout << "Success!\n";
		}
		//7.
		if(bool cond=true)//cond --> bool cond=true (a cond változó nincs deklarálva)
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//8.
		bool c=true;//false --> true
		if(c)
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//9.
		string s="ape";
		bool c2="fool">s;//c --> c2
		if(c2)
			cout << "Success!\n";
		//10.
		string s2="ape";//s --> s2
		if(s2!="fool")//== --> !=
			cout << "Success!\n";
		//11.
		string s3="ape";//s --> s3
		if(s3!="fool")//== --> !=
			cout << "Success!\n";//< --> <<
		//12.
		string s4="ape";//s --> s4
		if(s4!="fool")//s+ --> !=
			cout << "Success!\n";
		//13.
		vector<char>v3(5);//v --> v3
		for(int i=0;i<=v3.size();++i);//0< --> 0<=; 0 --> i; v --> v3
			cout << "Success!\n";
		//14.
		vector<char>v4(5);//v --> v4
		for(int i=0;i<=v4.size();++i);//v --> v4
			cout << "Success!\n";
		//15.
		string s5="Success!\n";
		for(int i=0;i<10;++i)//6 --> 10
			cout << s5[i];
		//16.
		if(true)//then --> 
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//17.
		int x=2000;
		int c3=x;//char --> int
		if(c3==2000)
			cout << "Success!\n";
		//18.
		vector<char> v5(0);//<> --> <char>; v(5) --> v(0)
		for(int i=0;i<=v5.size();++i)
			cout << "Success!\n";
		//19.
		vector<char> v6(5);//<> --> <char>
		for(int i=0; i<=v5.size(); ++i);
			cout << "Success!\n";
		//20.
		int i=0;
		int j=9;
		while(i<9) ++i;// 
			if(j<i)
				cout << "Success!\n";
		//21.
		int x1=2;
		double d=4.5;//5 nem osztahtó 0-val(2-2)
		if (d==2*x1+0.5)
			cout << "Success!\n";
		//22
		string s7= "Success!\n";// a <char> nem kell a stringhez, a vectorhoz viszont igen
		for(int i=0; i<=10; ++i)
			cout << s7[i];
		//23
		int i1=0;
		while(i1<9) ++i1;{
			if(j<i1)
				cout << "Success!\n";
						}
		//24
		int x2=4;
		double d2=5/(x2-2);
		if(d2=2*x2+0.5)
			cout << "Success!\n";
		//25
		cout << "Success!\n";// cin-->cout

		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}