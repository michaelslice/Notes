# CSS Guide for Web Development

## Selectors

### Basic Selectors

**Universal Selector**
```css
* {
    color: purple;
}
```

**Type Selector**
```css
div {
    color: white;
}
```

**Class Selector**
```css
.alert-text {
    color: red;
}
```

**ID Selector**
```css
#title {
    background-color: red;
}
```

**Grouping Selector**
```css
.read,
.unread {
    color: white;
    background-color: black;
}
```

### Combinators

- `>`: The child combinator
- `+`: The adjacent sibling combinator
- `~`: The general sibling combinator

### Structural Pseudo Classes

**:root**
A special class that represents the very top level of document, equivalent to `html`

**:nth-child**
A flexible pseudo-class with various uses:
```css
.myList:nth-child(even) {
    /* Selects every even element with class myList */
}
```

## Units

### Relative Units
Units that change based on their context, prefer `rem` for accessibility:

- `em`: Relative to the font-size of parent element
  - If parent is 16px, then 4em = 64px
- `rem`: Relative to the font-size of the `:root` or `html` element
  - More consistent than `em` for responsive design

### Viewport Units
- `vh`: 1vh is 1% of viewport height
- `vw`: 1vw is 1% of viewport width

## Box Model

- **padding**: Increases space between border of box and content of box
- **border**: Adds space between margin and the padding
- **margin**: Increases the space between the borders of box and the borders of adjacent boxes

## Common CSS Properties

### Box Styling
```css
/* Rounded corners */
.rounded {
    border-radius: 8px;
}

/* Box shadow */
.card {
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
}
```

### Flexbox (Modern Layout)
```css
.flex-container {
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    gap: 10px;
}
```

### Grid Layout
```css
.grid-container {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 20px;
}
```

### Positioning
```css
.relative {
    position: relative;
    top: 10px;
    left: 20px;
}

.absolute {
    position: absolute;
    top: 0;
    right: 0;
}

.fixed {
    position: fixed;
    bottom: 20px;
    right: 20px;
}
```

### Media Queries
```css
/* Mobile-first approach */
.container {
    width: 100%;
}

/* For tablets and up */
@media (min-width: 768px) {
    .container {
        width: 750px;
    }
}

/* For desktops */
@media (min-width: 1024px) {
    .container {
        width: 970px;
    }
}
```

### Transitions and Animations
```css
/* Simple transition */
.button {
    background-color: blue;
    transition: background-color 0.3s ease;
}

.button:hover {
    background-color: darkblue;
}

/* Basic animation */
@keyframes fadeIn {
    from { opacity: 0; }
    to { opacity: 1; }
}

.fade-element {
    animation: fadeIn 1s ease-in-out;
}
```

### Typography
```css
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    line-height: 1.6;
    font-size: 16px;
}

h1, h2, h3 {
    font-weight: 700;
    margin-bottom: 1rem;
}

.text-center {
    text-align: center;
}
```

### Colors and Backgrounds
```css
:root {
    --primary-color: #3498db;
    --secondary-color: #2ecc71;
    --text-color: #333;
    --background-color: #f9f9f9;
}

body {
    color: var(--text-color);
    background-color: var(--background-color);
}

.gradient-bg {
    background: linear-gradient(to right, var(--primary-color), var(--secondary-color));
}
```

### CSS Variables (Custom Properties)
```css
:root {
    --spacing-sm: 8px;
    --spacing-md: 16px;
    --spacing-lg: 24px;
}

.card {
    padding: var(--spacing-md);
    margin-bottom: var(--spacing-lg);
}
```