-- Exercise 1 & 2--


CREATE TABLE employees(
	emp_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL,
    desig VARCHAR(50) NOT NULL DEFAULT 'Probation',
    dept VARCHAR(50) NOT NULL
    );
    
DESC employees;

INSERT INTO employees
VALUES (101,"Raju","Manager","Loan"),
	   (102,"Sham","Cashier","Cash"),
       (103,"Paul","Associate","Loan"),
       (104,"Alex","Accountant","Account"),
       (105,"Victor","Associate","Deposit");
       
       
SELECT * FROM employees;

SELECT emp_id, name FROM employees;

SELECT * FROM employees WHERE dept = "Loan";

SELECT * FROM employees WHERE emp_id = 101;

SELECT emp_id,name FROM employees WHERE emp_id = 101;

UPDATE employees
SET dept = "IT"
WHERE emp_id = 103;

DELETE FROM employees WHERE emp_id = 105;