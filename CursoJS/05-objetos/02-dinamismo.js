const user = { id: 1 }; //se pueden cambiar, agregar y quitar sus componentes pero no su valor ejemplo: user=1;

user.name = 'Antri';
user.guardar = function(){
    console.log('Guardando', user.name);
}

user.guardar();

delete user.name;
delete user.guardar;
console.log(user);

const user1 = Object.freeze({ id: 1}); //Con esto ya no se puede cambiar nada
user1.id = 2;
console.log(user1);
const user2 = Object.seal({ id: 1}); //Con esto se puede cambiar solo el valor de la propiedad pero no agragar mas cosas
user2.id = 2;
console.log(user2);
