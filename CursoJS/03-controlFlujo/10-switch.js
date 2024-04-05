let accion = 'listar';

// Es como un if else, pero te ahorra el comparar a cada rato (a === b)
switch(accion){
    case 'listar':
        console.log('Accion de listar');
        break; //siempre acaba en un break porque sino sigue y sigue
    case 'guardar':
        console.log('Accion de guardar');
        break;
    default: //para aquellas opciones que no contemplamos
        console.log('Accion no reconocida');
}


// También sirve con dobles
/**
 * function nombreResolucion(ancho, alto){
    switch(ancho, alto){
        case 1280, 720:
            console.log('HD');
            break;
        case 1920, 1080: 
            console.log('FHD');
            break;
        case 2560, 1440:
            console.log('WQHD')
            break;
        case 3840, 2160:
            console.log('4K')
            break;
        case 7680, 4320:
            console.log('8K')
            break;
        }
}
 */