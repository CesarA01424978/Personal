let user = {
    id: 1,
    name: 'Juan',
    age: 20,
};

// Para mostrar las propiedades del usuario
for(let prop in user){
    console.log(prop); 
}

// Para mostrar las propiedades del usuario y sus valores
for(let prop in user){
    console.log(prop, user[prop]); 
}