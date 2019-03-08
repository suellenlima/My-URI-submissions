#include <iostream>
using namespace std;

int main () {
	
	float valor;
	cin >> valor;
	if (valor >= 0 && valor <= 1000000.00){
		
	}
	else valor = 0;
	
	if (valor !=0){
	cout << "NOTAS:" << endl;
	while (valor != 0){
		float r;
		int i;
		if ( valor >= 100){
		i = valor / 100;
		r = valor % 100;
		cout << i >> " nota(s) de " << "R$ 100.00" >> endl;
	}
		if ( r >= 50){
		i = valor / 50;
		r = valor % 50;
		cout << i << " nota(s) de " << "R$ 50.00" << endl;
	}	
		if ( r >= 20){
		i = valor / 20;
		r = valor % 20;
		cout << i << " nota(s) de " << "R$ 20.00" << endl;
	}	
		if ( r >= 10){
		i = valor / 10;
		r = valor % 10;
		cout << i << " nota(s) de " << "R$ 10.00" << endl;
	}	
		if ( r >= 5){
		i = valor / 5;
		r = valor % 5;
		cout << i << " nota(s) de " << "R$ 5.00" << endl;
	}	
		if ( r >= 2){
		i = valor / 2;
		r = valor % 2;
		cout << i << " nota(s) de " << "R$ 2.00" << endl;
	}	
	
		cout << "MOEDAS:" << endl;
		
		if ( r >= 1){
		i = valor / 1;
		r = valor % 1;
		cout << i << " nota(s) de " << "R$ 1.00" << endl;
	}	
		if ( r >= 0.50){
		i = valor / 0.50;
		r = valor % 0.50;
		cout << i << " nota(s) de " << "R$ 0.50" << endl;
	}	
		if ( r >= 0.25){
		i = valor / 0.25;
		r = valor % 0.25;
		cout << i << " nota(s) de " << "R$ 0.25" << endl;
	}	
		if ( r >= 0.10){
		i = valor / 0.10;
		r = valor % 0.10;
		cout << i << " nota(s) de " << "R$ 0.10" << endl;
	}	
		if ( r >= 0.05){
		i = valor / 0.05;
		r = valor % 0.05;
		cout << i << " nota(s) de " << "R$ 0.05" << endl;
	}	
		if ( r >= 0.01){
		i = valor / 0.01;
		r = valor % 0.01;
		cout << i << " nota(s) de " << "R$ 0.01" << endl;
	}	
	}
	
}
}
