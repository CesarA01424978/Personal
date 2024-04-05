function createUser(name, email){
    return {
        name,
        email, // esto es igual que email: email
        activo: true,
        recuperarClave: function(){
            console.log('Recuperando clave...');
        }
    };
}

let user1 = createUser('Antri', 'correo1@gmail.com');
let user2 = createUser('Lova', 'correo2@gmail.com');

console.log(user1, user2);