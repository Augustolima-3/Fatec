function valores (n1,n2,n3){
    var maiores;

    if( n1 > n2 & n3 > n2){
        maiores = n1 + n3;
    }
    else if (n2 > n3 & n1 > n3){
        maiores = n2 + n1;
    }
    else{
         maiores = n3 + n2;
     }
    

    console.log("A soma dos dois maiores valores eh: ", maiores);
}

valores(8,5,9);
valores(7,26,9);
valores(8,26,7);
