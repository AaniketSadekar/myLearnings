-- EXERCISE 4 & 5 -- 

SELECT DISTINCT(dept) FROM employees1;

SELECT * FROM employees1 ORDER BY salary DESC;

SELECT * FROM employees1 LIMIT 3;

SELECT * FROM employees1 WHERE fname LIKE 'A%';

SELECT * FROM employees1 WHERE CHAR_LENGTH(lname) <= 4;




SELECT COUNT(emp_id) FROM employees1;

SELECT dept, COUNT(emp_id) FROM employees1 GROUP BY dept;

SELECT MIN(salary) FROM employees1;

SELECT * FROM employees1 
WHERE salary = (SELECT MAX(salary) FROM employees1);

SELECT  dept, SUM(salary) FROM employees1 WHERE dept = "Loan";

SELECT dept, AVG(salary) FROM employees1 GROUP BY dept;