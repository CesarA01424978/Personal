alert("TE CALLÓ LA LEY, PERRO!"); 	//alerta principal//
var nombre;				//(variable)para mostrar los nombres//
nombre = prompt("Ingresa tu nombre");	//el usuario ingresa nombre//
edad = prompt("Ingresa tu edad");	//el usuario ingresa edad//
document.write(nombre + " " + edad);	//aparece en la pantalla el nombre + espacio + edad//

document.write("<br>");			//hace un espacio//

var amigos = ["Carlos", "César", "Alex"];//lista de sujetos//
amigos [0] = "Arturo";			//cambiará el sujeto 0 por otro//
var ordenados = amigos.sort();		//acomoda ordenadamente//
var amigos2 = ordenados.join("/");	//hace que los separe el elemento entre comillas//
document.write(amigos2);		//aparece en la pantalla la lista de sujetos//

document.write("<br>");			//hace un espacio//

if ( edad == 17 && nombre == "César" ) {//condición múltiple//
document.write("Bienvenido, amo mío");
} else if ( edad == 100 || nombre == "Arturo" ){//condición cualquiera//
document.write("Mentiroso");
} else {
document.write("Sáquese gei");
} 

document.write("<br>");			//hace un espacio//

for( i = 1; i <= 100; i++ ){		//hace una orden en ciclo// //i++ significa sumar uno//
document.write( i + "<br>");
}

document.write("<br>");			//hace un espacio//

var dias = ["Lunes", "Martes", "Miércoles",
"Jueves", "Viernes", "Sábado", "Domingo"];
for( i = 0; i <= dias.length - 1; i++ ){	//.length sirve para saber el número de elementos empezando por el 0//
document.write( dias[i] + "<br>");
}

document.write("<br>");			//hace un espacio//

var i = 6;
while (i >= 0 ) {
document.write( dias[i] + "<br>");
i--;
}

document.write("<br>");			//hace un espacio//

var suma = function(numero1, numero2) {  //una función es un fracmento de código a reutilizar//
var numero1 = numero1;
var numero2 = numero2;
return numero1 + numero2;		//return sirve para regresar al elemento//
}
document.write("La suma es: " + suma(40,50) );
document.write("<br>");			//hace un espacio//
document.write("La suma es: " + suma(10,70) );

document.write("<br>");			//hace un espacio//

var númeroMáximo = function(valor1, valor2){
if ( valor1 > valor2 ){
return valor1;
}
return valor2;
}
document.write("El número máximo es: " + númeroMáximo(1,7));

document.write("<br>");			//hace un espacio//

var suma = function(numero1, numero2){
	var numero1 = parseFloat(document.getElementById("numero1").value);  //parsefloat sirve para convertir el texto en números con decimales)
	var numero2 = parseFloat(document.getElementById("numero2").value);
	var resultado = numero1 + numero2;
	return resultado;
}

document.write("<br>");			//hace un espacio//

var texto = "Maurisio Uriel y Puvlo";
var nuevoTexto1 = texto.substring(8);	//para traer un texto desde determinada posicion (número) hasta el final//
document.write(nuevoTexto1);
document.write("<br>");

var nuevoTexto2 = texto.substr(8, 6);	//para buscar un texto en una determinada posicion (número)//
document.write(nuevoTexto2);
document.write("<br>");			//hace un espacio//

var nuevoTexto3 = texto.indexOf("u");	//para buscar la posición de una letra (la primera)//
document.write(nuevoTexto3);
document.write("<br>");			//hace un espacio//

var nuevoTexto4 = texto.lastIndexOf("u");//para buscar la posición de una letra (empezando por la última)//
document.write(nuevoTexto4);
document.write("<br>");			//hace un espacio//

var nuevoTexto5 = texto.replace(texto, "Hola gei!");	//para remplazar un elemento por otro//
document.write(nuevoTexto5);
document.write("<br>");			//hace un espacio//

var nuevoTexto6 = nuevoTexto5.toUpperCase();	//Cambia texto a mayúsculas//
document.write(nuevoTexto6);
document.write("<br>");			//hace un espacio//

var nuevoTexto7 = nuevoTexto5.toLowerCase();	//Cambia texto a mayúsculas//
document.write(nuevoTexto7);
document.write("<br>");			//hace un espacio//
