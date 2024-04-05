// Aplica a todos los ciclos
let i = 0;

while(i<6){
    i++;
    if(i === 2){
        continue; //saltará la siguiente instrucción
    }
    console.log(i);
    if( i === 4){
        break;
    }
}