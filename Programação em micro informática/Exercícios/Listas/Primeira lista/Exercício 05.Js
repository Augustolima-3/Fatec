function dias(m){
    if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        console.log("O mês tem 31 dias");
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        console.log("O mês tem 30 dias");
    }
    else if (m == 2){
        console.log("O mês tem 28 dias");
    }
    else{
        console.log(("Favor digitar um mês válido"));
    }
}

dias(2);
