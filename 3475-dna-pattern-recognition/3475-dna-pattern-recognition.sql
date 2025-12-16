# Write your MySQL query statement below
select *,
case when left(dna_sequence,3)='ATG' then 1 else 0 end as has_start,
case when RIGHT(dna_sequence,3)='TAA' OR RIGHT(dna_sequence,3)='TAG' OR RIGHT(dna_sequence,3)='TGA' then 1 else 0 end as has_stop,
case when INSTR(dna_sequence,'ATAT') >0 then 1 else 0 end as has_atat,
case when INSTR(dna_sequence,'GGG') >0 then 1 else 0 end as has_ggg
from Samples;