;= @echo off
;= rem Call DOSKEY and use this file as the macrofile
;= %SystemRoot%\system32\doskey /listsize=1000 /macrofile=%0%
;= rem In batch mode, jump to the end of the file
;= goto:eof
;= Add aliases below here

unalias=alias /d $1
~1=~0,-1  
e.=explorer .
pwd=cd
clear=cls
vi=vim $*
eoff=@echo echo off  
ps=powershell  
cmderr=cd /d "%CMDER_ROOT%"
adda= git add --all  
upa= git push --all  
g= git $*  
a= alias $*  
fb= start https://www.facebook.com/  
desk= chdir /d c:\Users\%USERNAME%\Desktop\ $t explorer .  
games= cd /d "C:\Users\%USERNAME%\Documents\game fast\" $t explorer .  
link= cd /d C:\ProgramData\Microsoft\Windows\Start Menu\Programs  
monk= start https://monkeytype.com/  
in= cat input.txt  
cprn=g++ CP.cpp -o CP.exe $t @echo  CP.exe is running .. $t CP.exe  $t del CP.exe  
cpremote=start https://github.com/orsnaro/CPP_bgnrCOMP_Study  
com=git commit -m"# $*"  
chk=git checkout $*  
bye=git push $t shutdown /s  
stube=start https://www.youtube.com/results?search_query=$1+$2+$3+$4+$5+$6+$7+$8+$9  
bmpremote= start https://github.com/orsnaro/Static_chroma_bmp  
allgit=git add --all $t git commit -m "# $*" $t git push  
mspremote= start https://github.com/orsnaro/MSP-MachineLearning-tasks  
cporg=cd /d C:\Users\%USERNAME%\repo_CPP_COMP_study  
shorts=start C:\Users\%USERNAME%\repo_CPP_COMP_study\shortcuts.txt  
jptopdf= jupyter-nbconvert --to pdfviahtml $*  
bmporg= cd /d C:\Users\%USERNAME%\repo_CHROMA_BMP_proj  
msporg=cd /d C:\Users\%USERNAME%\repo_MSP_ML_study  
interporg=cd /d C:\Users\%USERNAME%\repo_CRAFTING_INTERPRETERS_study  
tree= tree /f  
hex=xxd -c 16 $*  
chex=xxd -c 16 -i $*  
cpplng=clang++ $* -Wall -Wextra -g -o active $t C:\Users\%USERNAME%\repo_CPP_COMP_study\cmder\config\check_file_exist.bat  
hddf= cd /d f:  
grp= grep  -i -n -H -G  $*  
embedorg=cd /d C:\Users\%USERNAME%\repo_embedded-C  
sqlite= sqlite3  
sql= sqlite3  
env= cd /d C:\Users\%USERNAME%\py_env\  
cm=cmder  
st=start $*  
d=exit  
en=echo $*  
tsk=tasklist $1 $b sort  
klterm= taskkill /im WindowsTerminal.exe /f  
jp= start C:\Users\%USERNAME%\win_trm_mnmzd.exe $t jupyter-lab  
cpp=g++ $* -Wall -Wextra -g -o active $t check_file_exist.bat  
allgitstat= allgitstat.bat  
allgitdiff= allgitdiff.bat  
allgitall= allgitall.bat  
ls=ls --show-control-chars -F --color $*  
parkremote=start https://github.com/Gehad-AboElmagd/smart_parking_system  
find=tasklist  $b sort $b  grep -i  "$* *"  
keyorg= cd /d C:\Users\%USERNAME%\repo_KeyRec_tool  
exe-keyrec=pyinstaller --name=KeyRec-Asda --specpath=C:\Users\%USERNAME%\repo_KeyRec_tool\dump --distpath=C:\Users\%USERNAME%\repo_KeyRec_tool\KeyRec-tool\KeyRec-Asda_V2.1.0B\ --onefile --icon=C:\Users\%USERNAME%\repo_KeyRec_tool\dump\KeyRec.ico C:\Users\%USERNAME%\repo_KeyRec_tool\source\keyrec_1window_V2.1.0B.py  
asdarec= KeyRec-Asda  
kltsk=taskkill /im "$*"  /f  
remotes=start https://github.com/  
py=python  $*  
log=git log --all --graph --decorate --oneline  
allcode=code E:\omar-work\all_local_repo_vs.code-workspace  
phporga=cd c:\xampp\htdocs\repo_ps_site\ $t code c:\xampp\htdocs\repo_Ps_site $t C:\xampp\xampp-control.exe $t start http://localhost/repo_ps_site/index.php $t start http://localhost/phpmyadmin  
phporg=cd /d c:\xampp\htdocs\repo_ps_site\  
loga=git log --all --graph --decorate --stat  
logme=git log --all --graph  --decorate --stat --author="Omar Rashad Salem"  
ffind=dir "\*$**" /s  
ffindhere=dir "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\*$**" /s  
movdis= mmt /MoveWindow 1 Process Discord.exe  
orsorg= cd C:\Users\%USERNAME%\repo_Orsnaro  
phone="C:\Program Files\WindowsApps\SAMSUNGELECTRONICSCoLtd.SamsungFlux_4.9.704.0_x64__wyx1vj98g3asy\SamsungFlow.exe"  
dis=powershell.exe -Command "Start-Process powershell -WindowStyle Hidden -ArgumentList 'Start-Process opendiscord_2nd_monitor.bat -WindowStyle Hidden'" $t mmt /MoveWindow 1 Process "Discord.exe"  /WindowLeft -5  /WindowTop 0  /WindowWidth 900   /WindowHeight 1580  
twt=start https://www.twitch.tv/  
gmail= start https://www.gmail.com  
brave="C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe" https://www.google.com/search?q=$1+$2+$3+$4+$5+$6+$7+$8+$9  
bravecog="C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe" --incognito https://www.google.com/search?q=$1+$2+$3+$4+$5+$6+$7+$8+$9  
s=start https://www.google.com/search?q=$1+$2+$3+$4+$5+$6+$7+$8+$9  
spot="C:\Program Files\WindowsApps\SpotifyAB.SpotifyMusic_1.210.760.0_x86__zpdnekdrzrea0\Spotify.exe" $t  mmt /MoveWindow 1  Process "Spotify.exe" /WindowTop 0 /WindowLeft -10 /WindowWidth 910 /WindowHeight 1600  
schrome=chrome "https://www.google.com/search?q=$1+$2+$3+$4+$5+$6+$7+$8+$9" $t mmt /MoveWindow 1  Process "chrome.exe" /WindowTop 0 /WindowLeft -10 /WindowWidth 910 /WindowHeight 1600  
gpt4="C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe" --incognito --app=https://chat.forefront.ai/ $t mmt /MoveWindow 1 Title "Forefront Chat" /WindowLeft -10 /WindowTop 0 /WindowWidth 917 /WindowHeight 1600  
sound=chrome https://soundcloud.com  
bard="C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe" --app=https://bard.google.com/  
gptp="C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe" --app=https://poe.com/ChatGPT  
parkorg=cd /d C:\Users\%USERNAME%\repo_Smart_parking_system\  
oldorg=cd /d "C:\Users\%USERNAME%\repo_Old_projects_stash"  
speed=speedtest.exe  
netlimit=nbcmd.exe application service start  
grep= grep -i "$*"  
tele="C:\Users\OmarPc\AppData\Roaming\Telegram Desktop\Telegram.exe" $t mmt  /MoveWindow 1  Process "Telegram.exe" /WindowTop -10 /WindowLeft 0 /WindowWidth 900 /WindowHeight 1600  
comp=cd /d c:\users\OmarPc\repo_CPP_COMP_study $t start  https://codeforces.com/contests $t code . $t start  C:\Users\OmarPc\AppData\Local\Programs\pomotroid\Pomotroid $t start  https://commons.wikimedia.org/wiki/File:Ascii-proper-color.svg#/media/File:Ascii-proper-color.svg $t start https://en.cppreference.com/w/cpp/language/operator_precedence  
gpt="C:\Program Files\BraveSoftware\Brave-Browser\Application\brave.exe" --app=https://chat.forefront.ai/ $t timeout /t 2 /nobreak $t mmt /MoveWindow 0 Title "Forefront Chat"  /WindowWidth 1365 /WindowHeight 767  
botorg=cd /d C:\Users\OmarPc\repo_Discord_bot_ai\  
what=chrome --app=https://web.whatsapp.com/ $t mmt /MoveWindow 1  Title  "web.whatsapp.com" /WindowTop 0 /WindowLeft -10 /WindowWidth 910 /WindowHeight 1600  
