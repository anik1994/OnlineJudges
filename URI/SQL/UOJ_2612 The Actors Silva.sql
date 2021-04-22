select distinct(movies.id),movies.name
from movies,genres,actors,movies_actors
where (movies.id_genres=genres.id and movies_actors.id_movies=movies.id and movies_actors.id_actors=actors.id)
and (actors.name='Marcelo Silva' or actors.name='Miguel Silva') and genres.description='Action';