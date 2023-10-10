USE CSE3

CREATE TABLE vedansh10_Dept(
deptno INT PRIMARY KEY,
deptname VARCHAR(50),
LOC VARCHAR(50));
INSERT INTO vedansh10_Dept(deptno,deptname,LOC)
VALUES(20,'Research','Dallas'),(10,'Accounting','New York'),(30,'Sales','Chicago'),(40,'Operations','Boston');

CREATE TABLE vedansh10_Emp(
empno INT,
empname VARCHAR(50),
job VARCHAR(50),
mgrno INT,
hire_date DATE,
Salary INT,
comm INT,
deptno INT FOREIGN KEY REFERENCES vedansh10_Dept(deptno));
INSERT INTO vedansh10_Emp(empno,empname,job,mgrno,hire_date,Salary,comm,deptno)
VALUES
    (7369, 'Smith', 'clerk', 7902, '1980-12-17', 800, Null, 20),
    (7499, 'Allen', 'Salesman', 7698, '1981-02-20', 1600, 300, 30),
    (7521, 'Ward', 'Salesman', 7698, '1981-02-22', 1250, 500, 30),
    (7566, 'Jones', 'Manager', 7839, '1981-04-02', 2975, NULL, 20),
    (7654, 'Martin', 'Salesman', 7698, '1981-09-28', 1250, 1400, 30),
    (7698, 'Blake', 'Manager', 7893, '1982-12-09', 3000, NULL, 30),
    (7782, 'Clark', 'Manager', 7839, '1981-06-09', 2450, NULL, 10),
    (7788, 'Scott', 'Analyst', 7566, '1981-06-09', 3000, NULL, 20),
    (7839, 'King', 'President', NULL, '1981-11-17', 5000, NULL, 10),
    (7844, 'Turner', 'Salesman', 7698, '1981-09-08', 1500, NULL, 30),
    (7876, 'Adams', 'Clerk', 7788, '1981-05-01', 2850, NULL, 20),
    (7900, 'James', 'Clerk', 7698, '1981-12-03', 950, NULL, 30),
    (7902, 'Ford', 'Analyst', 7599, '1981-12-03', 3000, NULL, 20),
    (7934, 'Miller', 'Clerk', 7782, '1982-01-23', 1300, NULL, 10);

CREATE TABLE vedansh10_Salgrade(
grade INT,
lowsal INT,
hisal INT);
INSERT INTO vedansh10_Salgrade(grade,lowsal,hisal)
VALUES(1,700,1200),(2,1201,1400),(3,1401,2000),(4,2001,3000),(5,3001,9999);

-- Q1. List the total information of EMP table along with Dname and
--Loc of all the emps working under �ACCOUNTING� or
--�RESEARCH� in the asc Deptno.
SELECT e.*, d.deptname AS Dname, d.LOC
FROM vedansh10_Emp e
JOIN vedansh10_Dept d ON e.deptno = d.deptno
WHERE d.deptname IN ('Accounting', 'Research')
ORDER BY d.deptno ASC;

--Q2. Display the Empno, Ename, Sal, Dname, Log, Deptno,Job of all emps working at CHICAGO or working for
--ACCOUNTING dept with Ann sal &gt;28000, but the Sal should not be = 3000 or 2800, Who doesn�t belongs to
--the Manager and Whose No. having a digit �7� or �8� in 3rd position in the asc order of Deptno and desc order of Job.
SELECT e.empno, e.empname AS Ename, e.Salary AS Sal, 
       d.deptname AS Dname, d.LOC AS Log, e.deptno, e.job
FROM vedansh10_Emp e
JOIN vedansh10_Dept d ON e.deptno = d.deptno
WHERE 
    (d.LOC = 'Chicago' OR d.deptname = 'Accounting') 
    AND e.Salary > 28000 
    AND e.Salary NOT IN (3000, 2800) 
    AND e.job NOT LIKE 'Manager'
    AND (e.empno LIKE '__7%' OR e.empno LIKE '__8%')
ORDER BY e.deptno ASC, e.job DESC;

--Q3. List the emps whose jobs same as SMITH or ALLEN.
SELECT*
FROM vedansh10_Emp
WHERE job IN ('SMITH','ALLEN');

--Q4. List the emps whose Salary is greater than his Manager�s salary.
SELECT e.*
FROM vedansh10_Emp e
JOIN vedansh10_Emp mgr ON e.mgrno = mgr.empno
WHERE e.Salary > mgr.Salary;

--Q5. List all Grade 4 emps working for Research Dept along with Grade and Dname.
SELECT e.*, sg.grade, d.deptname AS Dname
FROM vedansh10_Emp e
JOIN vedansh10_Salgrade sg ON e.Salary BETWEEN sg.lowsal AND sg.hisal
JOIN vedansh10_Dept d ON e.deptno = d.deptno
WHERE sg.grade = 4 AND d.deptname = 'Research';

--Q6. Display the emps who do not have any persons working under them.
SELECT e.*
FROM vedansh10_Emp e
LEFT JOIN vedansh10_Emp sub ON e.empno = sub.mgrno
WHERE sub.empno IS NULL;

--Q7. Display the emps whose job is not �Manager� but they are managers to some other employees.
SELECT e.*
FROM vedansh10_Emp e
JOIN vedansh10_Emp sub ON e.empno = sub.mgrno
WHERE e.job <> 'Manager' AND e.empno IN (SELECT DISTINCT mgrno FROM vedansh10_Emp WHERE mgrno IS NOT NULL);

--Q8. List the Manager name and total salary of the employees reporting to them in desc order of total salary and asc order of
--Manager Name.
SELECT 
    mgr.empname AS Manager_Name, 
    SUM(e.Salary) AS Total_Salary
FROM vedansh10_Emp e
JOIN vedansh10_Emp mgr ON e.mgrno = mgr.empno
GROUP BY mgr.empname
ORDER BY Total_Salary DESC, Manager_Name ASC;

--Q9. List the Manager name and total salary of the employees reporting to them where total salary of employees reporting to
--them is in the range of 1200 to 3000 $ in desc order of total salary and asc order of Manager Name.
SELECT 
    mgr.empname AS Manager_Name, 
    SUM(e.Salary) AS Total_Salary
FROM vedansh10_Emp e
JOIN vedansh10_Emp mgr ON e.mgrno = mgr.empno
GROUP BY mgr.empname
HAVING SUM(e.Salary) BETWEEN 1200 AND 3000
ORDER BY Total_Salary DESC, Manager_Name ASC;
