# DOM Manipulating in Vanilla JS

## SELECTING ELEMENTS:

### getElementById:
```js
var element = document.getElementById('myid');
```

### getElementsByClassName:
```js
var elements = document.getElementsByClassName('myclass');
```

### getElementsByTagName:
```js
var elements = document.getElementsByTagName('div');
```

### querySelector:
```js
var element = document.querySelector('.myclass');
```

### querySelectorAll:
```js
var elements = document.querySelectorAll('.myclass');
```

## CREATING AND ADDING ELEMENTS:
    
### Create a new element:
```js
var newElement = document.createElement('div');
newElement.textContent = 'hello world';
```

### Append the new element to an existing element:
```js
var parentElement = document.getElementById('parent');
parentElement.appendChild(newElement);
```

## MODIFYING ELEMENTS:

### Changing text content:
```js
var element = document.getElementById('myId');
element.textContent = 'New text content';
```

### Changing HTML content:
```js
var element = document.getElementById('myId');
element.innerHTML = '<strong>Bold text</strong>';
```

### Changing styles:
```js
var element = document.getElementById('myId');
element.style.color = 'red';
element.style.fontSize = '20px';
```

### Changing attributes:
```js
var element = document.getElementById('myId');
element.setAttribute('data-custom', 'value');
```

## REMOVING ELEMENTS:

### Remove a child element:
```js
var parentElement = document.getElementById('parent');
var childElement = document.getElementById('child');
parentElement.removeChild(childElement);
```

### Remove an element itself:
```js
var element = document.getElementById('myId');
element.remove();
```

## EVENT HANDLING:

### Adding an event listener:
```js
var button = document.getElementById('mybutton');
button.addEventListener('click', function() {
    alert('Button Clicked!');
});
```

### Removing an event listener:
```js
function handleClick() {
    alert('Button Clicked!');
}

button.addEventListener('click', handleClick);
button.removeEventListener('click', handleClick);
```

## TRAVERSING THE DOM:

### Accessing parent element:
```js
var element = document.getElementById('myId');
var parent = element.parentElement;
```

### Accessing child elements:
```js
var element = document.getElementById('myId');
var children = element.children;
```

### Accessing next sibling:
```js
var element = document.getElementById('myId');
var nextSibling = element.nextElementSibling;
