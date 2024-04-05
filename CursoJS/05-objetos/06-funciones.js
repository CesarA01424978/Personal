//Las funciones son objetos y las puedes usar como quieras

function Usuario(nombre){
    this.nombre = nombre;
}

console.log(Usuario.name); //Accede a una parte específica del constructor
console.log(Usuario.length); //Accede a la cantidad de argumentos del constructor

const U = Usuario; // Tomamos una función y se la asignamos a una constante
let user = new U('Antri'); // Se crea un usuario apartir de la función

console.log(user);

function of(Fn, arg){ //Recibe una función constructora con el argumento que nosotros le pasemos
    return new Fn(arg);
}

let user1 = of(Usuario, 'Lika');
console.log(user1);

function Retornar(){ //Retornar una función
    return function(){
        console.log('Hola xd');
    }
}

let saludo = Retornar();
saludo();