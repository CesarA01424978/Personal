/** Una función que devuelva la calidad de (por ejemplo) un video, con la siguiente tabla en cuenta:

 * Nombre: ancho x alto
 * 8K 7680 x 4320
 * 4K 3840 x 2160
 * WQHD 2560 x 1440
 * FHD 1920 x 1080
 * HD 1280 x 720
 
*/

function nombreResolucion(ancho, alto){
    if(ancho >= 1280 && alto >= 720){
        if(ancho >= 1920 && alto >= 1080){
            if(ancho >= 2560 && alto >= 1440){
                if(ancho >= 3840 && alto >= 2160){
                    if(ancho >= 7680 && alto >= 4320){
                        console.log('8K');
                    }else{
                        console.log('4K');
                    }
                }else{
                    console.log('WQHD');
                }
            }else{
                console.log('FHD'); 
            }
        }else{
            console.log('HD');
        }
    }else{
        console.log('false');
    }
}

nombreResolucion(3840, 2160);



// Respuesta óptima


function nombreResolucion2(ancho, alto){
    if(ancho >= 7680 && alto >= 4320){
        return '8K';
    }else if(ancho >= 3840 && alto >= 2160){
        return '4K';
    }else if(ancho >= 2560 && alto >= 1440){
        return 'WQHD';
    }else if(ancho >= 1920 && alto >= 1080){
        return 'FHD';
    }else if(ancho >= 1280 && alto >= 720){
        return 'HD';
    }else{
        return false;
    }
}

let mayor = nombreResolucion2(3840, 2160);
console.log(mayor);
