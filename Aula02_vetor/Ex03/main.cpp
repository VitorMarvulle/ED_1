#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int tam, i;
	char vet[10];
	
	cout<<"Qual o tamanho da palavra: \n";
	cin>>tam;
	
	cout<<"Digite a palavra: \n";
	cin>>vet;

	cout<<"\n\n PALAVRA INVERTIDA \n\n";
	for(i=tam; i>=0; i--){
		cout<<vet[i]<<"\t";		
	}
	

	return 0;
}
