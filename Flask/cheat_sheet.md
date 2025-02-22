# Flask Request Object Notes

## Importing Request
```python
from flask import request
```

## Request Attributes

### `request.data`
Contains the incoming request data as a string.

### `request.args`
The key/value pairs in the URL query string.

### `request.form`
The key/value pairs in the body from:
- An HTML POST form
- A JavaScript request that isn't JSON-encoded

### `request.files`
The files in the body, which Flask keeps separate from form data. HTML forms must use `enctype="multipart/form-data"` or files will not be uploaded.

### `request.values`
A combination of `request.args` and `request.form`, preferring `request.args` if keys overlap.

### `request.json`
Parsed JSON data. The request must have the `application/json` content type, or use `request.get_json(force=True)` to ignore the content type.

## Accessing Values
All of these are `MultiDict` instances (except for `request.json`). You can access values using:

- `request.form['name']`: Use indexing if you know the key exists.
- `request.form.get('name')`: Use `.get()` if the key might not exist.
- `request.form.getlist('name')`: Use `.getlist()` if the key is sent multiple times and you want a list of values. `.get()` only returns the first value.
