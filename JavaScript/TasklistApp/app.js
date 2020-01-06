// Define UI vars

const form = document.querySelector('#task-form');
const taskInput = document.querySelector('#task');
const filter = document.querySelector('#filter');
const taskList = document.querySelector('.collection');
const clearBtn = document.querySelector('.clear-tasks');

// Call all event listeners
loadEventListeners();

// Load all event listeners
function loadEventListeners() {
    // Add task event
    form.addEventListener('submit', addTask);
    // Remove task event
    taskList.addEventListener('click', removeTask)
    // Clear task event
    clearBtn.addEventListener('click', clearTasks);
    // Filter tasks event
    filter.addEventListener('keyup', filterTasks);
}

// Local Storage
// Bootstrap ==> 4 ==> version 4 ==> 2017
function filterTasks(e) {
    const text = e.target.value.toLowerCase();

    document.querySelectorAll('.collection-item').forEach(function(task) {
        const item = task.firstChild.textContent;
        if(item.toLowerCase(). indexOf(text) != -1) {
            task.style.display = 'block';
        }
        else
        {
            task.style.display = 'none';
        }
    })
}


function clearTasks() {
    taskList. innerHTML = '';
}



// Remove Task
function removeTask(e) {
    if(e.target.parentElement.classList.contains('delete-item')) {
        if(confirm('Are you Sure?')) {
            e.target.parentElement.parentElement.remove();
        }
    }
}


//  Add Task
function addTask(e) {
    if(taskInput.value === '') {
        alert('Add a task');
    }
    else
    {
        //  Create li element
        const li = document.createElement('li');
        // Add class
        li.className = 'collection-item';
        // Create text node and append  to li
        li.appendChild(document.createTextNode(taskInput.value));
        // Create new link element
        const link = document.createElement('a');
        // Add class
        link.className = 'delete-item secondary-content';
        // Add icon html
        link.innerHTML = '<i class="fa fa-remove"></i>';
        // Append the link to li
        li.appendChild(link);

        // Append li to ul
        taskList.appendChild(li);

        // Clear input
        taskInput.value = '';

        // <ul class="collection">
        //     <li class="collection-item">Project 
        //         <a href="" class="delete-item secondary-content">
        //             <i class="fa fa-remove"></i>
        //         </a>
        //     </li>
        // </ul>   
        

        
    }

    e.preventDefault();
}