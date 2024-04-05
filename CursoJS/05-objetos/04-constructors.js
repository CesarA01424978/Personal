function User(){ //Con mayus la primera
    this.id = 1; //usamos el this para decir que una propiedad del objeto va a tener ciertas características
    this.recuperateKey = function (){ // A una función de un objeto se le llama método
        console.log('recuperando clave...');
    }
}

let usuario = new User(); //Para crearlos necesatamos el new
console.log(usuario);