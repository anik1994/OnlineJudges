select name from products
where amount between 10 and 20 and 
id_providers in (select id 
				 from providers 
				 where name like 'P%');