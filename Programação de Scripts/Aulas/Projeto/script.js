class Aluguel{
	constructor(codigo, nome, quantidadeDias, valorDiaria, nomeLocador){
		//propriedade - variavel
		this.codigo = codigo;
		this.nome = nome;
		this.quantidadeDias = quantidadeDias;
		this.valorDiaria = valorDiaria;
        this.nomeLocador = nomeLocador;
		
	}
}

function montarTabela(lista){
	let auxHtml = '';
	for (let i = 0; i < lista.length; i++){
		auxHtml +=  '<tr>'+
					'<td>'+ lista[i].codigo+ '</td>'+
					'<td>'+ lista[i].nome+ '</td>'+
					'<td>'+ lista[i].quantidadeDias+ '</td>'+
					'<td>R$'+ lista[i].valorDiaria.toFixed(2).replace('.',',')+ '</td>'+
                    '<td>'+ lista[i].nomeLocador+ '</td>'+
					'</tr>';
	}
	return auxHtml;
}

function validar(valor){
	if (!isNaN(valor) && valor != '' && valor > 0){
		return true;
	}else{
		return false;
	}
}

window.onload = function(){

    listaAluguel = [];

	document.getElementById('tabela').innerHTML = montarTabela(listaAluguel);
	
	document.getElementById('btnSalvar').onclick = function (){
		let codigo = document.getElementById('codigo').value;
		let nome = document.getElementById('nome').value;
		let quantidadeDias = document.getElementById('quantidadeDias').value;
		let valorDiaria = document.getElementById('valorDiaria').value; 
        let nomeLocador = document.getElementById('nomeLocador').value;

		if (validar(codigo) && nome != '' && validar(quantidadeDias) && validar(valorDiaria)) {
			codigo = parseInt(codigo);
			quantidadeDias = parseFloat(quantidadeDias);
			valorDiaria = parseFloat(valorDiaria);
			let novoAluguel = new Aluguel (codigo, nome, quantidadeDias, valorDiaria, nomeLocador);
			listaAluguel.push(novoAluguel);
			document.getElementById('tabela').innerHTML = montarTabela(listaAluguel);
		}else {
			alert('Informe os dados corretamente');
		}
	}
}
