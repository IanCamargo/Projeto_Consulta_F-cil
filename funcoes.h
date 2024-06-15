/*#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <windows.h> // Use Sleep() function on Windows

// Constantes
#define NUM_CONSULTAS 100
#define NUM_ESPECIALIDADES 5
#define NUM_DATAS 7
#define NUM_HORARIOS 8

// Estruturas de Dados
typedef struct {
    char nome[100];
    int idade;
} Paciente;

typedef struct {
    Paciente paciente;
    char especialidade[50];
    char data[20];
    char hora[10];
} Consulta;

typedef struct {
    bool horariosDisponiveis[NUM_HORARIOS];
} Especialidade;

// Variáveis Globais
extern Consulta consultas[NUM_CONSULTAS];
extern int totalConsultas;
extern const char* especialidades[NUM_ESPECIALIDADES];
extern const char* datasDisponiveis[NUM_DATAS];
extern const char* horarios[NUM_HORARIOS];
extern Especialidade horariosPorEspecialidade[NUM_ESPECIALIDADES];

// Declaração das Funções
void agendarConsulta();
void listarConsultas();
void listarConsultasPorEspecialidade();
void cancelarConsultas();
void reagendarConsulta();
void salvarConsultas();
void carregarConsultas();
void liberarHorarioOcupado(int especialidadeIndice, int horarioIndice);
void marcarHorarioOcupado(int especialidadeIndice, int horarioIndice);

#endif // CONSULTAS_H*/