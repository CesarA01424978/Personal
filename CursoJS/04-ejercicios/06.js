// Algoritmo de devuelve la cantidad de números positivos en un Array que le demos

function getAmountPositives(arr){
    let cantidad = 0;
    for(i of arr){
        if(i > 0){
            cantidad++;
        }
    }
    return cantidad;
}

let array = [2, 5, 7, 15, -5, -100, 55];
console.log(getAmountPositives(array));