function maiorNumero (n1, n2, n3){              
    var maior;

   if(n1 > n2 & n1 > n3){
        maior = n1;
   }
   else {
    if(n2>n3){
        maior = n2;
    }
    else{
        maior = n3;
    }
   }
   
   console.log("seu maior eh: ", maior);
}
maiorNumero (22,133,24);
