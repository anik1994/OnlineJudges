SELECT products.name, providers.name
FROM products, providers, categories
where products.id_categories = categories.id 
	and products.id_providers = providers.id 
	and products.id_categories = 6;
