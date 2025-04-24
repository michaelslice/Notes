# PHP Cheat Sheet

## Network Variables
```
// Print data from the GET request
echo $_GET["email"];

// Print data from the POST request
echo $_POST["email"];

```
## Server Variables
Common use
- `$_SERVER['PHP_SELF']`: Get the current script filename
- `$_SERVER['HTTP_HOST']`: Get the name of the host 
- `$_SERVER['REQUEST_METHOD']`: Get request method
- `$_SERVER['REMOTE_ADDR']`: Get user IP address 
```
// Output GET or POST
echo $_SERVER["REQUEST_METHOD"];
```


## Session Variables
Stores data that persists across mulitple pages for the same user
```
// Start a session
session_start();

// Initialize a session variable
$_SESSION["name"] = "Michael";

// Remove all session variables
session_unset();

// Destroy the session
session_destroy();
```
## Common Session Check
```
if (isset($_SESSION["name"])){
    echo "Welcome!";
}
```

## Validating Form Input
Prevents Cross Site Scripting
```
$email = htmlspecialchars($_POST["email"]);
```

## Arrays
Regular arrays, and associative arrays
```
// Regular array
$arr = array("red", "green", "blue");

// Associate array key-value pairs
$arr = array(
    "key" => "value",
    "name" => "Michael"
);
```
## Loop Through Associative Array
Loop through arrays
```
forreach($arr as $key => $value){
    echo "$key: $value <br>";
}
```

## Redirect
Navigate a user to a new page
```
header("Location: index.php");
exit();
```

## Including a File
```
include("index.php");
```