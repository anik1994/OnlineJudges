select products.name, categories.name
from products, categories
where products.id_categories = categories.id
and products.amount>100 and products.id_categories in (1,2,3,6,9);