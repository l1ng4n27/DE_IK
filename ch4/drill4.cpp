#include "std_lib_facilities.h"

int main(){
	double number=0;
	double smallest=0;
	double largest=0;
	double sum=0;
	string unit;
	vector<double>vector;
	
	while(unit!="|"){
		cout <<"To exit type '|'\n";
		cout <<"At now press any button to continue\n";
		cin >> unit;
			if(unit=="|")
				break;
		cout <<"Give me a number and a unit:\n";
		cin >> number >> unit;
		
		if(unit!="cm" && unit!="m" && unit!="in" && unit!="ft"){
			cout <<"This unit cannot be interpreted, please enter another one\n";
			cin >> unit;
		}
	
		if(unit=="cm")
			number/=100;
		if(unit=="ft")
			number*=0.254;
		if(unit=="in")
			number*=0.3048;
		vector.push_back(number);
		sum+=number;
				
	}
	for(int i=1;i<vector.size();i++){
		if(vector[i]<vector[largest]){
			largest=i;
		}	
	}
	for(int i=1; i<vector.size();i++){
		if(vector[i]<vector[smallest]){
			smallest=i;
		}
	}
	cout <<"Result: \n";
	sort(vector);
	for(int i=0; i<vector.size();i++)
		cout<<vector[i]<<"m, \n";
	
	cout <<"The smallest value is: "<<vector[smallest]<<"m\n";
	cout <<"The largest value is: "<<vector[largest]<<"m\n";
	cout <<"Number of values: "<<vector.size()<<"\n";
	cout <<"The sum of the value is: "<<sum<<"m\n";
	
	return 0;
}