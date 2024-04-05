// Para hacer el objeto "Personaje" debe ir entre corchetes
let personaje = {
    nombre: "Juan",
    serie: "Juanes",
    edad: 20,
};

console.log(personaje);
console.log(personaje.nombre);
console.log(personaje.nombre['serie']);

personaje.edad = 21;

let llave = 'edad';
personaje[llave] = 17;

delete personaje.edad;

console.log(personaje);