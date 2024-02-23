#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int ano;
	
	cout<<"Digite o ano: "<<endl;
	cin>>ano;
	if((ano%4==0 && ano%100!=0) || (ano%400==0)){
		cout<<"Ano bissexto"<<endl;
	}else{
		cout<<"Ano nao bissexto"<<endl;
		}
	
	return 0;
}
