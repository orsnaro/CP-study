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
adda= git add --all  
upa= git push --all  
allgit= git add --all $t git commit -m "# $*" $t git push  
g= git $*  
gl=git log --oneline --all --graph --decorate  $*cexe= g++ $1 -Wall -o active $t active.exe  
a= alias $*  
fb= start https://www.facebook.com/  
vid=cd /d E:\videos\ $t explorer .  
desk= chdir /d c:\Users\OmarPc\Desktop\ $t explorer .  
games= cd /d "C:\Users\OmarPc\Documents\game fast\" $t explorer .  
link= cd /d C:\ProgramData\Microsoft\Windows\Start Menu\Programs  
monk= start https://monkeytype.com/  
crn= g++ $* -Wall -o active $t @echo active.exe is runing . $t active.exe $t del active.exe  
in= cat input.txt  
en=@echo $*  
what= "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Google Chrome.lnk"  
sound= start https://soundcloud.com  
spot= start https://open.spotify.com/search  
ctf=  C:\Users\omar4\Desktop\ctfmon.exe  
klctf= taskkill /im ctfmon.exe /f  
standmem= "E:\programs\list maneger\ISLC v1.0.2.8\Intelligent standby list cleaner ISLC.exe"  
cprn=g++ CP.cpp -o CP.exe $t @echo  CP.exe is running .. $t CP.exe  $t del CP.exe  
log= git log --all --graph --decorate  
cporg=cd /d C:\Users\OmarPc\repo_CPP_COMP_study  
cpremote=start https://github.com/orsnaro/CPP_bgnrCOMP_Study  
remote2= start https://github.com/orsnaro/CRAFTING_INTERPRETERS_study  
com=git commit -m"# $*"  
org2= cd c:\Users\OmarPc\repo_CRAFTING_INTERPRETERS_study\  
chk=git checkout $*  
stube=start https://www.youtube.com/results?search_query="$*"  
comp=start https://codeforces.com/contests $t code C:\Users\OmarPc\repo_CPP_COMP_study\CP.cpp $t start C:\Users\OmarPc\AppData\Local\Programs\pomotroid\Pomotroid$t start https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg  
bye=git push $t shutdown /s  
