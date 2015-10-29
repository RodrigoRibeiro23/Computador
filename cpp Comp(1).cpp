#include<iostream>
#include<string>


using std::string
class Computador{
	
public:
	Computador (const string&, string&, string&, int, float);
	Computador (const Computador&);
	
string modelo;
string  processador;
float velocidadeprocessamento;
string sistemaOperacional;
int memoria ;

private:
string nomeModelo;
int quantidadedeMemoria;
string tipoProcessador;
string tipoSisop;
const static float VELOCIDADEMÁXIMAPROCESSAMENTO = 100;
}

	
