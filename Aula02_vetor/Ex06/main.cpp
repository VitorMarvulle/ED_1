#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int v[8], aux, y;
	
	for (int i=0; i<8; i++){
	
		cout<<"Digite um numero: ";
		cin>>v[i];	
	}
	
	cout<<"\n \n Vetor Ordenado \n";
	for (int i=0; i<8; i++){
		
		for(y=i+1;y<8;y++){
		
			if(v[i]>v[y]){
				
			aux = v[i];
			v[i]=v[y];
			v[y]=aux;
			}			
		}
	cout<<"\n"<<v[i];
	}
	return 0;
}
