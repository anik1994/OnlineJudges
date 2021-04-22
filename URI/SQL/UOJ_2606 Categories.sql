SELECT products.id, products.name
FROM products, categories
where products.id_categories = categories.id  
	and categories.name like 'super%';