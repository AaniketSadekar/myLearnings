-- CLAUSE --

-- DISTINCT --
SELECT DISTINCT(dept) FROM employees1;

-- ORDER BY -- 
SELECT * FROM employees1 ORDER BY fname;
SELECT * FROM employees1 ORDER BY fname DESC;

-- LIKE -- 
SELECT * FROM employees1 WHERE fname LIKE 'a%';
SELECT * FROM employees1 WHERE fname LIKE '%a%';
SELECT * FROM employees1 WHERE fname LIKE '_____';

-- LIMIT -- 
SELECT * FROM employees1 LIMIT 3;
SELECT * FROM employees1 LIMIT 3,5;
SELECT * FROM employees1 ORDER BY salary DESC LIMIT 1;

-- COUNT --
SELECT COUNT(*) FROM employees1;
SELECT COUNT(DISTINCT(dept)) FROM employees1;

-- GROUP --
SELECT dept, COUNT(emp_id) FROM employees1 GROUP BY dept;

-- MAX -- 
SELECT MAX(salary) FROM employees1;

-- MIN -- 
SELECT MIN(salary) FROM employees1;

-- SUBQUEARY -- 
SELECT emp_id, fname, salary FROM employees1
WHERE salary = (SELECT MAX(salary) FROM employees1);

-- SUM -- 
SELECT SUM(salary) FROM employees1;

-- AVG --
SELECT AVG(salary) FROM employees1;

