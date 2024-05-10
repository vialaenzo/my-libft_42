@echo off
set /p commit_message="Entrez votre message de commit : "
git commit -m "%commit_message%"
pause
