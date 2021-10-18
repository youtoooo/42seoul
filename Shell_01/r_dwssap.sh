#! /bin/bash
cat /etc/passwd | sed '/#/d' | sed -n '2,$p'
