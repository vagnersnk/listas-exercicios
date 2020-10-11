LISTA DE EXERCÍCIOS – COMANDOS CONDICIONAIS<br>

1. Faça um programa que leia dois valores inteiros A e B. Se os valores forem iguais, deverá se somar os dois, caso contrário,
multiplique A por B. Ao final do cálculo escrever o resultado.<br><br>
2. Construa um programa que entre com um número e informar se ele é divisível por 10, por 5, por2 ou se não é divisível por
nenhum destes.<br><br>
3. A prefeitura abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar
30% do salário bruto. Faça um programa em C que permita entrar com o salário bruto e o valor da prestação e informar se o
empréstimo pode ou não ser concedido.<br><br>
4. O peso ideal para uma pessoa é calculado pelas seguintes fórmulas:<br>
Sexo Masculino: (72.7*altura)-58<br>
Sexo Feminino: (62.1*altura)-44.7<br>
Escreva um programa que receba como entrada: sexo (f ou m), altura e peso; calcule o peso ideal usando a fórmula que for
pertinente. Como resultado o programa deve exibir na tela: a diferença entre eles e uma mensagem de alerta:
“*** Peso normal ou abaixo do ideal ***” ou “*** Peso acima do Ideal ***”.<br><br>
5. Construa um programa que calcule e apresente quanto deve ser pago por um produto considerando a leitura do preço da
etiqueta (PE) e o código de pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:<br>

Código de pagamento Condição de pagamento<br>
1 À vista em dinheiro ou cheque, com 10% de desconto<br>
2 À vista com cartão de crédito, com 5% de desconto<br>
3 Em 2 vezes, preço normal de etiqueta sem juros<br>
4 Em 3 vezes, preço de etiqueta com acréscimo de 10%<br><br>

6. Dado o programa abaixo, responda:<br>
a) Se A= verdade, B= verdade, C= falsidade, quais comandos serão executados?<br>
b) Se A= falsidade, B= verdade, C= falsidade, quais comandos serão executados?<br>
c) Se A= falsidade, B= verdade, C= verdade, quais comandos serão executados?<br>
d) Quais os valores de A, B e C para que somente os comandos 5 e 6 sejam executados?<br>
d) Quais os valores de A, B e C para que somente o comando 6 seja executado?<br>

```
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
int main(){
int A, B, C;
if(A){<br>
printf(&quot;Comando 1!&quot;);
} else if(B){
if(C){
printf(&quot;Comando 2!&quot;);
}else{
printf(&quot;Comando 3!&quot;);
printf(&quot;Comando 4!&quot;);
}
printf(&quot;Comando 5!&quot;);
}
printf(&quot;Comando 6!&quot;);
system(&quot;PAUSE&quot;);
return 0;

}
```
<br>
7. Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente. Utilize para tal uma seleção
encadeada.<br><br>
8. Criar um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá
informar o prato, a sobremesa e a bebida, conforme tabela abaixo:<br>

| PRATO |  SOBREMESA | BEBIDA |
| ------------- |:-------------:| -----:|
|Vegetariano 180cal | Abacaxi 75cal | Chá 20cal |
|Peixe 230cal |Sorvete diet 110cal| Suco de laranja 70cal|
|Frango 250cal| Mousse diet 170cal| Refrigerante diet 65cal|
|Carne 350cal| Bolo de chocolate 200cal| Suco de melão 100cal|

8. A polícia rodoviária resolveu fazer cumprir a lei e cobrar dos motoristas o DUT. Sabe-se que o mês em que o emplacamento do
carro deve ser renovado é determinado pelo último número da placa do mesmo. Criar um programa que, a partir da leitura do
número da placa do carro, informe o mês em que o emplacamento deve ser renovado.<br>
9. Entrar com o valor de x e imprimir y:
1, se x&lt;=1<br>
Y= 2, se 1&lt;x&lt;=2<br>
x 2 , se 2&lt;x&lt;=3<br>
x 3 , se x&gt;3<br>

10. Ler um número inteiro de 4 casas e imprimir se é ou não múltiplo de quatro o número formado pelos algarismos que estão nas
casas das unidades de milhar e das centenas.<br><br>