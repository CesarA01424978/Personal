//Una función que reciba dos números y regrese el mayor de ellos
function numMayor(a, b){
    if(a < b){
        return b;
    }else{
        return a;
    }
} 

let mayor = numMayor(10, 5);
console.log(mayor);



// Respuesta óptima

function numMayor2(a, b){
    return (a > b) ? a : b;
} 

let mayor2 = numMayor2(10, 5);
console.log(mayor2);

