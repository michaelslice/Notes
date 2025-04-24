# PDO(PHP Data Objects)

## Initializing PDO
```
try { // if something goes wrong, an exception is thrown
    $dsn = "mysql:host=courses;dbname=z123456";
    $pdo = new PDO($dsn, $username, $password);
}
catch(PDOexception $e) { // handle that exception
    echo "Connection to database failed: " . $e->getMessage();
}
```

---

## PDO `exec()`
- Execute SQL that doesnt return result
- Good for `INSERT`, `UPDATE`, `DELETE`
```
$rows_affected = $pdo->exec("DELETE FROM Users WHERE id = 1");
```

## PDO `query()`
- Execute SQL that returns data
- Good for `SELECT` statements
```
$data = $pdo->query("SELECT * FROM Users");
$rows = $data->fetchAll();
```

## PDO `prepare()`
- Prepares a SQL statement with placeholders
- Good for queries with user input
```
$data = $pdo->prepare("SELECT * FROM Users WHERE ID = ? ");
$test->execute([5]);

$row = $test->fetch();    // Get one row at a time
$row = $test->fetchAll(); // gets all rows
```

---

## Error Handling
Good for debugging
```
$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

// Or use try/catch around queries
try {
    $stmt = $pdo->query("BAD SQL");
} catch (PDOException $e) {
    echo "Error: " . $e->getMessage();
}
```

## Fetch Modes
```
$stmt->fetch(PDO::FETCH_ASSOC); // Associative array
$stmt->fetch(PDO::FETCH_NUM);   // Numeric array
$stmt->fetch(PDO::FETCH_BOTH);  // Both (default)
$stmt->fetch(PDO::FETCH_OBJ);   // Object with properties
```

---

## Transactions
- Good for finance, orders, and inventory
- Ensures that any database operations either all succeed together, or all fail together
- Maintains data consistency
```
try {
    $pdo->beginTransaction();

    $pdo->exec("UPDATE accounts SET balance = balance - 100 WHERE id = 1");
    $pdo->exec("UPDATE accounts SET balance = balance + 100 WHERE id = 2");

    $pdo->commit(); // Apply changes
} catch (PDOException $e) {
    $pdo->rollBack(); // Undo changes
    echo "Transaction failed: " . $e->getMessage();
}
```