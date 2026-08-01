# Write your MySQL query statement below
Select (
    Select distinct salary from employee
    ORDER BY SALARY desc
    LIMIT 1 OFFSET 1
) AS secondHighestSalary;