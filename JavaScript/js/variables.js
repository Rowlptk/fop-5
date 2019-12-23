// var, let, const

//  var

var name = 'John Doe';
console.log(name);
name = 'Steve Smith';
console.log(name);

// letters, numbers, _, $
// cannot start with a number

var string = 'apple';

// Multiwords var
//Camelcase ==> firstName
//underscore ==> first_name
//PascalCase ==> FirstName
//lowercase ==> firstname

// let
let name1;
name1 = 'John Doe'
console.log(name1);
name1 = "Steve Smith";
console.log(name1);

// Const
const name2 = 'John'
console.log(name2); 
// name2 = 'Sara';

const person = {
    name: 'John',
    age: 30
} 

console.log(person.name);
person.name = 'Sara';
console.log(person.name);
person.age = 32;
console.log(person.age);

console.log(person);

const numbers = [1,2,3,4,5];
numbers.push(6);
numbers.pop();
numbers.pop();
console.log(numbers);