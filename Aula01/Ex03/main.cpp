#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, area;
	
	cout<<"Digite o lado 'a' do triangulo: "<<endl;
	cin>>a;
	cout<<"Digite a altura do triangulo: "<<endl;
	cin>>b;
	
	area=(a*b)/2;
	
	
	cout<<"A area do triangulo: "<<area<<endl;
	return 0;
}
