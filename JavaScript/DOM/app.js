// let val;

// val = document;
// val = document.head;
// val = document.body;
// val = document.domain;
// val = document.URL;

// val = document.images;

// // single items access
// // document.getElementById()
// console.log(document.getElementById('task-title'));
// // get things from the element
// console.log(document.getElementById('task-title').id);
// console.log(document.getElementById('task-title').className);

// const taskTitle = document.getElementById('task-title');

// // change Styling
// taskTitle.style.background = '#333';
// taskTitle.style.color = '#fff';
// taskTitle.style.padding = '5px';
// // taskTitle.style.display = 'none';

// // Change content
// taskTitle.textContent = 'Task List';
// taskTitle.innerText = 'My Tasks';
// taskTitle.innerHTML = '<span style="color:red">Task List</span>';

// // document.querySelector()
// console.log(document.querySelector('#task-title'));
// console.log(document.querySelector('.card-title'));
// console.log(document.querySelector('h5'));

// document.querySelector('li').style.color = 'red';
// document.querySelector('ul li').style.color = 'blue';
// document.querySelector('ul li:last-child').style.color = 'red';
// document.querySelector('ul li:nth-child(3)').style.color = 'yellow';
// document.querySelector('ul li:nth-child(even)').style.background = '#ccc';
// document.querySelector('ul li:nth-child(odd)').style.background = '#f4f4f4';

// multiple items
// document.getElementsByClassName()
// const items = document.getElementsByClassName('collection-item');

// console.log(items);
// console.log(items[0]);
// items[0].style.color = 'red';
// items[3].textContent = 'Hello';

// document.querySelectorAll
// const items = document.querySelectorAll('ul.collection li.collection-item');

// console.log(items);

// items.forEach(function(item, index) {
//     item.textContent = `${index} : Hello`;
// })

// const liOdd = document.querySelectorAll('li:nth-child(odd)');
// const liEven = document.querySelectorAll('li:nth-child(even)');

// liOdd.forEach(function(li, index){
//     li.style.background = '#ccc';
// })

// liEven.forEach(function(li, index){
//     li.style.background = '#f4f4f4';
// })

//10.10.11.121:5501/DOM

//console.log(val);


let val;

const list = document.querySelector('ul.collection');
const listItem = document.querySelector('li.collection-item:first-child');

val = listItem;
val = list;

// Get Child Nodes
val = list.childNodes;
val = list.children[1];
list.children[1].textContent = 'Hello';
val = list.children[3].children[0];
list.children[3].children[0].id = 'test-link';

// First child
val = list.firstElementChild;

// Last child
val = list.lastElementChild;

// count child elements
val = list.childElementCount;

// Get Parent node
val = listItem.parentElement.parentElement;

// Get next sibling
val = listItem.nextElementSibling;
val = listItem.nextElementSibling.nextElementSibling.previousElementSibling;

console.log(val);

// Event Handling , Event Bubbling