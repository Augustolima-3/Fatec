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
                    '<td>'+
                        '<a href="#" class= "btn btn-warning" rel="'+ i +'">'+
                            '<img src="editar.png" width="20" rel="'+ i +'"/>'+
                        '</a>'+
                    '</td>'+
					'<td>' +
						'<a href="#" class= "btn btn-danger" rel="'+ i +'">'+
							'<img src="excluir.png" width="20" rel="'+ i +'"/>'+
						'</a>'+
					'</td'+
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
auxPosicao = '';
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
			if(auxPosicao == ''){
				listaProdutos.push(novoProduto);
			}else{
				listaProdutos [auxPosicao] = novoProduto;
				auxPosicao = '';
			}
			document.getElementById('tabela').innerHTML = montarTabela(listaProdutos);
            $('#tabela').html (montarTabela(listaProdutos));
            $('input').val('');
		}else {
			alert('Informe os dados corretamente');
		}
	});
    $('#tabela').on('click', '.btn-warning', (evento) => {
        auxPosicao = evento.target.getAttribute('rel');
        $('#codigo').val(listaProdutos[auxPosicao].codigo);
        $('#descricao').val(listaProdutos[auxPosicao].descricao);
        $('#quantidade').val(listaProdutos[auxPosicao].quantidade);
        $('#valor').val(listaProdutos[auxPosicao].valor);
    });

	$('#tabela').on('click', '.btn-danger', (evento) => {
        if (confirm('Tem certeza que deseja excluir?')){
			listaProdutos.splice(evento.target.getAttribute('rel'), 1);
			$('#tabela').html(montarTabela(listaProdutos));
		}
	});

	$('#btnJson').click(() =>{
		let produtosJson = JSON.stringify(listaProdutos);
		alert(produtosJson);
	});
	
	$('#btnAjax').click(() => {
		$.ajax ({
			url: 'http://date.jsontest.com',
			method: 'GET',
			dataType: 'json'			
		}).done(function(dados){
			$('#data').html (dados);
		});
	})
});
