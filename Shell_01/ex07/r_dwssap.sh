#! /bin/bash
cat /etc/passwd |
sed '/^#/d' |
awk 'NR%2 == 1' |
cut -d ':' -f 1 |
rev | sort -r |
awk "NR >= $FT_LINE1 && NR <= $FT_LINE2"|
sed s/$/,/g |
tr "\n" " " |
sed s/..$/./g
