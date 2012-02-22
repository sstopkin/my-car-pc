@Echo Off
:BEGIN
ping -n 1 -w 1 192.168.0.1
If errorlevel 1 Goto BEGIN
If errorlevel 0 Goto FLASH
Goto END

:FLASH
Echo *** Start Flashing ****
tftp -i 192.168.0.1 put oleg.trx
:END