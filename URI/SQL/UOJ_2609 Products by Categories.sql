SELECT categories.name, sum(products.amount)
FROM products, categories
where products.id_categories = categories.id
GROUP BY categories.name