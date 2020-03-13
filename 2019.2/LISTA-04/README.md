# Funções e Escopos das variáveis <br>
1 - Implemente uma função que recebe por
parâmetro o raio de uma esfera e retorne o seu
volume (volume = 4/3*Pi *Raio*Raio*Raio)<br>

2 - Implemente uma função que recebe por
parâmetro o tempo de duração de uma maratona
expressa em horas, minutos e segundos e retorna
esse tempo apenas em segundos. Ex: 1 hora, 2
minutos e 32 segundos equivale a 3752
segundos.<br>



3 - Faça um programa para receber um número
inteiro do usuário. Em seguida verifique se ele é:<br>
– par
– divisível por três
– divisível por cinco<br>
Obs: Crie uma função separada para cada item
acima.
Cada função deve receber o número a ser
verificado como argumento e devolver ‘1’ para
verdadeiro e ‘0’ para falso.<br>


4 - Implemente uma função que recebe a média final de
um aluno por parâmetro e retorna o caractere
equivalente ao seu conceito, conforme abaixo:<br>
– 0,0 a 4,9 = Conceito 'D'
– 5,0 a 6,9 = Conceito 'C'
– 7,0 a 8,9 = Conceito 'B'
– 9,0 a 10,0 = Conceito 'A'<br>

5 - Implemente uma função que recebe como parâmetro
50 valores inteiros armazenados em um vetor
unidimensional e retorna o maior valor dentre eles.<br>



6 - Implemente a função “int eqvalue(int v[], int
n)”, que recebe um inteiro “n” e retorna o
número de vezes que “n” aparece no vetor “v”
de 10 posições.<br>



7 - Implemente uma função para retornar cada um dos
requisitos a seguir. Todas elas devem receber como
entrada um vetor de 20 elementos do tipo “struct
Produto”, com as informações já preenchidas (não
devem ser lidas):<br>
– Imprimir o título do produto mais caro.<br>
– Imprimir o título dos 10 produtos mais vendidos.<br>
– Retornar a quantidade de vendas do produto mais barato.<br>

struct Produto{
char titulo[40];
int quantidade_vendida;
float preço};<br>



8 - Ainda em relação ao exercício anterior,
implemente funções para cada uma das
pesquisas abaixo:<br>
– Dado um título, imprima suas informações (o título
também é um parâmetro da função);<br>
– Dado um preço “P”, imprima o título dos produtos
cujo preço é maior que “P” (o preço também é um
parâmetro da função);.<br>
– Retorne a média das quantidades vendidas por todos
os produtos.<br>



9 - Construa um programa que leia o resultado da loteria
esportiva com 13 jogos. O resultado em cada jogo pode
ser time 1, empate, ou time 2. Em seguida, leia o nome
e palpite de 30 apostadores na loteria. Ao final,
informe:<br>
● o nome e número de acertos de cada apostador.<br>
● O(s) nome(s) do(s) apostador(s) com maior quantidade
de acertos<br>
● a quantidade média de acertos<br>
● O programa deverá ter no mínimo 4 funções: ler dados,
e outras 3 equivalentes a cada requisito descrito acima.<br>

10 - Implemente uma função que determine se um
número é ímpar (retorno 1) ou par (retorno
2). Para isso, não use o operador de resto, mas
sim subtrações sucessivas.<br>