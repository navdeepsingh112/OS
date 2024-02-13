-- CREATE TABLE employees (
--     employee_id INT PRIMARY KEY,
--     first_name VARCHAR(50),
--     last_name VARCHAR(50),
--     email VARCHAR(100),
--     job_title VARCHAR(100)
-- );

-- INSERT INTO employees (employee_id, first_name, last_name, email, job_title) VALUES
-- (1, 'A', 'A', 'a@example.com', 'Software Engineer'),
-- (2, 'B', 'B', 'b@example.com', 'Project Manager'),
-- (3, 'C', 'C', 'c@example.com', 'Data Analyst'),
-- (4, 'D', 'D', 'd@example.com', 'System Administrator'),
-- (5, 'E', 'E', 'e@example.com', 'Human Resources Manager');
-- Select all records from the employees table
SELECT * FROM employees;

-- Select employee names whose date of joining is within the last 30 days
SELECT first_name, last_name FROM employees WHERE doj BETWEEN SYSDATE-30 AND SYSDATE;

-- Select employee names whose date of joining is on a Monday
SELECT first_name, last_name FROM employees WHERE TO_CHAR(doj,'DAY') = 'MONDAY';

-- Select all records from the employees table where date of joining is in February
SELECT * FROM employees WHERE TO_CHAR(doj,'MONTH')='FEBRUARY';

-- Select employee names whose date of joining is within the last 30 days
SELECT first_name, last_name FROM employees WHERE doj BETWEEN SYSDATE-30 AND SYSDATE;














CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    email VARCHAR(100),
    job_title VARCHAR(100),
    date_of_joining DATE -- Adding a column for date of joining
);

INSERT INTO employees (employee_id, first_name, last_name, email, job_title, date_of_joining) VALUES
(1, 'A', 'A', 'a@example.com', 'Software Engineer', '2023-01-15'),
(2, 'B', 'B', 'b@example.com', 'Project Manager', '2023-02-20'),
(3, 'C', 'C', 'c@example.com', 'Data Analyst', '2023-03-10'),
(4, 'D', 'D', 'd@example.com', 'System Administrator', '2023-04-05'),
(5, 'E', 'E', 'e@example.com', 'Human Resources Manager', '2023-02-28');

SELECT * FROM employees;
SELECT first_name, last_name FROM employees WHERE date_of_joining BETWEEN SYSDATE-30 AND SYSDATE;
SELECT first_name, last_name FROM employees WHERE TO_CHAR(date_of_joining, 'DAY') = 'MONDAY';
SELECT * FROM employees WHERE TO_CHAR(date_of_joining, 'MONTH')='FEBRUARY'













--drop table Emp;
--create table Emp(Empno number, Name varchar2(20), doj date);
--insert into Emp values(1, 'Mehak', '13-OCT-2003');
--insert into Emp values(2, 'Akshit', '03-OCT-2004');
--insert into Emp values(3, 'Mitul', '18-NOV-2003');
--insert into Emp values(4,'Vanshika', '16-JUN-2003');
--select *  from  Emp;
--select * from Emp where to_char(doj,'FMDaY')='Tuesday';
--select * from Emp where to_char(doj,'FMMONTH')='NOV';
--select Name from Emp where doj between sysdate-30 and sysdate;
create table Train(Trainno number(6) Primary key, dept_date date, dept_time timestamp, arv_time timestamp);
insert into Train values(12763, '13-FEB-2024', '13-FEB-2024 11:30:00 AM', '15-FEB-2024 6:45:00 PM');
insert into Train values(24517, '17-FEB-2024', '17-FEB-2024 9:30:00 AM', '18-FEB-2024 5:15:00 PM');
insert into Train values(17041, '19-FEB-2024', '19-FEB-2024 10:00:00 PM', '20-FEB-2024 3:50:00 PM');
select * from Train;
select * from Train where to_char(arv_time, 'PM')= 'PM';