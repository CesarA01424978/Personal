/*Si clicamos en el botón del sol, borrarémos la clase css dark-mode del div 
con id page y se aplicará el estilo active al sol*/
document.getElementById('id-sun').onclick = function(){
    document.getElementById('page').classList.remove('dark-mode')
    document.getElementById('id-moon').classList.remove('active')
    this.classList.add('active')

    var elementos = document.querySelectorAll('.text-night');
    // Iterar sobre cada elemento encontrado
    elementos.forEach(function(elemento) {
        // Añadir una clase a cada elemento
        elemento.classList.add('text-day');
        elemento.classList.remove('text-night');
    });
}
/*Si clicamos en el botón de la luna, añadiremos la clase css dark-mode del div 
con id page y se aplicará el estilo active a la luna*/
document.getElementById('id-moon').onclick = function(){
    document.getElementById('page').classList.add('dark-mode')
    document.getElementById('id-sun').classList.remove('active')
    this.classList.add('active')

    var elementos = document.querySelectorAll('.text-day');
    // Iterar sobre cada elemento encontrado
    elementos.forEach(function(elemento) {
        // Añadir una clase a cada elemento
        elemento.classList.add('text-night');
        elemento.classList.remove('text-day');
    });    
    
}