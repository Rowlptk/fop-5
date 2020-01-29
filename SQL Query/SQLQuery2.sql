use AdventureWorks2012

select left('International',5);
select right('International',5);

-- displaying all columns
select * from HumanResources.Employee

--specific column
select BusinessEntityID, JobTitle from HumanResources.Employee

-- concatenate columns
select LoginID + '==>' + JobTitle from HumanResources.Employee

select LoginID + '==>' + JobTitle as Temporary from HumanResources.Employee

-- 
select * from Production.ProductCostHistory

-- computed column
select ProductID, StandardCost, StandardCost*0.15 as discount from Production.ProductCostHistory

-- distint values
select distinct StandardCost from Production.ProductCostHistory

-- top 10 values
select  distinct top 10 StandardCost from Production.ProductCostHistory

-- top 10 precent values
select  distinct top 10 percent StandardCost from Production.ProductCostHistory

-- order by asc,desc
select  distinct top 10 percent StandardCost from Production.ProductCostHistory
order by StandardCost desc 

-- select with where
select StandardCost from Production.ProductCostHistory
where StandardCost>=20 and StandardCost <= 50

-- _ ==> wild character, % ==> string

select * from Person.Person

select * from Person.Person where FirstName like '_a_i'
select * from Person.Person where lastName like 'D%'
select * from Person.Person where PersonType like '[GSI][CN]'
select * from Person.Person where PersonType like '[^G]C'

-- Aggregate Function
-- avg, sum,  count, min, max

select * from Sales.SalesOrderDetail

select AVG(UnitPrice) as Average,
SUM(UnitPrice) as TotalSum,
COUNT(UnitPrice) as TotalCount,
MIN(UnitPrice) as MinimumValue,
MAX(UnitPrice) as MaximumValue
from Sales.SalesOrderDetail

--group by with having
select * from Production.WorkOrderRouting

select WorkOrderID, Avg(ActualResourceHrs) from Production.WorkOrderRouting group by WorkOrderId
having avg(ActualresourceHrs) < 3

-- join, view, stored procedure, trigger, error handling

-- join 1. inner join ==> common ==> intersection of set
-- outer 2. left outer join ==> A==> all value, B ==> common
-- 3. right outer join ==> B==> all value, A ==> common
-- 4. full outer join ==> All Values ==> union of set

select * from Person.Person
select * from person.Address

-- inner join
select A.firstName , A.LastName, B.city
from 
Person.person A
inner join 
person.Address B
on
A.BusinessEntityID = B.AddressID 

-- outer join
create view vw_person as
select A.firstName , A.LastName, B.city, A.BusinessEntityID, B.AddressID
from 
Person.person A
left outer join 
person.Address B
on
A.BusinessEntityID = B.AddressID 
--where A.FirstName = 'Ken';

select * from vw_person


