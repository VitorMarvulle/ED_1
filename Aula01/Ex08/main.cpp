#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a, b, c;
	
	cout<<"Digite o angulo a: "<<endl;
	cin>>a;
	cout<<"Digite o angulo b: "<<endl;
	cin>>b;
	cout<<"Digite o angulo c: "<<endl;
	cin>>c;
	
	if ((a + b < c) || (a + c < b) || (b + c < a)){
	cout<<"Nao e um triangulo";}
    else if ((a == b) && (a == c)){
	cout<<"Equilatero";}
    else if ((a==b) || (a==c) or (b==c)){
	cout<<"Isosceles";}
    else{
	cout<<"Escaleno";}


	
	return 0;
}
