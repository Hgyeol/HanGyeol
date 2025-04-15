-- 코드를 작성해주세요
select a.ID, a.GENOTYPE, p.GENOTYPE as PARENT_GENOTYPE
from ECOLI_DATA a
JOIN ECOLI_DATA p
on a.PARENT_ID = p.ID
where conv(p.GENOTYPE & a.GENOTYPE, 10, 2) = conv(p.GENOTYPE, 10, 2)
order by a.ID asc;

# select conv(p.GENOTYPE, 10, 2), conv(a.GENOTYPE, 10, 2), 
# conv(p.GENOTYPE & a.GENOTYPE, 10, 2),
# (conv(a.GENOTYPE, 10, 2) & conv(p.GENOTYPE, 10, 2)),
# conv((conv(a.GENOTYPE, 10, 2) & conv(p.GENOTYPE, 10, 2)), 2, 10)
# from ECOLI_DATA a
# JOIN ECOLI_DATA p
# on a.PARENT_ID = p.ID
# where a.ID = 8;
