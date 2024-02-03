del *.h
del advcartridge
del make.bat
builder\script_compiler.exe game.hjt
if %ERRORLEVEL% EQU 0 (
	pause
) else (
	pause
	call make builder/storytllr64.prg
	bin\nesterin.d64
)