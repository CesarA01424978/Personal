let a = {id: 1};

function suma(n){
    n.id++; //como estamos cambiando la dirección afecta a los objetos que la contienen
}

suma(a);
console.log(a);