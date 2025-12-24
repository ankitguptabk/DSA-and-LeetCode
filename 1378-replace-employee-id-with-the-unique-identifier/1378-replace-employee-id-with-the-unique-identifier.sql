# Write your MySQL query statement below
select x.unique_id, y.name
from Employees y left join EmployeeUNI x on x.id=y.id;