#include "Aluno.h"



Aluno::Aluno() : Pessoa()
{
	curso = "";
}

Aluno::Aluno(std::string nome, int idade, std::string curso) : Pessoa(nome,idade)
{
	this->curso = curso;
}


Aluno::~Aluno()
{
}
