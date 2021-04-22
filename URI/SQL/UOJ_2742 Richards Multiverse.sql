select life_registry.name, round(life_registry.omega*1.618,3) as "The N Factor"
from life_registry, dimensions
where life_registry.dimensions_id=dimensions.id and life_registry.name like 'Richard%'
and life_registry.dimensions_id in (select id 
									from dimensions 
									where name = 'C774' or name = 'C875');