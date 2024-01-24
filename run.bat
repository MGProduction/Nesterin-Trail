del *.h
del advcartridge
del make.bat
set PATH=%PATH%;..\..\bin\
script_compiler.exe game.hjt
if %ERRORLEVEL% EQU 0 (
	pause
) else (
	pause
	call make ../../bin/storytllr64.prg
	"C:\Users\marco\Dropbox\Cave\dev\8bit\C64\bin\WinVICE-2.4\x64.exe" bin\nesterin.d64
)