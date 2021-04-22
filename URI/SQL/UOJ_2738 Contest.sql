select candidate.name, 
cast((((score.math*2)+(score.specific*3)+(score.project_plan*5))/10)as decimal(16,2)) as avg
from candidate, score
where candidate.id = score.candidate_id
order by avg desc;