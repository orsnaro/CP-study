;= @echo off
;= rem Call DOSKEY and use this file as the macrofile
;= %SystemRoot%\system32\doskey /listsize=1000 /macrofile=%0%
;= rem In batch mode, jump to the end of the file
;= goto:eof
;= Add aliases below here

unalias=alias /d $1
ls=ls --show-control-chars -F --color $*
~1=~0,-1  
e.=explorer .
pwd=cd
clear=cls
vi=vim $*
brave= start brave  
eoff=@echo echo off  
ps=powershell  
cmderr=cd /d "%CMDER_ROOT%"
hdd=cd /d E:  
games= cd "C:\Users\OmarPc\Documents\game fast\"  
link= cd C:\ProgramData\Microsoft\Windows\Start Menu\Programs  
shorts=start C:\Users\OmarPc\repo_CPP_COMP_study\shortcuts.txt  
desk= chdir c:\Users\OmarPc\Desktop\  
origin=cd /d C:\Users\OmarPc\repo_CPP_COMP_study  
adda= git add --all  
upa= git push --all  
remote= start https://github.com/orsnaro/CPP_bgnrCOMP_Study  
allgit= git add --all $t git commit -m "# $*" $t git push  
g= git $*  
com= git commit -m"# $*"  
gl=git log --oneline --all --graph --decorate  $*cexe= g++ $1 -Wall -o active $t active.exe  
cpex= g++ CoachAcademy.cpp  -o CA.exe $t CA.exe  
crn= g++ $* -Wall -o active $t active.exe  
