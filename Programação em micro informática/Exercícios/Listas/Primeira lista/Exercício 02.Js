function modulo(num){
    var modulo;
    
    if(num >= 0){
        modulo = num;
        console.log("O módulo de", num,"é: ", modulo);
    }
    else{
        modulo = num * (-1);
        console.log("O módulo de", num,"é: ", modulo);
    }
}

modulo (-3);
