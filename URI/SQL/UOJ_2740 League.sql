(select concat('Podium: ',team) as name
from league order by position limit 3)
union all
(select concat('Demoted: ',team) as name
from league 
where position in (
	select position from league order by position desc limit 2));