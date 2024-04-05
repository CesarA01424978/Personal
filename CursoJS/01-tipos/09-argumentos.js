function suma(a, b) {
    console.log(arguments); //muestra un arreglo de todos los valores
    return a+b;
}

let resultado = suma(1, 2);
console.log(resultado);
console.log(typeof suma);
