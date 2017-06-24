#pragma once
#include "Pessoa.h"
class Professor :
	public Pessoa
{
	std::string disciplina;
	float salario;
public:
	Professor();
	Professor(std::string nome,int idade,std::string disciplina, float salario);
	virtual ~Professor();
};

