// Un algoritmo que tome un Array de pares (identificador y objeto) y devuelva un Array de objetos
// en base a su primer par le vamos a hacer un id


// Tiene que quedar así:
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

let pares = [
    [1, { name: "Nick" }],
    [2, { name: "Feli" }],
    [3, { name: "Antri" }],
];

function toCollection(par){
    let arr = [];
    for(elemento in par){
        arr[elemento] = [{id:par[elemento][0]},{name:par[elemento][1].name}];
    }
    return arr;
}

let resultado = toCollection(pares);
console.log(resultado);