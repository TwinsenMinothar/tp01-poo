#include "Cadastro.h"


Cadastro::Cadastro()
{
	aluno = nullptr;
	professor = nullptr;
	auxiliar = nullptr;
}

Cadastro::~Cadastro()
{
}

void Cadastro::abrirArquivos(std::vector<Aluno> alunos, std::vector<Professor> professores, std::vector<Auxiliar> auxiliares)
{
	aluno = fopen("alunos.txt", "a+");
	professor = fopen("professores.txt", "a+");
	auxiliar = fopen("auxiliares.txt", "a+");
	fread(&alunos, sizeof(Aluno), 100, aluno);
	fread(&professores, sizeof(Professor), 100, professor);
	fread(&auxiliares, sizeof(Auxiliar), 100, auxiliar);

}

void Cadastro::cadastro(Aluno aluno)
{
	
}

void Cadastro::cadastro(Professor professor)
{
}

void Cadastro::cadastro(Auxiliar auxiliar)
{
}
