// Estos dos hacen lo mismo
let obj1 = new Object();
let obj2 = {};

/**  También se podrían crear constructores con los literales, 
 pero depende el programa porque estos se comportarán disitinto 

 * new Array(); []
 * new String(); "" '' ``
 * new Number(); 12
 * new Bolean(); true false
*/

function Usuario(){
    this.name = "Juan";
}

let user = new Usuario();
console.log(user.costructor); //Muestra la función constructora 

const s1 = "1 + 1";
const s2 = new String("1 + 1");

console.log(eval(s1), eval(s2)); //tomará los valores del strig y hará la operación en cambio el objeto se queda intacto

console.log(valueOf()); //Saca su string literal
