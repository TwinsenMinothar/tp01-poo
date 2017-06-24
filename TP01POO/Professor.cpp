#include "Professor.h"



Professor::Professor() : Pessoa()
{
	disciplina = "";
	salario = 0;
}

Professor::Professor(std::string nome, int idade, std::string disciplina, float salario) : Pessoa(nome, idade)
{
	this->disciplina = disciplina;
	this->salario = salario;
}


Professor::~Professor()
{
}
