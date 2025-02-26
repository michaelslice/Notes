# HTML Notes

## DOM:
Document Object Model: Is the data representation of the objects that comprise the structure and content of a document on the web.
- It represents a page so that programs can change the document structure, style, and content.
- The DOM represents the document as nodes and objects, that way programming languages can interact with the page.
- The DOM is not part of the JavaScript language but is a web API used to build websites.

### Core Interfaces in the DOM:
- The `document` and `window` objects are the objects whose interfaces you generally use most often in DOM programming.
- `Window` object represents something like the browser.
- `Document` object is the root of the document itself.

### List of Common APIs in Web Page Scripting:
```js
document.querySelector()
document.querySelectorAll()
document.createElement()
Element.innerHTML()
Element.setAttribute()
Element.getAttribute()
EventTarget.addEventListener()
HTMLElement.style()
Node.appendChild()
window.onload()
window.scrollTo()
```

## HTML TAGS TO KNOW:

### `<!DOCTYPE html>`:
Tells browser document is an HTML document.

### `<html>`:
Tells browser where the start of HTML is.

### `<head>`:
Contains info about the webpage.

### `<body>`:
What you will display to the user.

### `<title>`:
Defines the title of the webpage.

### `<h1>` - `<h6>`:
Header tags, `<h6>` is the smallest.

### `<p>`:
Paragraph element tag.

### `<br>`:
Line break tag.

### `<hr>`:
Horizontal rule tag.

### `<!-- -->`:
Comment.

### `<a href="google.com"> </a>`:
Hyperlink tag.

### `<img src="image.png">`:
Image tag.

### `<audio controls src="file.mp3">`:
Audio tag.

### `<video src="racing.mp4">`:
Video tag.

### Text Formatting:
```html
<b>Bold text</b>
<i>Italic text</i>
<big>Big text</big>
<small>Small text</small>
<sub>Subscript text</sub>
<sup>Superscript text</sup>
<ins>Underlines text</ins>
<del>Strikethrough text</del>
<mark>Highlighted text</mark>
```

## LISTS:

### `<ul>`:
Creates an unordered list.

### `<li>`:
A list item element.

### `<ol>`:
Ordered list, that will be numbered.

### `<dl>`:
Description list.

### `<dt>`:
Description term, which goes within `<dl>` tags.

### `<dd>`:
Description definition tags, that go within description list tags.

## TABLES:

### `<table>`:
Defines the table element.

### `<tr>`:
Table row.

### `<th>`:
Table header.

### `<td>`:
Table data.

### `<thead>`:
Table head used to group the header content in a table.

### `<tbody>`:
Table body used to group the body content in a table.

### `<tfoot>`:
Table footer used to group the footer content in a table.

### `<caption>`:
This tag provides a title or description for the table.

### `<col>`:
Defines attributes for table columns.

### `<colgroup>`:
Groups columns together for formatting.

## OTHER IMPORTANT TAGS:

### `<span>`:
Adds markup to text or portion of a document.

### `<div>`:
Defines a division of a document.

### `<meta>`:
Represents various kinds of metadata that cannot be expressed using the title, base, link.

### `<iframe>`:
Embeds content from another source into an HTML document, used for ads.

### `<button onclick="doSomething()">Button</button>`:
Allows for something to be clicked in the browser.

## FORMS:
Easy way to have the button outside of form.
```sh
<form id="my-form">
...input fields
</form>

<button type="submit" form="my-form"> </button>
```

### `<form>`:
Form element tag.

### `<label for="fname">Name</label>`:
Label that goes next to input.

### Input Elements:
```html
<input for="fname" type="text" name="name" placeholder="Enter Name">
<input type="reset">
<input type="submit">
<input type="password" maxlength="12" required>
<input type="email">
<input type="tel">
<input type="date">
<input type="number" min="0" max="99" value="1">
```

### Dropdown Menu:
```html
<label for="payment">Payment:</label>
<select id="payment" name="payment">
    <option>Mastercard</option>
    <option>Visa</option>
    <option>Giftcard</option>
</select>
```

### Checkbox:
```html
<input type="checkbox" id="subscribe" name="subscribe">
```

This is how to add a checkbox input.
