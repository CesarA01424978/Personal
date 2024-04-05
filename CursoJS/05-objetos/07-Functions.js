function Punto(x, y){
    this.x = x;
    this.y = y;
    this.dibujar = function(){ console.log('Dibujando...'); }
}

// Así se extienden las propiedades de un objeto
let punto = { z: 7};
//Punto.call(punto, 1, 2);
Punto.apply(punto, [1, 2]); // hace lo mismo que call
console.log(punto);


/* Otra manera de crear objetos

const Point = new Function('x','y',`
this.x = x;
this.y = y;
this.dibujar = function(){ console.log('Dibujando...'); }
`);

const p = new Point(1, 2);
console.log(p);

*/