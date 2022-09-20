function emprestimo(renda,emprestimo,prestacoes){

const limiteMaximo = renda * 10, parcelaMaxima = renda * 0.30, parcelas = emprestimo/prestacoes;
//Novamente fiz a mesma lógica do ex 9
    if (emprestimo<=limiteMaximo & parcelas<=parcelaMaxima){
        console.log("Você têm um imprestimo aprovado");
        console.log("Valor solicitado: R$",emprestimo,"- Valor maximo aprovado: R$",limiteMaximo);
        console.log(prestacoes,"parcelas de R$",parcelas);

    } else {
        
        if (emprestimo>limiteMaximo & parcelas>parcelaMaxima){
            console.log("Emprestimo recusado: O valor solicitado é maior que 10X a renda mensal e o valor da parcela é maior que 30% da renda mensal");
            console.log("Valor máximo aprovado: R$",limiteMaximo);
            console.log("Valor máximo de parcela: R$",parcelaMaxima);
            console.log("Valor solicitado: R$",emprestimo);
            console.log("Valor da parcela: R$",parcelas);
        } else if (emprestimo>limiteMaximo){
            console.log("Emprestimo recusado: O valor da parcela não ultrapassa 30% da renda mensal, porém o valor solicitado é maior que 10x a renda mensal");
            console.log("Valor máximo aprovado: R$",limiteMaximo);
            console.log("Valor máximo de parcela: R$",parcelaMaxima);
            console.log("Valor solicitado: R$",emprestimo);
            console.log("Valor da parcela: R$",parcelas);
        } else {
            console.log("Emprestimo recusado: O valor solicitado não ultrapassa o limite maximo, porém o valor da parcela é maior que 30% da renda mensal");
            console.log("Valor máximo aprovado: R$",limiteMaximo);
            console.log("Valor máximo de parcela: R$",parcelaMaxima);
            console.log("Valor solicitado: R$",emprestimo);
            console.log("Valor da parcela: R$",parcelas);
        }
    }
}
emprestimo(2000,21000,36);
