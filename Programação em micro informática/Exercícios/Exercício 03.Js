var trabalhadas = 170, vHora = 10, salario = 0;

if (trabalhadas > 160){
    let extras = trabalhadas - 160;
    let salarioextra = vHora * 1.5 * extras;
    salario = salarioextra +(160 * vHora);
    console.log("Horas extras: ", salarioextra);
    console.log("Salário normal: ", (160*vHora));
    
} 
else{
    salario = trabalhadas * vHora;
}
console.log("Salário total: ", salario);

//novo salário de um funcionário
