#include <iostream>
using namespace std;

class flor {
	
private:
	
	
	
public:
	
	flor();
	
	int petalos;
	

	
};

flor::flor(){}


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
	
	return 0;
}

