function mostrarMensagem(){
    alert("Teste");
}

function trocarTexto() {
    document.getElementById("tituloPrincipal").innerHTML = "Olá!";
}

function trocarCor() {
    document.getElementById("tituloPrincipal").style.color = "yellow";
}

function aplicarCSS() {
    document.getElementById("tituloPrincipal").classList.add("titulo");
}

function ocultar() {
    document.getElementById("tituloPrincipal").style.display = "none";
    console.log("Ocultando o título");
}

function exibir() {
    document.getElementById("tituloPrincipal").style.display = "block";
    console.log("Exibindo o título");
}
