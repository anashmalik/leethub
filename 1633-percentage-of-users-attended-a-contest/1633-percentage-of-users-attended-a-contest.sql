select contest_id, round(count(*)/(select count(*)from Users )*100,2) as percentage from Register  group by contest_id order by percentage DESC ,contest_id 