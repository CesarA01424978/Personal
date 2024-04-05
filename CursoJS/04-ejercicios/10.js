// Crear un Array de longitud N y que sus elementos sean de 1 hasta N

let longitud = 7;

function createArray(N){
    let arr = [];
    for(let i=1; i<=N; i++){
        arr[i-1] = i;
    }
    return arr;
}

console.log(createArray(longitud));