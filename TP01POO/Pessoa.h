#pragma once
#include <string>

class Pessoa
{
	std::string nome;
	int idade;
public:
	Pessoa();
	Pessoa(std::string nome, int idade);
	virtual ~Pessoa();
};

