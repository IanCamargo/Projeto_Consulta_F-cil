# Projeto Consulta Facil

## &#128681; Informações sobre o Projeto

**Faculdade de Tecnologia de Mogi Mirim**

**Curso:** Análise e Desenvolvimento de Sistemas (Noturno)

**Matérias:**

 - 🧑🏻‍💻Linguagem de Programação
 - 🖥️Engenharia de Software I

**Professores:**

 - 👨🏻‍🏫Marcos Roberto Moraes (Maromo)
 - 👩🏻‍🏫Ana Celia Ribeiro Bizigato Portes

**Autor:**

 - 👨‍💻 Ian Ribeiro Camargo

# &#128214; Índice 

* [Visão do Produto](#Visão-do-Produto)
* [Tecnologias Utilizadas](#Tecnologias-Utilizadas)
* [Problemas e Soluções](#Problemas-e-Soluções)
* [Product Backlog](#Product-Backlog)
* [Diagrama de Casos de Uso](#Diagrama-de-Casos-de-Uso)
* [Fluxo de Eventos](#Fluxo-de-Eventos)
     * [Fluxo Básico](#Fluxo-Básico)
     * [Fluxo Alternativo](#Fluxo-Alternativo)
* [Diagrama de Atividades](#Diagrama-de-Atividades)
* [Guia do Usuário](#Guia-do-Usuário)
* [Conclusão](#conclusão)
* [Agradecimentos](#agradecimentos)

# &#128161; Visão do Produto
Para profissionais de saúde que têm necessidade de agendar consultas de maneira rápida e eficiente, o Consulta Fácil é um sistema de agendamento de consultas que oferece uma interface intuitiva e integração com diversas clínicas e hospitais. Diferentemente de outros sistemas de agendamento, o Consulta Fácil tem um processo de agendamento simplificado e disponibilidade 24/7.			

# Tecnologias Utilizadas

 - Linguagem C
 - CLion

#  Problemas e Soluções

## Problema: Interface de Usuário Intuitiva
**Solução:** Desenvolvemos uma interface de linha de comando com opções claras e compreensíveis para cada tipo de transação. Mensagens de feedback são utilizadas para orientar os usuários durante todo o processo, garantindo uma experiência positiva e sem complicações.

## Problema: Desenvolver Com Uma Linha de Pensamento
**Solução:** Buscando conhecimento e ideais com meus colegas ou até mesmo na internet. Para conseguir resolver problemas simples mas que muitas vezes travamos nos mesmos.

# Product Backlog
![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/84c05449-b604-445f-a637-3572349edb88)

# Diagrama de Casos de Uso
![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/3ed78713-f0c3-4c8a-8b2d-926e8cb8245a)

# Fluxo de Eventos

## Fluxo Básico

1-	O sistema abre o menu de opções. <br />
2-	O sistema apresenta a opção 1: “Fazer Login” e opção 2: “Esqueci Minha Senha”. <br />
3-	Secretária seleciona a opção 2. <br />
4-	Sistema solicita o usuário. <br />
5-	Secretária informa o usuário. <br />
6-	Sistema mostra a senha. <br />
7-	Sistema retorna ao menu de opções. <br />
8-	Secretária seleciona a opção 1. <br />
9-	 O sistema solicita login e senha. <br />
10-	 A secretária informa login e senha. <br />
11-	 O sistema efetua o login. <br />
12-	 O sistema abre o menu de opções. <br />
13-	 A secretária seleciona a opção Agendar Consulta. <br />
14-	 O sistema solicita Informações do Paciente e da Consulta. <br />
15-	 A secretária informa Informações do Paciente e da Consulta. <br />
16-	 O sistema retorna Consulta Cadastrada com Sucesso. <br />
17-	 O sistema volta para o menu principal. <br />
18-	 A secretária seleciona a opção Listar todas as Consultas. <br />
19-	 O sistema apresenta todas as consultas marcadas. <br />
20-	 A secretária confirma para retornar ao menu. <br />
21-	 O sistema volta para o menu principal. <br />
22-	 A secretária seleciona a opção Listar consultas por especialidade. <br />
23-	 O sistema retorna o todas as consultas das especialidades. <br />
24-	 A secretária confirma para retornar ao menu. <br />
25-	 O sistema volta para o menu principal. <br />
26-	 A secretária seleciona a opção Reagendar Consulta. <br />
27-	 O sistema retorna todas as consultas. <br />
28-	 A secretária confirma para continuar o programa. <br />
29-	 A secretaria seleciona a consulta. <br />
30-	 O sistema solicita a data e horário. <br />
31-	 A secretaria informa a data e horário. <br />
32-	 O sistema retorna que a Consulta foi reagendada com sucesso. <br />
33-	 O sistema volta para o menu principal. <br />
34-	 A secretária seleciona a opção Cancelar Consulta. <br />
35-	 O sistema retorna todas as consultas. <br />
36-	 A secretária confirma para continuar o programa. <br />
37-	 A secretaria seleciona a consulta. <br />
38-	 O sistema retorna que a Consulta foi excluída com sucesso. <br />
39-	 O sistema volta para o menu principal. <br />
40-	 A secretaria seleciona Salvar e Sair. <br />
41-	 O sistema apresenta que está fechando. <br />
42-	 O sistema fecha. <br />

## Fluxo Alternativo

5.	A secretária informa o usuário incorreto e o sistema retorna mensagem de erro. <br />
10.  A secretária informa o login incorreto e o sistema retorna mensagem de erro. <br />
15.  A secretária informa alguma informação errada o sistema retorna mensagem de erro. <br />
20.  A secretária não confirma com a tecla Enter o sistema não retorna para o menu principal. <br />
24.  A secretária não confirma com a tecla Enter o sistema não retorna para o menu principal. <br />
29.  A secretária informa alguma informação errada o sistema retorna mensagem de erro. <br />
31.  A secretária informa alguma informação errada o sistema retorna mensagem de erro. <br />
37.  A secretária informa alguma informação errada o sistema retorna mensagem de erro. <br />

# Diagrama de Atividades

![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/5c0945ab-21f4-4c2f-a8f4-c1525adab342)

# Guia do Usuário

1. Bem Vindo:

   Aguarde para ser direcionado ao Menu de Login.
   
   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/af36c68e-6dbb-4d60-bcdb-f3ae90c8c593)

2. Menu de Login:

   Selecione a opção 1 no Menu de Login, "Fazer Login".

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/cb8c565e-d4b8-4777-ae45-4cc4ed9fa0de)

3. Fazendo Login:

   Preencha com o seguinte acesso:

   Usuário: consulta
   Senha: 123

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/a07dc2b3-af57-4104-a52d-4eb3dff4440d)

4. Erro no Login:

   Informe o Usuário e Senha corretamente para evitar erros.

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/9fcf2381-709f-4422-a0aa-05868a59fb68)


5. Agendar Consulta:

   Selecione a opção 1 no Menu Principal, "Agendar Consulta".
   Informe as informações corretamente.

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/0d46d7f2-e697-43b2-99d4-b48d74341e7e)
   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/643e58e3-0969-4bfd-8679-b149e1d78a29)

7. Erro no Nome:

   Informe o nome corretamente sem números ou caracteres especiais para evitar erros.

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/65fed879-0311-46fb-8a82-36f7abb47e5f)

8. Erro na Idade:

   Informe uma idade válida somente número e entre 0 a 100 para evitar erros.

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/e18f7fe8-a539-41ed-9d01-70857ead87a6)

9. Erro Opção Especialidade:

   Informe uma opção de especialidade válido para evitar erros.

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/8bf636f5-73ab-473a-a51a-5c02e744c4d0)

10. Erro Opção Data:

   Informe uma opção de data válido para evitar erros.

   ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/7edfc1db-d172-4a49-97f8-cced850c71a1)

11. Erro Opção Horário:

    Informe uma opção de horário válido para evitar erros.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/d9788cc6-8312-4385-8e94-0da8b6fc7996)

12. Listar Todas as Consultas:

    Selecione a opção 2 no Menu Principal, "Listar Todas as Consultas".

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/327d9179-e9da-4de8-b00c-bd1580ac3c4f)
    
    Uma aba será aberta mostrando todas as consultas agendadas.
    
    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/256523b5-8228-40fb-8d9b-5b63eabe97e8)

