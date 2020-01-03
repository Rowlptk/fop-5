// Event Deligation

//const delItem = document.querySelector('.delete-item');

//delItem.addEventListener('click', deleteItem);

document.body.addEventListener('click',deleteItem);


// function deleteItem(e) {
//     console.log(e.target.className);
//     if(e.target.parentElement.className === 'delete-item secondary-content'){
//         console.log('delete item');
//     }


//     //console.log(e.type);
    
//     e.preventDefault();
// }

// DOM ==> event handling ;
// 

document.body.addEventListener('click',deleteItem);

function deleteItem(e)
{
    if(e.target.parentElement.classList.contains('delete-item'))
    {
        console.log(e.target);
        e.target.parentElement.parentElement.remove();
    }
    
}


