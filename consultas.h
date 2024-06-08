#ifndef CONSULTAS_H
#define CONSULTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#define Sleep(x) usleep((x) * 1000)
#endif

#define NUM_ESPECIALIDADES 4
#define NUM_HORARIOS 8
#define NUM_DATAS 5
#define NUM_CONSULTAS 100

extern const char *especialidades[NUM_ESPECIALIDADES];
extern const char *horarios[NUM_HORARIOS];
extern const char *datasDisponiveis[NUM_DATAS];

typedef struct {
    char nome[100];
    int idade;
} Paciente;

typedef struct {
    Paciente paciente;
    char especialidade[50];
    char data[11];
    char hora[6];
} Consulta;

typedef struct {
    bool horariosDisponiveis[NUM_HORARIOS];
} HorariosEspecialidade;

extern HorariosEspecialidade horariosPorEspecialidade[NUM_ESPECIALIDADES];

void agendarConsulta();
void listarConsultas();
void salvarConsultas();
void carregarConsultas();
void listarConsultasPorEspecialidade();
void cancelarConsultas();
void reagendarConsulta();

extern Consulta consultas[NUM_CONSULTAS];
extern int totalConsultas;

#endif