const numbers = [43,56,33,23,44,36,5];
const numbers2 = new Array(22,45,33,76,54);
const fruit = ['Banana', 'Apple', 'Orange', 'Pear'];
const mixed = [22, 'Hello' , true, undefined, null, {a:1,b:1}, new Date()];

let val;
// Get array length
val = numbers.length;
// check if is array
val = Array.isArray(numbers);
// Get single value
val = numbers[3];
val = numbers[0];
// Insert into array
numbers[2] = 100;
// Find Index of value
val = numbers.indexOf(36);

// Mutating arrays
// Add one to end
numbers.push(250);
// Add one to front
numbers.unshift(120);
// Take off from end
numbers.pop();
// Take off from front
numbers.shift();
// Splice values
//numbers.splice(1,1);
numbers.splice(2,3);

// Reverse
numbers.reverse();

// Sorting array
val = fruit.sort();

//Note: numbers


console.log(numbers);
console.log(val);