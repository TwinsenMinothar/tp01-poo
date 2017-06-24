#pragma once
#include "Pessoa.h"
class Auxiliar :
	public Pessoa
{
	std::string funcao;
	float salario;
public:
	Auxiliar();
	Auxiliar(std::string nome, int idade, std::string funcao, float salario);
	virtual ~Auxiliar();
};

