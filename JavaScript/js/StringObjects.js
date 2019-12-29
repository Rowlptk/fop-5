const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'Hello there brad Brad my name is Brad';
const tags = 'web design,web development,programming';

let val;

// Concatenation
val = firstName + lastName;
val = firstName + ' ' + lastName;

// Append
val = 'Brad'
val += ' Traversy'; //==> val = val+'Traversy'

val = 'Hello, my name is '+ firstName + ' and I am '+age;

// Escaping
val = 'That\'s awesome, I can\'t wait';

// Length
val = firstName.length;

// concat()
val = firstName.concat(' ', lastName);

// change case
val = firstName.toUpperCase();
val = firstName.toLowerCase();
// william
val = firstName[4];

// indexOf()
val = firstName.indexOf('l');
val = firstName.lastIndexOf('l');

// charAt();
val = firstName.charAt('2');

// get last char
val = firstName.charAt(firstName.length -1);

// slice
val = firstName.slice(0,4);
val = firstName.slice(-3);

// split()
val = str.split(' ');
val = tags.split(',');

// replace()
val = str.replace("Brad",'Jack');
val = str.replace(/Brad/gi,'Jack');

// template string, array, object, date object, functions
// window object, conditions, loops, for
4


console.log(val);