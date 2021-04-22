(select name, customers_number from lawyers where customers_number = (select max(customers_number) from lawyers))
union all
(select name, customers_number from lawyers where customers_number = (select min(customers_number) from lawyers))
union all
(select 'Average' as name, cast(avg(customers_number) as int) from lawyers);
