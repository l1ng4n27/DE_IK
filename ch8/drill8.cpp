#include "std_lib_facilities.h"

void swap_v(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a,int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*void swap_cr(const int& a,const int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/

int main(){

	int x=7;
	int y=9;
	swap_r(x,y);
	cout << "x is: " << x << " and y is: "<< y << '\n';

	const int cx=7;
	const int cy=9;
	swap_v(cx,cy);
	cout << "cx is: " << cx << " and cy is: "<< cy << '\n';

	double dx=7.7;
	double dy=9.9;
	swap_v(dx,dy);
	cout << "dx is: " << dx << " and dy is: "<< dy << '\n';

	return 0;
}