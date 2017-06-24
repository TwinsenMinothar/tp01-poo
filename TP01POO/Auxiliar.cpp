#include "Auxiliar.h"



Auxiliar::Auxiliar() : Pessoa()
{
	funcao = "";
	salario = 0;
}

Auxiliar::Auxiliar(std::string nome, int idade, std::string funcao, float salario) : Pessoa(nome,idade)
{
	this->funcao = funcao;
	this->salario = salario;
}


Auxiliar::~Auxiliar()
{
}
