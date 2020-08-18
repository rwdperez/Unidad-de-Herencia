#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include <ctime>

using namespace std;

/*
METODO DIBUJAR
*/
//La unica forma que pude hacer andar el programa fue quintando textcolor y gotoxy tanto del metodo borrar como del metodo dibujar.
void Auto::dibujar(){
	
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			(color[i][k]);
			(x+i,y+k);
			cout<<(char) matriz[i][k];
		}
	}
}	
	/*
	METODO BORRAR
	*/
	
void Auto::borrar(){
		for (int i= 0; i<ancho+1; i++){
			for (int k= 0; k<alto+1; k++){
				(color[i][k]);	
				(x+i,y+k);
				cout<<" ";
			}
		}
	}
	
	void Auto::setLimit(int x0, int x1,int y0, int y1){
		maxLimitX = x1;
		maxLimitY = y1;
		minLimitX = x0;
		minLimitY = y0;
		
	}

Auto::Auto(){}

