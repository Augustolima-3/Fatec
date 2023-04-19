
		function validarNumero(numero){
			if(!isNaN (numero) && numero !=''){
				return true;
			}else{
				return false;
			}
		}
			window.onload = function() {
				document.getElementById('btnCalcular').onclick = function(){
					let total = document.getElementById('total').value;
					let parcelas = document.getElementById('parcelas').value;
					let juros = document.getElementById('juros').value;
					
					if (validarNumero(total) && validarNumero (parcelas) && validarNumero(juros)){
						total = parseFloat(total);
						parcelas = parseFloat(parcelas);
						juros = parseFloat(juros);
						
						let valorParcela = total / parcelas;
						let valorJuros = valorParcela * (juros / 100);
						valorParcela = valorParcela + valorJuros;
						
						document.getElementById('valorParcela').innerHTML = '<b>Valor Parcela: ' + valorParcela +'</b>';
					}else{
						alert('Informe os valores corretamente!');
					}
				}
			}
		
