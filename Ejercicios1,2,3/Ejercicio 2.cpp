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

void flor::regar(){
	
	cout<<" Regando la flor"<<endl;
}

	
	
class margarita: public flor {
	
public:
	
	margarita();
	
};
	
margarita::margarita(){
	
	petalos = 4;
}
	
class rosa: public flor {
	
public:
	
	rosa();
	void regar();
	
	
};

rosa::rosa(){}

void rosa::regar(){
	
	cout<<"Regando la rosa"<<endl;
}



	

int main(int argc, char *argv[]) {
	
	margarita miMargarita;
	cout<<miMargarita.petalos<<endl;
	miMargarita.regar();
	
	rosa miRosa;
	miRosa.regar();
	

	
	return 0;
}

