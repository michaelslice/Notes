# MariaDB Navigation

- `USE <X>`: Select the database <x>
- `SHOW TABLES`: List all the tables
- `DESCRIBE <X>`: Show the properties of each column of table <x>
- `SHOW CREATE TABLE <X>`: Show a CREATE TABLE statement that can be used to reconstruct table

# Creating a NEW TABLE WITH CREATE TABLE
```sql
CREATE TABLE <table_name> (
    <attribute> <type> [NOT NULL] [UNIQUE] [PRIMARY KEY], [ ... ]
    [PRIMARY KEY(<pkattrs>),]
    [FOREIGN KEY(<attr_here>) REFERENCES <home_table>(<attr_home>)]
);
```

- `<table_name>`: Name of the table
- `<attribute>`: Name of the current attribute
- `<type>`: Data type of the current attribute
- `<pkattrs>`: Comma-separated list of the attributes making up the table’s primary key
- `<attr_here>`: Comma-separated list of attributes in the current table forming a foreign key
- `<home_table>`: Name of the home table
- `<attr_home>`: Comma-separated list of attributes in the home table, matching the attributes in `<attr_here>`

# Data Types
- `INT/INTEGER`: Integer values
- `FLOAT`: Floating point number
- `DOUBLE/REAL`: Double precision floating point numbers
- `DECIMAL(i, j)`: i digits total, j after the decimal point
- `CHAR(n)`: Character strings exactly n characters long
- `VARCHAR(n)`: Variable-length character strings up to n characters long
- `DATE`: Date in YYYY-MM-DD format
- `TIME`: Time in HH:MM:SS format
- `DATETIME`: Date/time in 'YYYY-MM-DD HH:MM:SS' format, no timezone conversion
- `TIMESTAMP`: Date/time in 'YYYY-MM-DD HH:MM:SS' format, timezone conversion

# Column Options
- `NULL`: Allows NULL to be stored as the value
- `NOT NULL`: Prevents NULL from being stored as the value for this attribute
- `UNIQUE`: Ensures that no two tuples have the same value for this attribute
- `PRIMARY KEY`: Declares this attribute to be the entire primary key
- `AUTO_INCREMENT`: Next-available value auto-assigned for this attribute when not provided
- `DEFAULT <X>`: Sets the default value of the attribute to `<X>` when not supplied

# Comments
- `#`
- `--`
- `/* */`

# CREATE TABLE EXAMPLE 1
**Person(SSN, FNAME, LNAME, PHONE)**

```sql
# Everything after # on a line is a comment
CREATE TABLE Person(
    SSN CHAR(9) PRIMARY KEY, # SSN BAD IDEA, PK on same line (1)
    FNAME CHAR(20) NOT NULL, # First name
    LNAME CHAR(20) NOT NULL, # Last name
    PHONE CHAR(10) # Phone number
);
```

# Setting Up a Foreign Key
A foreign key links the current table to another table, which we call the home relation.

```sql
FOREIGN KEY (<localnames>) REFERENCES <home_table>(<homenames>)
```

# CREATE TABLE EXAMPLE 2
**Student(SSN, CLSYEAR, GPA, TOTALHRS)**
```sql
-- Everything after -- on a line is a comment
CREATE TABLE Student (
    SSN CHAR(9) NOT NULL, -- SSN is BAD IDEA
    CLSYEAR CHAR(9), -- fresh/soph/junior/senior
    GPA DECIMAL(4,3), -- 4.000, we hope
    TOTALHRS INT,
    PRIMARY KEY (SSN), -- set up the primary key separately (2)
    FOREIGN KEY (SSN) REFERENCES Person(SSN) -- a Student is a Person
);
```

# ALTER TABLE
Modify an existing table's schema:
- `ALTER TABLE ADD`
- `ALTER TABLE MODIFY`
- `ALTER TABLE DROP`

```sql
ALTER TABLE Person ADD Birthday DATE;
ALTER TABLE MODIFY <col_name> <new_options>;
ALTER TABLE DROP <col_name>;
```

# Show Tables
```sql
SHOW TABLES;
```

# DROP TABLE
```sql
DROP TABLE <table>;
```

# Data Manipulation Language (DML)
- `INSERT`: Add a new row to a table
- `UPDATE`: Change values in an existing row
- `DELETE`: Remove rows from the table
- `SELECT`: Display the data stored in rows

## INSERT
```sql
INSERT INTO <table_name>
    VALUES (<value_list>);
INSERT INTO <table_name>
    (<attr_list>)
    VALUES (<value_list>);
INSERT INTO <table_name>
    <another_query>;
```

## WHERE Clause
```sql
WHERE <expression>
```

## UPDATE
```sql
UPDATE <table_name>
SET <attr> = <value> [, <attr> = <value> ...]
[ WHERE <expression> ];
```

## DELETE
```sql
DELETE FROM <table_name>
[ WHERE <expression> ];
```

# Views
A view in SQL is a virtual table that does not store its own data but rather derives it from other tables.

## CREATE VIEW
```sql
CREATE VIEW <view_name>
[( <view_col_name> [, <view_col_name>]...)] # can rename columns here
AS SELECT <attr_name> [, <attr_name>] ...
FROM <source_table_or_view> [, ...]
WHERE <condition>;
```

## DROP VIEW
```sql
DROP VIEW <view_name>;
```

# Advantages of Views
- Base tables should always be designed in Third Normal Form (3NF) or better.
- Views allow easier access to data without complex queries.
- Views enhance security by restricting direct access to base tables.