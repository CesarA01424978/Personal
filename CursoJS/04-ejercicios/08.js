// Un algoritmo que tome un Array de objetos y devuelva un Array de pares (identificador y objeto)

let array = [{
    id: 1,
    name: 'Nick',
},{
    id: 2,
    name: 'Feli',
},{
    id: 3,
    name: 'Antri',
}];

// Tiene que quedar así:
let pares = [
    [1, { id: 1, name: "Nick" }],
    [2, { id: 2, name: "Feli" }],
    [3, { id: 2, name: "Antri" }],
];

function toPairs(arr){
    let par = [];
    for(elemento of arr){
        par[elemento.id-1] = [elemento.id, arr[elemento.id-1]];
    }
    return par;
}

let resultado = toPairs(array);
console.log(resultado);