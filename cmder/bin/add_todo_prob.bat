@echo off

setlocal
set oldpath=%cd%
cd C:\Users\OmarPc\repo_CPP_COMP_study\


rem Specify the folder to count the files in.
set todoFolder=todo_probs\

rem Get the number of files in the folder.
set /a FILECOUNT=0
for /f %%a in ('dir /b /a-d-s-h "%todoFolder%"') do set /a FILECOUNT+=1

copy CP.cpp  %todoFolder%\prob_no_%FILECOUNT%.cpp

git add .\CP.cpp .\todo_probs\ & git commit -m "#Done: $*" & git push


cd %oldpath%
endlocal