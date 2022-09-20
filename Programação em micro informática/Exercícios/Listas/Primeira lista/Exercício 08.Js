/*Escreva um programa que calcula o desconto previdenciário de um funcionário.
Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo.
O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, 
o valor máximo de desconto é 334,29, o que for menor.
*/

function salario (sal){

var desconto = 0.11;
var valorMaximo = 334.29;
var descontoPorcentagem;
var liquido;

descontoPorcentagem = sal * desconto;
//Aqui eu acho o valor que será descontado de 11%

if(descontoPorcentagem >= valorMaximo){
    liquido = sal - valorMaximo;
//Aqui pego os 11% para ver se é superior a 334
    console.log("O salario descontado é: ", liquido );
}
else{
    liquido = sal - descontoPorcentagem;
//Aqui, caso não for superior, eu desconto os 11%
    console.log("O salario liquido é: ", liquido);
}
    console.log("O salario bruto é: ", sal);
}
salario (4000);
