#include <iostream>
#include <climits>
using namespace std;
class Kalk {
	public:
		double substract(double x, double y){
			return x-y;
}

        double add(double x, double y){
	        return x+y;
}

        double divide(double x, double y){
	        return x/y;
}
        double multiply(double x, double y){
	        return x*y;
}
     };

int main(){
	cout<<"Input one value"<<endl;
	double a;
	cin>>a;
	cout<<"Input two value"<<endl;
	double b;
	cin>>b;
	cout<<"Input operation"<<endl;
	string c;
	cin>>c;
	if(c=="+"){
		Kalk adod;
	double d =	adod.add(a, b);
	cout<<d<<endl;
	main();
	}
	else if(c=="/"){
		Kalk divi;
	double g =	divi.divide(a, b);
		cout<<g<<endl;
	main();
	}
	else if(c=="-"){
		Kalk dub;
		double h = dub.substract(a, b);
		cout.precision(30);
		cout<<h<<endl;
		main();
	}
	else if(c=="*"){
		Kalk menog;
		double jh = menog.multiply(a, b);
		cout.precision(30);
		cout<<jh<<endl;
		main();
	}

	else{
			cout<<"Failed operation or failed input"<<endl;
			cin.clear();
			cin.ignore(INT_MAX,'\n');
			main();
		}
	}
