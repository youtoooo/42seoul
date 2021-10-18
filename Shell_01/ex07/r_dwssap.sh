#! /bin/bash
cat /etc/passwd | 
	sed '/^#/d' | 
	awk 'NR%2 == 1' | 
	cut -d ':' -f 1 | 
	rev | 
	sort -r |
	awk -v L1=FT_LINE1 -v L2=FT_LINE2 
	{start = L1 < L2 ? L1 : L2;
	end = L1 < L2 ? L2 : L1;
	if (NR >= start && NR <= end)
		{ printf("%s",$0);}
		if (NR != end)
			{printf(", ");}
				
END{printf(".");}



cat /etc/passwd | sed '/^#/d' | awk 'NR%2 == 1' | cut -d ':' -f 1 | rev | sort -r | awk 'NR>=7&&NR<=15'| sed s/$/,/ | tr "\n" " "
