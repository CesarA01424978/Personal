const punto = {
    x: 10,
    y: 15,
    dibujar(){ //es lo mismo que dibujar: function(){...}
        console.log('dibujando...');
    }
};

//delete punto.dibujar;
if('dibujar' in punto){ //Verifica si un objeto tiene una propiedad
    punto.dibujar();
}

//console.log(Object.keys(punto));
for(let llave of Object.keys(punto)){
    console.log(llave, punto[llave]);
}

// Acceder a un arreglo cuando no conocemos sus propiedades
for(let entry of Object.entries(punto)){
    console.log(entry);
}

// Código de las nuevas generaciones que hace lo mismo que las anteriores
for(let llave in punto){
    console.log(llave, punto[llave]);
}
