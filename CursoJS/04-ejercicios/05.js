// Algoritmo que detecta el número máximo y mínimo de un Array que le pasemos

let array = [2, 5, 7, 15, -5, -100, 55];

function getMaxMin(arr){
    let max = 0;
    let min = 0;
    for(let i=0; i<arr.length; i++){
        if(arr[i] > max){
            max = arr[i];
        }else if(arr[i] < min){
            min = arr[i];
        }
    }
    console.log('Min =', min, 'Max =', max)
}

getMaxMin(array);




// Respuesta óptima
function getMaxMin2(arr){
    let max = arr[0];
    let min = arr[0];
    for(i of arr){
        min = min < i ? min : i;
        max = max > i ? max : i;
    }
    return [min, max];
}

let numeros = getMaxMin2(array);
console.log(numeros);