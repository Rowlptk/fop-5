/* create database */
create database qwerty

-- use database
use qwerty

-- delete database
drop database qwerty

create database fop5

use fop5

-- creating a table
create table students
(
	std_id int,
	std_name varchar(50)
)

-- view table
select * from students

-- data insert
insert into students values (101,'Aniz'), (102,'Sushan');

-- modify datatype in column
alter table students alter column std_id varchar(10);

insert into students values('101A', 'Bimal');

-- add column
alter table students add [contact no] numeric(10,0)

-- update data
update students
set [contact no] = 9801200111
where std_id = '101'

select * from students

-- delete column
alter table students drop column [contact no]

-- delete row/rows
delete from students where std_id = '101'

-- make table empty
truncate table students

--delete table
drop table students

-- constraint
create table school
(
	id int identity(101,1),
	name varchar(50) not null,
	contact numeric(10,0) unique not null,
	email varchar(80) null,
	fee money default 1000,
	mark int not null check (mark>=40 and mark<=100)
)

insert into school(name, contact, email, fee, mark)
values ('Smith', 9801200111, 'smith@gmail.com', 2345.90, 60)

insert into school(name, contact, email, fee, mark)
values ('John Doe', 9801200112, 'john@gmail.com', 2346, 70)

-- error not null
insert into school( contact, email, fee, mark)
values ( 9801200113, 'john@gmail.com', 2346, 70)

-- error unique
insert into school(name, contact, email, fee, mark)
values ('Johny Doe', 9801200112, 'john@gmail.com', 2346, 70)

-- email null case 
insert into school(name, contact, fee, mark)
values ('Johny Doe', 9801200113, 2346, 70)

-- default case
insert into school(name, contact, mark)
values ('Johny Doe', 9801200114, 70)

-- error in check
insert into school(name, contact, email, fee, mark)
values ('Johny Doe', 9801200115, 'john@gmail.com', 2346, 30)

select * from school

-- Pk and Fk

create table robocamp (
	id int primary key,
	name varchar(30),
	age tinyint
)
go
create table teams
(
	id int foreign key references robocamp(id),
	teamName varchar(30)
)

select * from robocamp
select * from teams

insert into robocamp values(101,'Ram',23),(102, 'Shyam',24),(103,'Hari',25);

insert into teams values(101,'Killers'),(102,'Killers'),(103,'Terminator'),(101,'google')


-- error in Fk due to Pk
insert into teams values (104,'Zombies')

AdventureWorks2012/2014 ==> Inbuilts ==> 10000000 ==> advanced sql commands











