# Models
## Define a Table

```python
from flask_sqlalchemy import SQLAlchemy

db = SQLAlchemy()

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///site.db'
db.init_ap

class User(db.Model):
	id = db.Column(db.integer, primary_key=True)
	name = db.Column(db.string(80), nullable=True)
	email = db.Column(db.string(120), unique=True, nullable=False)
```

## Create a New User
```python
# Create a New User Instance

new_user = User(name=name)
```

## Insert Into Table
```python

db.session.add(new_user)
db.session.commit()
```

## Deleting a Element
```python
db.session.delete(user)
db.session.commit()
```

## Querying Data 
```python
# Get all users
users = User.query.all()
```

## Get 1 Element 
```python
# Get first user
first_user = User.query.first()
```

## Get Element by Filter 
```python
# Get user by filter
user = User.query.filter_by(username="jonh").first()
```

## Get by Primary Key 
```python
# Get by primary key
user = User.query.get(1)
```

## Update Data
```python

# Update Data
user = User.query.get(1)
user.username = "new_username"
db.session.commit()
```

## Creating a Table
```python
with app.app_context():
	db.create_all()
```

## Drop Table
```python

# Drop All Tables
with app.app_context():
	db.drop_all()
```

## Add Multiple Rows
```python
# Add multiple rows	
db.session.add_all([obj1, obj2])
```

# UserMixin
`UserMixin` is a helper class for flask-login like
- `is_authenticated`: Return `True` if logged in
- `is_active`:  Return `True` if account is active
- `is_anonymous`:  Return `False` for real users, and `True `user is guest
- `get_id()`: Return user unique id

## Example
```python
from flask_login import LoginManager

login_manager = LoginManager()
login_manager.init_app(app)

@login_manager.user_loader
def load_user(user_id):
    return User.query.get(int(user_id))
```