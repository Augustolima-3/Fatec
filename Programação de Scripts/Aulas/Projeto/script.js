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
                    '<td>'+
                        '<a href="#" class= "btn btn-warning" rel="'+ i +'">'+
                            '<img src="editar.png" width="20" rel="'+ i +'"/>'+
                        '</a>'+
                    '</td>'+
                    '<td>' +
                        '<a href="#" class= "btn btn-danger" rel="'+ i +'">'+
                            '<img src="excluir.png" width="20" rel="'+ i +'"/>'+
                        '</a>'+
                    '</td>'+
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
listaAluguel = [];
$(document).ready(() => {
    $('#tabela').html(montarTabela(listaAluguel));

	$('#btnSalvar').click(() => {
		let codigo = $('#codigo').val();
		let nome = $('#nome').val();
		let quantidadeDias = $('#quantidadeDias').val(); 
		let valorDiaria = $('#valorDiaria').val();
		let nomeLocador = $('#nomeLocador').val();

		if (validar(codigo) && nome != '' && validar(quantidadeDias) && validar(valorDiaria)) {
			codigo = parseInt(codigo);
			quantidadeDias = parseFloat(quantidadeDias);
			valorDiaria = parseFloat(valorDiaria);
			let novoAluguel = new Aluguel (codigo, nome, quantidadeDias, valorDiaria, nomeLocador);
			if(auxPosicao == ''){
				listaAluguel.push(novoAluguel);
			}else{
				listaAluguel [auxPosicao] = novoAluguel;
				auxPosicao = '';
			}
			document.getElementById('tabela').innerHTML = montarTabela(listaAluguel);
			$('#tabela').html (montarTabela(listaAluguel));
			$('input').val('');
		}else {
			alert('Informe os dados corretamente');
		}
	});
	$('#tabela').on('click', '.btn-warning', (evento) => {
		auxPosicao = evento.target.getAttibute('rel');
		$('#codigo').val(listaAluguel[auxPosicao].codigo);
		$('#nome').val(listaAluguel[auxPosicao].nome);
		$('#quantidadeDias').val(listaAluguel[auxPosicao].quantidadeDias);
		$('#valorDiaria').val(listaAluguel[auxPosicao].valorDiaria);
		$('#nomeLocador').val(listaAluguel[auxPosicao].nomeLocador);
	});

	$('#tabela').on('click', 'btn-danger', (evento) => {
		if (confirm('Tem certeza que deseja excluir?')){
			listaAluguel.splice(evento.target.getAttibute('rel'), 1);
			$('#tabela').html(montarTabela(listaAluguel));
		}
	});

	$('#btnJson').click(() => {
		let produtosJson = JSON.stringify(listaAluguel);
		alert(produtosJson);
	});

	$('#btnAjax').click(() => {
		$.ajax ({
			url: 'http://date.jsontest.com/',
			method: 'GET',
			dataType: 'json'
		}).done(function(dados){
			$('#data').html(dados.date);
		});
	});

	$('#btnCancelar').click(() => {
		$('input').val('');
		auxPosicao = '';
	});

	$('#valorDiaria').keypress((evento) => {
		if(evento.which == 13){
			$('#btnSalvar').trigger('click');
		}
	});

	$('table').DataTable();
});
