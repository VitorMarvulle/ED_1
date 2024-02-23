#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a, b, area;
	
	cout<<"Digite a base do trapezio: "<<endl;
	cin>>a;
	cout<<"Digite a altura do trapezio: "<<endl;
	cin>>b;
	
	area=((a+a)*b)/2;
	
	cout<<"A area do trapezio: "<<area<<endl;
	
	return 0;
}
