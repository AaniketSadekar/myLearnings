-- String Function --

CREATE TABLE employees1(
	emp_id INT PRIMARY KEY AUTO_INCREMENT,
    fname VARCHAR(50) NOT NULL,
    lname VARCHAR(50) NOT NULL,
    desig VARCHAR(50) DEFAULT "Probation",
    dept VARCHAR(50) NOT NULL
    );
    
INSERT INTO employees1
VALUES (101,"Raju","Rastogi","Manager","Loan"),
	   (102,"Sham","Mohan","Cashier","Cash"),
       (103,"Baburao","Apte","Associate","Loan"),
       (104,"Paul","Philip","Accountant","Account"),
       (105,"Alex","Watt","Associate","Deposit");
       
       
-- CONCAT -- 
SELECT emp_id, CONCAT(fname," ",lname) AS FULL_NAME FROM employees1;

-- CONCAT_WS --
SELECT CONCAT_WS(':',emp_id,fname,desig) FROM employees1;

-- SUBSTRING OR SUBSTR --
SELECT SUBSTRING(desig,1,3) FROM employees1;
SELECT SUBSTR(desig,1,3) FROM employees1;

-- REPLACE --
SELECT REPLACE(fname, "Paul","Totala") FROM employees1;

-- REVERSE --
SELECT REVERSE(emp_id) FROM employees1;

-- UPPER OR UCASE 
SELECT UPPER(fname) FROM employees1;
SELECT UCASE(fname) FROM employees1;

-- LOWER OR LCASE --
SELECT LOWER(fname) FROM employees1;
SELECT LCASE(fname) FROM employees1;

-- CHAR_LENGTH --
SELECT CHAR_LENGTH(fname) FROM employees1;

-- INSERT --
SELECT INSERT("Hello Wassup",6,0,"Raju");

-- LEFT -
SELECT LEFT(desig,3) FROM employees1;

-- RIGHT --
SELECT RIGHT(desig,3) FROM employees1;

-- REPEAT --
SELECT REPEAT('ha ',5);

-- TRIM --
SELECT TRIM("        MYSQL");


