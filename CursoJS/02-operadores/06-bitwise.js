//Casi no se usan xd

// bite: 0, 1
// Byte: 0000 0000 -> 0
// Byte: 0000 0001 -> 1
// Byte: 0000 0010 -> 2
// Byte: 0000 0011 -> 3
// Byte: 0000 0100 -> 4
// Byte: 0000 0101 -> 5
// Byte: 0000 0110 -> 6 
// Byte: 0000 0111 -> 7

// Compara sus cadenas en binario y de si tiene un uno lo coloca en una cadena nueva 
console.log(1 | 3); // cadena nueva: 0000 0011 -> 3
console.log(1 | 4); // cadena nueva: 0000 0101 -> 5
console.log(5 | 3); // cadena nueva: 0000 0111 -> 7

// Compara sus cadenas en binario y de si ambos son uno lo coloca en una cadena nueva 
console.log(1 & 3); // cadena nueva: 0000 0001 -> 1
console.log(1 & 4); // cadena nueva: 0000 0000 -> 0
console.log(5 & 3); // cadena nueva: 0000 0001 -> 1