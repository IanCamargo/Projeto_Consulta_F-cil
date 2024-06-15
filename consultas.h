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

/**
 * @brief Agenda uma nova consulta.
 *
 * Esta função agenda uma nova consulta solicitando ao usuário informações
 * como nome, idade, especialidade, data e horário. Verifica também a validade
 * dos dados fornecidos.
 */
void agendarConsulta();

/**
 * @brief Lista todas as consultas agendadas.
 *
 * Esta função imprime na tela todas as consultas que foram agendadas,
 * exibindo informações como nome do paciente, idade, especialidade, data e horário.
 */
void listarConsultas();

/**
 * @brief Lista todas as consultas por especialidade.
 *
 * Esta função exibe todas as consultas agendadas agrupadas por especialidade,
 * permitindo visualizar as consultas de cada especialidade separadamente.
 */
void salvarConsultas();

/**
 * @brief Carrega as consultas de um arquivo.
 *
 * Esta função carrega as consultas de um arquivo de texto, permitindo que as informações
 * salvas sejam recuperadas quando o programa é iniciado.
 */
void carregarConsultas();

/**
 * @brief Lista todas as consultas por especialidade.
 *
 * Esta função exibe todas as consultas agendadas agrupadas por especialidade,
 * permitindo visualizar as consultas de cada especialidade separadamente.
 */
void listarConsultasPorEspecialidade();

/**
 * @brief Cancela uma consulta agendada.
 *
 * Esta função permite ao usuário cancelar uma consulta agendada. O usuário
 * deve selecionar qual consulta deseja cancelar a partir da lista de consultas.
 */
void cancelarConsultas();

/**
 * @brief Salva as consultas em um arquivo.
 *
 * Esta função salva todas as consultas agendadas em um arquivo de texto, permitindo
 * que as informações sejam persistidas entre execuções do programa.
 */
void reagendarConsulta();

extern Consulta consultas[NUM_CONSULTAS];
extern int totalConsultas;

#endif