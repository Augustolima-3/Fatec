function mediaPonderada (n1,n2,n3){
    var n1, n2, n3;
    var p1,p2,p3;
    var media;

    if(n1 > n2 & n3){
        p1 = 5, p2 = 2.5, p3 = 2.5;
        media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1+p2+p3);
    }
    else {
        if (n2 > n1 & n3){
        p1 = 2.5, p2 = 5, p3 = 2.5;
        media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1+p2+p3);
    }
    else {
        p1 = 2.5, p2 = 2.5, p3 = 5;
        media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1+p2+p3);
    }
    }
    console.log("A media ponderada é:", media);
    
 }

 mediaPonderada (10,7,5);
 mediaPonderada (7,10,5);
 mediaPonderada (5,7,10);
 
