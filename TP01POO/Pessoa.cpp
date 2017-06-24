#include "Pessoa.h"



Pessoa::Pessoa()
{
	nome = "";
	idade = 0;
}

Pessoa::Pessoa(std::string nome, int idade)
{
	this->nome = nome;
	this->idade = idade;
}


Pessoa::~Pessoa()
{
}
