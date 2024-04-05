let nombre = '';
let username = nombre || 'Anonimo'; //Si está vacío muestra la otra opción
console.log(username);

function fn1() {
    console.log('funcion 1');
    return false;
}

function fn2() {
    console.log('funcion 2');
    return true;
}

let x = fn1() && fn2(); //solo existe si las otras existen

if(x){
    console.log('existe x');
}else{
    console.log('no existe x');
}