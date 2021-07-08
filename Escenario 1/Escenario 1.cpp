#include <iostream>
using namespace std;

int main (){
	
	int myarray [] = {1,2,1,3,3,1,2,1,5,1};
	
	//se crea un arreglo 
	
		int aux;
		
		aux = 0;
		//se crea una variable auxiliar 
	
	for(int i=1; i<=6-1; i++){
		
		// se crea un for que recorra las posciciones 
	
			//se realiza la condicion donde se ve observado el recorrido 
		if(myarray[i] > myarray[aux]){
			
		 
			aux = i;
			//se imprime el resultado 
			cout<<i<<": ******"<<endl;	
		}
	
	}
	
	
	
	system ("PAUSE");
	return 0;
}
