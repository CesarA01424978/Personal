//El 04-es un loop infinito así que me pasé a este directamente
let i = 2;

console.log('finalizoo');
do{
    if( i%2 == 0){
        console.log('numero par ', i);
    }
    i++;
}while(i < 2);