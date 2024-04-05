// Una función que devuelva un elemento de un Array cuando nosotros le pasamos un Array y un índice,
// el elemento no puede ser menor que cero y el elemento debe existir.

function getByIdx(arr, idx){

    let encontrado = false;

    if(idx >= 0){
        for(let elemento of arr){
            if(elemento === arr[idx]){
                return arr[idx];
            }
        }
        if(!encontrado){
            return 'No existe elemento';
        }
    }else{
        return 'No existe elemento';
    }
}

let resultado = getByIdx([1, 2], 0);
console.log(resultado);





// Respuesta óptima

function getByIdx2(arr, idx){

    if(idx < 0 || arr.length <= idx){
        return 'No existe elemento'
    }
    return arr[idx];

}

let resultado2 = getByIdx2([1, 2], 0);
console.log(resultado2);


