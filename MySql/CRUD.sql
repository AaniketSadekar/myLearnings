-- BASIC & CRUD OPERATIONS --

-- List Exiting Databases --
SHOW DATABASES;

-- Create New Databases --
CREATE DATABASE mysql_db;

-- Working with a Database --
USE mysql_db;

-- Current Working Database --
SELECT DATABASE();

-- Delete Database --
DROP DATABASE mysql_db;

-- Create Table --
CREATE TABLE person(
	id INT,
    name VARCHAR(50),
    city VARCHAR(50)
);

-- Checking your table --
DESC person;

-- Insert Data into table
-- INSERT INTO person(id,name)
-- VALUES (101,"Raju"),
-- 	   (102,"Sham"),
--        (103,"Paul"),
--        (104,"Alex");


INSERT INTO person
VALUES (101,"Raju","Delhi"),
	   (102,"Sham","Mumbai"),
       (103,"Paul","Chennai"),
       (104,"Alex","Pune");


-- Reading Data From a Table --
SELECT * FROM person;
SELECT name,city FROM person;

-- Modify / Update Data From a Table --
UPDATE person
	SET city = "Satara" 
    WHERE id = 103;


-- Delete Data From a Table --
DELETE FROM person 
	WHERE id = 104;
