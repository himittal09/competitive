select Person.FirstName, Person.LastName, Address.City, Address.State 
from person 
left join Address 
on Person.PersonId = Address.PersonId;