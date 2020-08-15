#include <iostream>
using namespace std;

class flor {
	
private:
	
	
	
public:
	
	flor();
	
	int petalos;
	
	void regar();
	
};

flor::flor(){}

void regar(){
	
	cout<<"Regando la flor"<<endl;
}




class margarita: public flor {
	
public:
	
	margarita();
	
};

margarita::margarita(){
	
	petalos = 4;
	
}
	


int main(int argc, char *argv[]) {
	
	margarita miMargarita;
	cout<<miMargarita.petalos;
	miMargarita.regar();
	
	
	return 0;
}

