
// document.querySelector(".clear-tasks").addEventListener('click', function(e){
//     console.log("Hello-world");

//     e.preventDefault();
// })

//document.querySelector('.clear-tasks').addEventListener('click', onClick);


// function onClick(e){
//     console.log('Clicked');
//     e.preventDefault();

//     let val;
//     val = e;

//     val = e.target;
//     val = e.target.id;
//     val = e.target.className;

//     val = e.type;

//     val = e.timeStamp;

//     val = e.clientY;
//     val = e.clientX;

//     console.log(val);

// }

const clearBtn = document.querySelector(".clear-tasks");
const card = document.querySelector(".card");
const heading = document.querySelector("h5");

// Click
// clearBtn.addEventListener('click', runEvent);
// clearBtn.addEventListener('dblclick',runEvent);
// clearBtn.addEventListener('mousedown',runEvent);
// clearBtn.addEventListener('mouseup',runEvent);
//card.addEventListener('mouseenter',runEvent);
// card.addEventListener('mouseleave',runEvent);
//  card.addEventListener('mouseover',runEvent);
//  card.addEventListener('mouseout',runEvent);
card.addEventListener('mousemove',runEvent);

function runEvent(e)
{
    console.log(`EVENT TYPE: ${e.type}`);
    heading.textContent = `MouseX: ${e.offsetX} MouseY: ${e.offsetY}`;
    document.body.style.backgroundColor = `rgb(${e.offsetX}, ${e.offsetY},40)`;
    //  e.preventDefault();
}

// keyup , keydown, keypress, focus, blur, cut, paste