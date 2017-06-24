#pragma once
#include "Pessoa.h"
class Aluno :
	public Pessoa
{
public:
	std::string curso;
	Aluno();
	Aluno(std::string nome,int idade,std::string curso);
	virtual ~Aluno();
};

