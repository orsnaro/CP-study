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
shorts=start C:\Users\OmarPc\repo_CPP_COMP_study\shortcuts.txt  
origin=cd /d C:\Users\OmarPc\repo_CPP_COMP_study  
adda= git add --all  
upa= git push --all  
remote= start https://github.com/orsnaro/CPP_bgnrCOMP_Study  
allgit= git add --all $t git commit -m "# $*" $t git push  
g= git $*  
com= git commit -m"# $*"  
gl=git log --oneline --all --graph --decorate  $*cexe= g++ $1 -Wall -o active $t active.exe  
a= alias $*  
fb= start https://www.facebook.com/  
tube= start https://www.youtube.com/feed/subscriptions  
vid=cd /d E:\videos\ $t explorer .  
desk= chdir /d c:\Users\OmarPc\Desktop\ $t explorer .  
games= cd /d "C:\Users\OmarPc\Documents\game fast\" $t explorer .  
link= cd /d C:\ProgramData\Microsoft\Windows\Start Menu\Programs  
monk= start https://monkeytype.com/  
purgsmem="E:\programs\list maneger\ISLC v1.0.2.8\Intelligent standby list cleaner ISLC.exe"  
bye= shutdown /s  
crn= g++ $* -Wall -o active $t @echo active.exe is runing . $t active.exe $t del active.exe  
in= cat input.txt  
en=@echo $*  
what= "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Google Chrome.lnk"  
wh= "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Google Chrome.lnk"  spot= start https://open.spotify.com/search  
sound= start https://soundcloud.com  
cprn=g++ CP.cpp -o CP.exe $t @echo  CP.exe is runing .. $t CP.exe  $t del CP.exe  
comp=start https://vjudge.net/contest $t start https://codeforces.com/contests $t start https://classroom.google.com/u/0/c/NDg4NTYxNTEzNzEy $t code C:\Users\OmarPc\repo_CPP_COMP_study\CP.cpp $t start C:\Users\OmarPc\AppData\Local\Programs\pomotroid\Pomotroid.exe  
spot= start https://open.spotify.com/search  
