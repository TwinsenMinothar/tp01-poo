#pragma once
#include <cstdio>
#include "Aluno.h"
#include "Professor.h"
#include "Auxiliar.h"
#include <vector>

class Cadastro
{
	static FILE *aluno;
	static FILE *professor;
	static FILE *auxiliar;
public:
	Cadastro();
	virtual ~Cadastro();
	static void abrirArquivos(std::vector<Aluno> alunos,std::vector<Professor> professores,std::vector<Auxiliar> auxiliares);
	static void cadastro(Aluno aluno);
	static void cadastro(Professor professor);
	static void cadastro(Auxiliar auxiliar);
};

