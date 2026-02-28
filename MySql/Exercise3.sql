-- EXERCISE 3 --

SELECT CONCAT_WS(':',emp_id,fname,desig,dept) FROM employees1;

SELECT CONCAT_WS(':',emp_id,CONCAT(fname,' ',lname),desig,dept) FROM employees1;

SELECT CONCAT_WS(':',emp_id,fname,UPPER(desig),dept) FROM employees1;

SELECT CONCAT(LEFT(dept,1),emp_id), fname FROM employees1;