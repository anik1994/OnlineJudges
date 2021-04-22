select customers.name, rentals.rentals_date
from customers, rentals
where rentals.id_customers=customers.id
and rentals.rentals_date >= '2016-09-01' AND rentals.rentals_date <  '2016-10-01' ;