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
	if (!isNaN(valor) && valor != '' && valor > 0){
		return true;
	}else{
		return false;
	}
}
listaProdutos = [];
//window.onload = function(){
$(document).ready(() => {
	$('#tabela').html(montarTabela(listaProdutos));

    

	//document.getElementById('tabela').innerHTML = montarTabela(listaProdutos);
	
	//document.getElementById('btnSalvar').onclick = function (){
	$('#btnSalvar').click(() => {
		//let codigo = document.getElementById('codigo').value;
		let codigo = $('#codigo').val();
		//let descricao = document.getElementById('descricao').value;
		let descricao = $('#descricao').val();
		//let quantidade = document.getElementById('quantidade').value;
		let quantidade = $('#quantidade').val();
		//let valor = document.getElementById('valor').value; 
		let valor = $('#valor').val();
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
	});
});
