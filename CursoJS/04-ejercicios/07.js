// Algoritmo que calcule el precio de un producto con cierto impuesto que también le pasaremos (no en porcentaje)

function price(precio, impuesto){
    return precio * impuesto;
}

let resultado = price(19.90, 0.15); // 0.15 = 15%
console.log(resultado);