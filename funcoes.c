/*#include "consultas.h"

// Definições das Variáveis Globais
Consulta consultas[NUM_CONSULTAS];
int totalConsultas = 0;
const char* especialidades[NUM_ESPECIALIDADES] = {"Cardiologia", "Dermatologia", "Gastroenterologia", "Neurologia", "Ortopedia"};
const char* datasDisponiveis[NUM_DATAS] = {"01/07/2024", "02/07/2024", "03/07/2024", "04/07/2024", "05/07/2024", "06/07/2024", "07/07/2024"};
const char* horarios[NUM_HORARIOS] = {"08:00", "09:00", "10:00", "11:00", "14:00", "15:00", "16:00", "17:00"};

// Implementação das Funções

// Função para marcar horário como ocupado
void marcarHorarioOcupado(int especialidadeIndice, int horarioIndice) {
    if (horarioIndice >= 0 && horarioIndice < NUM_HORARIOS) {
        horariosPorEspecialidade[especialidadeIndice].horariosDisponiveis[horarioIndice] = false;
    }
}

void agendarConsulta() {
    if (totalConsultas >= NUM_CONSULTAS) {
        printf(" Limite de consultas atingido!\n");
        return;
    }

    Consulta novaConsulta;
    system("cls");

    printf("\n-~-~-~-~-Agendamento de Consultas-~-~-~-~-\n\n");

    while (1) {
        printf(" Nome do paciente: ");
        fgets(novaConsulta.paciente.nome, 100, stdin);
        novaConsulta.paciente.nome[strcspn(novaConsulta.paciente.nome, "\n")] = 0;

        bool valido = true;
        for (int i = 0; novaConsulta.paciente.nome[i] != '\0'; i++) {
            if (!isalpha(novaConsulta.paciente.nome[i]) && novaConsulta.paciente.nome[i] != ' ') {
                valido = false;
                break;
            }
        }

        if (valido) {
            break;
        } else {
            printf("\n Por favor, insira um nome valido! Use somente letras.\n\n");
        }
    }

    while (1) {
        printf("\n Idade do paciente: ");
        if (scanf(" %d", &novaConsulta.paciente.idade) != 1 || novaConsulta.paciente.idade <= 0 || novaConsulta.paciente.idade > 100) {
            printf("\n Por favor, insira uma idade valida!\n\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    }

    printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

    printf("\n Especialidades disponiveis:\n\n");
    for (int i = 0; i < NUM_ESPECIALIDADES; i++) {
        printf(" %d. %s\n", i + 1, especialidades[i]);
    }
    int escolha;
    while (1) {
        printf("\n Escolha a especialidade: ");
        if (scanf(" %d", &escolha) != 1 || escolha < 1 || escolha > NUM_ESPECIALIDADES) {
            printf("\n Escolha uma especialidade valida!\n\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    }

    printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

    int especialidadeIndice = escolha - 1;
    strcpy(novaConsulta.especialidade, especialidades[especialidadeIndice]);

    printf("\n Datas disponiveis:\n\n");
    for (int i = 0; i < NUM_DATAS; i++) {
        printf(" %d. %s\n", i + 1, datasDisponiveis[i]);
    }
    while (1) {
        printf("\n Escolha a data: ");
        if (scanf(" %d", &escolha) != 1 || escolha < 1 || escolha > NUM_DATAS) {
            printf("\n Escolha uma data valida.\n\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    }
    strcpy(novaConsulta.data, datasDisponiveis[escolha - 1]);

    printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

    printf("\n Horarios disponiveis para %s:\n\n", especialidades[especialidadeIndice]);
    for (int i = 0; i < NUM_HORARIOS; i++) {
        if (horariosPorEspecialidade[especialidadeIndice].horariosDisponiveis[i]) {
            printf(" %d. %s\n", i + 1, horarios[i]);
        }
    }
    while (1) {
        printf("\n Escolha o horario: ");
        if (scanf(" %d", &escolha) != 1 || escolha < 1 || escolha > NUM_HORARIOS || !horariosPorEspecialidade[especialidadeIndice].horariosDisponiveis[escolha - 1]) {
            printf("\n Escolha um horario valido.\n\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    }
    strcpy(novaConsulta.hora, horarios[escolha - 1]);

    printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

    consultas[totalConsultas] = novaConsulta;
    totalConsultas++;
    marcarHorarioOcupado(especialidadeIndice, escolha - 1);
    printf("\n Consulta agendada com sucesso!\n");
    Sleep(2000);
    system("cls");
}

void listarConsultas() {
    system("cls");
    printf("\n-~-~-~-~-Consultas Agendadas-~-~-~-~-\n\n");

    if (totalConsultas == 0) {
        printf(" Nenhuma consulta agendada.\n");
    } else {
        for (int i = 0; i < totalConsultas; i++) {
            printf("%d. Nome: %s\n", i + 1, consultas[i].paciente.nome);
            printf("   Idade: %d\n", consultas[i].paciente.idade);
            printf("   Especialidade: %s\n", consultas[i].especialidade);
            printf("   Data: %s\n", consultas[i].data);
            printf("   Hora: %s\n\n", consultas[i].hora);
        }
    }
    printf(" Pressione Enter para continuar...");
    getchar();
}

void listarConsultasPorEspecialidade() {
    system("cls");
    printf("\n-~-~-~-~-Consultas por Especialidade-~-~-~-~-\n\n");

    for (int i = 0; i < NUM_ESPECIALIDADES; i++) {
        printf(" Especialidade: %s\n", especialidades[i]);
        bool encontrou = false;
        for (int j = 0; j < totalConsultas; j++) {
            if (strcmp(consultas[j].especialidade, especialidades[i]) == 0) {
                printf("   Nome: %s\n", consultas[j].paciente.nome);
                printf("   Idade: %d\n", consultas[j].paciente.idade);
                printf("   Data: %s\n", consultas[j].data);
                printf("   Hora: %s\n\n", consultas[j].hora);
                encontrou = true;
            }
        }
        if (!encontrou) {
            printf("    Nenhuma consulta agendada.\n\n");
        }
    }
    printf(" Pressione Enter para continuar...");
    getchar();
    system("cls");
}

void liberarHorarioOcupado(int especialidadeIndice, int horarioIndice) {
    if (horarioIndice >= 0 && horarioIndice < NUM_HORARIOS) {
        horariosPorEspecialidade[especialidadeIndice].horariosDisponiveis[horarioIndice] = true;
    }
}

void cancelarConsultas() {
    system("cls");
    printf("\n-~-~-~-~-Cancelar Consultas-~-~-~-~-\n\n");

    if (totalConsultas == 0) {
        printf(" Nenhuma consulta agendada.\n\n");
        printf(" Pressione Enter para continuar...");
        getchar();
        system("cls");
        return;
    }

    listarConsultas();

    int escolha;
    printf(" Escolha o numero da consulta que deseja cancelar: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha < 1 || escolha > totalConsultas) {
        printf("\n Consulta invalida!\n");
        Sleep(3000);
        return;
    }

    int indice = escolha - 1;
    Consulta consultaAntiga = consultas[indice];

    int especialidadeIndice = -1;
    for (int i = 0; i < NUM_ESPECIALIDADES; i++) {
        if (strcmp(consultas[indice].especialidade, especialidades[i]) == 0) {
            especialidadeIndice = i;
            break;
        }
    }
    for (int i = 0; i < NUM_HORARIOS; i++) {
        if (strcmp(consultas[indice].hora, horarios[i]) == 0) {
            liberarHorarioOcupado(especialidadeIndice, i);
            break;
        }
    }

    for (int i = indice; i < totalConsultas - 1; i++) {
        consultas[i] = consultas[i + 1];
    }
    totalConsultas--;
    printf(" Consulta cancelada com sucesso!\n");
    Sleep(2000);
    system("cls");
}

void reagendarConsulta() {
    system("cls");
    printf("\n-~-~-~-~-Reagendar Consultas-~-~-~-~-\n\n");

    if (totalConsultas == 0) {
        printf(" Nenhuma consulta agendada.\n\n");
        printf(" Pressione Enter para continuar...");
        getchar();
        system("cls");
        return;
    }

    listarConsultas();
    int escolha;
    printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-\n");
    printf(" Escolha o numero da consulta que deseja reagendar: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha < 1 || escolha > totalConsultas) {
        printf(" Consulta invalida!\n");
        Sleep(2000);
        return;
    }

    int indice = escolha - 1;
    Consulta consultaAntiga = consultas[indice];

    int especialidadeIndice = -1;
    for (int i = 0; i < NUM_ESPECIALIDADES; i++) {
        if (strcmp(consultas[indice].especialidade, especialidades[i]) == 0) {
            especialidadeIndice = i;
            break;
        }
    }
    for (int i = 0; i < NUM_HORARIOS; i++) {
        if (strcmp(consultas[indice].hora, horarios[i]) == 0) {
            liberarHorarioOcupado(especialidadeIndice, i);
            break;
        }
    }

    printf("\n Datas disponiveis:\n\n");
    for (int i = 0; i < NUM_DATAS; i++) {
        printf("%d. %s\n", i + 1, datasDisponiveis[i]);
    }
    printf("\n Escolha a data: ");
    scanf("%d", &escolha);
    getchar();
    if (escolha < 1 || escolha > NUM_DATAS) {
        printf("\n Data invalida!\n");
        return;
    }
    strcpy(consultas[indice].data, datasDisponiveis[escolha - 1]);

    especialidadeIndice = -1;
    for (int i = 0; i < NUM_ESPECIALIDADES; i++) {
        if (strcmp(consultas[indice].especialidade, especialidades[i]) == 0) {
            especialidadeIndice = i;
            break;
        }
    }

    printf("\n Horarios disponiveis para %s:\n\n", especialidades[especialidadeIndice]);
    for (int i = 0; i < NUM_HORARIOS; i++) {
        if (horariosPorEspecialidade[especialidadeIndice].horariosDisponiveis[i]) {
            printf(" %d. %s\n", i + 1, horarios[i]);
        }
    }
    printf("\n Escolha o horario: ");
    scanf("%d", &escolha);
    getchar();
    if (escolha < 1 || escolha > NUM_HORARIOS || !horariosPorEspecialidade[especialidadeIndice].horariosDisponiveis[escolha - 1]) {
        printf("\n Horario invalido!\n");
        return;
    }
    strcpy(consultas[indice].hora, horarios[escolha - 1]);
    marcarHorarioOcupado(especialidadeIndice, escolha - 1);
    printf(" Consulta reagendada com sucesso!\n");
    Sleep(2000);
    system("cls");
}

void salvarConsultas() {
    FILE *arquivo = fopen("consultas.txt", "w");

    for (int i = 0; i < totalConsultas; i++) {
        fprintf(arquivo, "%s,%d,%s,%s,%s\n", consultas[i].paciente.nome, consultas[i].paciente.idade,
                consultas[i].especialidade, consultas[i].data, consultas[i].hora);
    }

    fclose(arquivo);
}

void carregarConsultas() {
    FILE *arquivo = fopen("consultas.txt", "r");

    while (fscanf(arquivo, "%[^,],%d,%[^,],%[^,],%[^\n]\n", consultas[totalConsultas].paciente.nome,
                  &consultas[totalConsultas].paciente.idade, consultas[totalConsultas].especialidade,
                  consultas[totalConsultas].data, consultas[totalConsultas].hora) != EOF) {
        totalConsultas++;
    }

    fclose(arquivo);
}*/