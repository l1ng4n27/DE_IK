#include "std_lib_facilities.h"

int main(){
	try{
		//1.
		cout << "Success!\n" ;//C->c
		//2.
		cout << "Success!\n";//hiányzó ' " '
		//3.
		cout << "Success" << "!\n"; // hiányzó ' " '
		//4.
		cout << "success" << '\n';// success -> "success"
		//5
		int res = 7;  //int-el kell bekérni, mert szám(Stringet hosszabb szónál van)
		vector<int> v(10);
		v[5] = res; 
		cout << "Success!\n" ;
		//6
		vector<int> v2(10);//v már létezett
		v2[5] = 7;
		if(v2[5] == 7)// a ()-kerek zárójel helyett a []-kapcsosat = helyett ==;
			cout << "Success!\n";
		//7
		if(bool cond=true)//a cond változó nincs deklarálva
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//8
		bool c=true;//vagy a false helyett true-t írunk és a masodik sorba nem kell ' ! '
		if(c)//a tagadó !-jel nem volt megadva
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//9
		string s="ape";
		bool c2="fool">s;//bool parancsot használunk, és a c változót már használtuk egyszer
		if(c2)
			cout << "Success!\n";
		//10
		string s2="ape";// s változó már egyszer használva volt
		if(s2!="fool")// dupla == helyett != kell haszználni
			cout << "Success!\n";
		//11
		string s3="ape";// s2 változó már egyszer használva volt
		if(s3!="fool")// dupla == helyett != kell haszználni
			cout << "Success!\n";// kiiratásnál duppla < jel kell
		//12
		string s4="ape";// s3 változó már egyszer használva volt
		if (s4!="fool")
			cout << "Success!\n";// kiiratásnál duppla < jel kell
		//13
		vector<char> v3(5);//v és v2 változó használva van ezért kell egy új; [] helyett ()
		for(int i=0; i<=v3.size(); ++i);
			cout << "Success!\n";
		//14
		vector<char> v4(5);//v,v2,v3 használatban van
		for(int i=0; i<=v4.size(); ++i);
			cout << "Success!\n";
		//15
		string s5="Success!\n";//s4 használatban van a 18-as ugyan ez
		for(int i=0; i<10; ++i)//az i<6 csak 6 karaktert képes kiírni ezért meg kell növelni
			cout << s5[i];
		//16
		if(true)//a then szó nem kell ide
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//17
		int x=2000;
		int c1=x;//char helyett int
		if(c1==2000)
			cout << "Success!\n";
		/*
		//18
		string s6= "Success!\n";
		for(int i=0; i<10; ++i);
			cout << s6[i];
		*/
		//19
		vector<char> v5(5);//hiányzik a <char>
		for(int i=0; i<=v5.size(); ++i);
			cout << "Success!\n";
		
		//20
		int i=0;
		int j=9;
		while(i<10) ++i;// az i értékét kell növelni addig hogy a függvény megvalósuljon, {} kell hogy a ciklus ne ütközzön az ez után lévő feladatokkal
			if(j<i)
				cout << "Success!\n";	
		//21
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
		while(i1<10) ++i1;{
			if(j<i1)
				cout << "23Success!\n";
		}
		//24
		int x2=4;
		double d2=5/(x2-2);
		if(d2=2*x2+0.5)
			cout << "Success!\n";
		//25
		cout << "Success!\n";//a cin >> a bekérésnél van fontos szerepe, kiirtásnál cout <<
		
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