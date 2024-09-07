/* Write your PL/SQL query statement below */
select s.student_id,s.student_name , sj.subject_name, count(e.subject_name) as attended_exams 
from Students s cross join Subjects sj left join Examinations e on s.student_id= e.student_id and sj.subject_name = e.subject_name group by s.student_id, s.student_name,sj.subject_name 
order by s.student_id, sj.subject_name