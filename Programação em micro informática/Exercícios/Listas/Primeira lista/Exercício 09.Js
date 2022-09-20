function combustivel (tipo, quantidade){
    const descontoAlMaior = 0.04, descontoAlMenor = 0.02, descontoGasMenor = 0.03, descontoGasMaior = 0.05, precoAlcool = 1.90, precoGas = 2.70;
//Aqui eu atribui os valores como constantes
    var tipoCombustivel = ["Alcool", "Gasolina"], valorFinal, descontoLitro, descontoTotal;
    if(tipo == tipoCombustivel[0]){
        if(quantidade <= 25){
            descontoLitro = precoAlcool * descontoAlMenor;
            descontoTotal = descontoLitro * quantidade;
            valorFinal = (precoAlcool * quantidade) - descontoTotal;
        }
        else{
            descontoLitro = precoAlcool * descontoAlMaior;
            descontoTotal = descontoLitro * quantidade;
            valorFinal = (precoAlcool * quantidade) - descontoTotal;
        }
    }
    else {
        if(quantidade <= 25){
            descontoLitro = precoGas * descontoGasMenor;
            descontoTotal = descontoLitro * quantidade;
            valorFinal = (precoGas * quantidade) - descontoTotal;
        }
        else{
            descontoLitro = precoGas * descontoGasMaior;
            descontoTotal = descontoLitro * quantidade;
            valorFinal = (precoAlcool * quantidade) - descontoTotal;
    }
}
    console.log("Tipo de combustível:", tipo);
    console.log("Quantidade em litros:", quantidade);
    console.log("Desconto por litro:", descontoLitro);
    console.log("Desconto total:", descontoTotal);
    console.log("Valor final:", valorFinal);
}
combustivel(20,"Gasolina");
combustivel(30,"Gasolina");
