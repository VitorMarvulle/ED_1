#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vet[10], i=0, n=1, c=0;
	
	while(i<10 && n!=0){
		cout<<"Digite um numero: \n";
		cin>>n;
		vet[i]=n;
		i++;
				
	}
		
	for (int y=0;y<i-1;y++){
		
		if (vet[y]==vet[i-2]){
			c=c+1;
		}
		
	cout<<"\n"<<vet[y]<<"\n";
	}
	
	cout<<"Quantidade de 'n' iguais ao último: "<<c;
	
	return 0;
}
