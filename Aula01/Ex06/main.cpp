#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int idade;
	
	cout<<"Digite a idade: "<<endl;
	cin>>idade;
	if(idade<=11){
		cout<<"Crianca"<<endl;
	}else if(idade>=12 && idade<=17){
		cout<<"Adolescente"<<endl;
	}else if(idade>=18 && idade<=49){
		cout<<"Adulta"<<endl;
	}else{
		cout<<"Idosa"<<endl;
	}

	
	return 0;
}
