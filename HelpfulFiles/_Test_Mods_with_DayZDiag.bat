::	--------	SIMPLE BATCH FILE TO TEST LOCAL DAYZ MODS	--------
::	* Change paths if your DayZ client, server or 7zip apps are installed in non-default locations
@ECHO OFF
CLS
ECHO(& ECHO(

:: 	--------	MOD(S) SETUP	--------
::	* Keep 'SET "BASEMODLIST=-mod="' as a minimum, or include optional CF/COT/DF if you need admin tools
REM SET "BASEMODLIST=-mod=C:\Program Files (x86)\Steam\steamapps\common\DayZ\!Workshop\@CF;C:\Program Files (x86)\Steam\steamapps\common\DayZ\!Workshop\@Community-Online-Tools;C:\Program Files (x86)\Steam\steamapps\common\DayZ\!Workshop\@Dabs Framework;"
SET "BASEMODLIST=-mod="
SET "TESTMOD=P:\MyScreensRightHere;"

::	--------	CONFIG SETUP	--------
::	* First option points to vanilla cherno cfg, profile and mission files (needs DayZServer installed)
::	* Second option points to leaner setup (needs P:\singleplayer.ChernarusPlus setup)
SET CONFIG="-config=C:\Program Files (x86)\Steam\steamapps\common\DayZServer\serverDZ.cfg"
SET PROFILE="-profiles=C:\Program Files (x86)\Steam\steamapps\common\DayZServer\ServerProfile"
SET MISSION="-mission=C:\Program Files (x86)\Steam\steamapps\common\DayZServer\mpmissions\dayzOffline.chernarusplus"
:: OR use this, comment out the one you dont like
SET CONFIG="-config=P:\singleplayer.ChernarusPlus\serverDZ.cfg"
SET PROFILE="-profiles=P:\singleplayer.ChernarusPlus\ServerProfile"
SET MISSION="-mission=P:\singleplayer.ChernarusPlus"

:: 	--------	BACKUP (optional)	--------
::	* Having learned the HARD WAY, we back up our packed mod folder every single run (needs 7zip installed)
MKDIR P:\_baks 2>NUL
SET "TS=%DATE:~-2%%DATE:~4,2%%DATE:~7,2%%TIME:~0,2%%TIME:~3,2%"
"C:\Program Files\7-Zip\7z.exe" a "P:\_baks\%TS%.7z" "%TESTMOD:;=%\*" >NUL

::	--------	RUN TIME	--------
::	* Display summary, go to default client folder and run DayZDiag with above params
ECHO. MODS: "%BASEMODLIST%%TESTMOD%"
ECHO. CONFIG: %CONFIG%
ECHO. PROFILE: %PROFILE% 
ECHO. MISSION: %MISSION%
ECHO. BACKUP: "P:\_baks\%TS%.7z"
C:
CD "C:\Program Files (x86)\Steam\steamapps\common\DayZ"
.\DayZDiag_x64.exe %PROFILE% %CONFIG% "%BASEMODLIST%%TESTMOD%" %MISSION% -filePatching -window 
ECHO(& ECHO(
PAUSE
