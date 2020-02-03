-- stored procedure
use fop5

create table myTable
(
	id int,
	name varchar(30),
	[roll no] int
)

create procedure sp_myprocess
@id int,
@name varchar(30),
@roll int,
@stmt varchar(30) = ''
as
Begin
	if @stmt = 'insert'
	begin
		insert into myTable values(@id,@name,@roll)
	end
	if @stmt = 'select'
	begin
		select * from myTable;
	end
	if @stmt = 'delete'
	begin
		delete from myTable where id = @id; 
	end
	if @stmt = 'update'
	begin
		update myTable set name = @name, [roll no] = @roll
		where id = @id
	end
end
exec sp_myprocess 3, 'Ravan', 1, 'insert'
exec sp_myprocess 1, 'Ram', 10, 'insert'
exec sp_myprocess 2, 'Shyam', 11, 'insert'
exec sp_myprocess 1, 'Ram', 10, 'select'
exec sp_myprocess 2, 'Hari', 20, 'update'
exec sp_myprocess 3, '', 0, 'delete'

create trigger mytrigger
on myTable
for delete
as
	if 1 in (select [roll no] from deleted)
	begin
		print 'This Roll number cannot be deleted';
		rollback transaction;
	end

-- error handling

begin try
	declare @num int
	select @num = 217/0;
	print @num;
end try
begin catch
	print 'Some Error'
	print ERROR_MESSAGE();
	print ERROR_SEVERITY();
	print ERROR_NUMBER();
	print ERROR_LINE();
	print ERROR_STATE();
	throw;
end catch