14. Listar Consultas por Especialidade:

    Selecione a opção 3 no Menu Principal, "Listar Consultas por Especialidade".
    
    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/46a2cec5-9bca-4159-8468-b48f9eeaed61)

    Uma aba será aberta mostrando todas as consultas agendadas separadas por especialidades.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/606fe675-db4e-4660-b09a-a547a6691b00)

15. Reagendar Consulta

    Selecione a opção 4 no Menu Principal, "Reagendar Consulta".
    
    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/786fec98-79d2-4fe2-93ef-e89f705abe65)

    Uma aba será aberta mostrando todas as consultas agendadas e escolha qual consulta você quer reagendar.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/a985c7e2-46d7-4743-8889-5c1fe8f8de28)

    Informe as informações corretamente.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/6d88f92f-b2c2-456a-8078-ee8a05e2d808)

16. Erro Opção Data:

    Informe uma opção de data válido para evitar erros.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/7edfc1db-d172-4a49-97f8-cced850c71a1)

17. Erro Opção Horário:

    Informe uma opção de horário válido para evitar erros.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/d9788cc6-8312-4385-8e94-0da8b6fc7996)

18. Cancelar Consulta:

    Selecione a opção 5 no Menu Principal, "Cancelar COnsulta".

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/3ad9afe2-45a7-489f-8c0c-08e6bb43cc49)

    Uma aba será aberta mostrando todas as consultas agendadas.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/2a38b0d4-0247-478f-8047-eef7264454bb)

    Escolha a consulta que deseja cancelar.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/34ce49ba-366c-48bd-b1a2-44300db1359c)

19. Erro Opção Consulta:

    Informe uma opção de consulta válida para evitar erros.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/a472173a-3047-4e67-9755-d3df07afbbc8)

20. Salvar e Sair:

    Selecione a opção 0, "Salvar e Sair".
    
    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/2ebf0e9a-c256-4020-ada9-07442390c59b)

    O programa Salva Todas as informações e Fecha.

    ![image](https://github.com/IanCamargo/Projeto_Consulta_Facil/assets/144857524/22c6893a-109f-45ba-b88f-b1f1f31e4b2b)

# Conclusão

O projeto de Agendamento de Consulta, ainda não esta finalizado mas, alcançou seus objetivos, fornecendo uma ferramenta prática e educativa para entender as funcionalidades básicas de um sistema de agendamento de consultas de um hospital. As operações simuladas incluem agendar consultas, listar consultas tanto todas sem separação como separadas por especialidades, reagendar consultas e cancelar consulta assim, proporcionando uma experiência interativa e realista.

Ressaltamos que o projeto tem caráter didático e não substitui um sistema de Agendamento de Consulta real. Nada realizado no sistema afeta o mundo real é somente uma simulação.

# Agradecimentos
Obrigado por visitar meu repositório! Esperamos que você ache nosso projeto útil e interessante.
