#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a, b, c;
	double delta, x1, x2;
	
	cout <<"***EQUACAO DO 2ND GRAU***"<<endl<<endl;
	cout <<"*** ax^2+bx+c=0 ***"<<endl<<endl;
	cout <<"*** x=(-b +- (b^2 -4ac)^1/2) 2a ***"<<endl<<endl;
	
	cout <<"Digite a: "<<endl;
	cin >> a;	
	cout <<"Digite b: "<<endl;
	cin >> b;
	cout <<"Digite c: "<<endl;
	cin >> c;
	
	delta = (pow(b,2))-4*a*c;
	
	x1 = (-b+(sqrt(delta)))/2*a;
	x2 = (-b-(sqrt(delta)))/2*a;
	
	cout <<"Raiz da equacao x1: " << x1<<endl<<endl;
	cout <<"Raiz da equacao x2: " << x2<<endl<<endl;
	return 0;
}
