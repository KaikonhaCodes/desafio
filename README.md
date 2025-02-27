# Descrição

Este programa em C simula um jogo no estilo "Super Trunfo" utilizando cidades como cartas. O jogador insere os dados de duas cidades e, em seguida, escolhe um atributo para comparar. A cidade com o melhor valor para o atributo escolhido vence a rodada.

Como Funciona

O programa solicita ao jogador que insira os dados de duas cidades, incluindo:

Estado

Código da carta

Nome da cidade

População

Área em km²

PIB

Número de pontos turísticos

O programa calcula:

Densidade populacional (População / Área)

PIB per capita (PIB / População)

Super poder da cidade (uma soma ponderada de todos os atributos)

O jogador escolhe um atributo para comparar entre as duas cidades:

População

Área

PIB

Número de pontos turísticos

Densidade demográfica

O programa compara o atributo e exibe qual cidade venceu.

Como Executar

Compile o programa com um compilador C, como o GCC:

gcc super_trunfo.c -o super_trunfo

Execute o programa:

./super_trunfo

Siga as instruções do terminal para inserir os dados e escolher o atributo para comparação.


Autor KaikonhaCodes.

Desenvolvido como um exercício de programação em C para aprendizado de estruturas de controle e manipulação de dados.

