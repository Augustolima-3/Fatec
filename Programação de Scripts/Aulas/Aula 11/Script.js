
class Produto{
	constructor(codigo, descricao, quantidade, valor){
		//propriedade - variavel
		this.codigo = codigo;
		this.descricao = descricao;
		this.quantidade = quantidade;
		this.valor = valor;
		
	}
}

function montarTabela(lista){
	let auxHtml = '';
	for (let i = 0; i < lista.length; i++){
		auxHtml +=  '<tr>'+
					'<td>'+ lista[i].codigo+ '</td>'+
					'<td>'+ lista[i].descricao+ '</td>'+
					'<td>'+ lista[i].quantidade+ '</td>'+
					'<td>R$'+ lista[i].valor.toFixed(2).replace('.',',')+ '</td>'+
					'</tr>';
	}
	return auxHtml;
}

function validar(valor){
	if (!isNaN(valor) && valor != ''){
		return true;
	}else{
		return false;
	}
}

listaProdutos = [];
let produto1 = new Produto(1, 'Arroz', 10, 17.99);
let produto2 = new Produto(2, 'Feijão', 10, 8.30);
let produto3 = new Produto(3, 'Açucar', 20, 15.90);
listaProdutos.push(produto1);
listaProdutos.push(produto2);
listaProdutos.push(produto3);

window.onload = function(){
	document.getElementById('tabela').innerHTML = montarTabela(listaProdutos);
	
	document.getElementById('btnSalvar').onclick = function (){
		let codigo = document.getElementById('codigo').value;
		let descricao = document.getElementById('descricao').value;
		let quantidade = document.getElementById('quantidade').value;
		let valor = document.getElementById('valor').value; 
		if (validar(codigo) && descricao != '' && validar(quantidade) && validar(valor)) {
			codigo = parseInt(codigo);
			quantidade = parseFloat(quantidade);
			valor = parseFloat(valor);
			let novoProduto = new Produto (codigo, descricao, quantidade, valor);
			listaProdutos.push(novoProduto);
			document.getElementById('tabela').innerHTML = montarTabela(listaProdutos);
		}else {
			alert('Informe os dados corretamente');
		}
	}
}
