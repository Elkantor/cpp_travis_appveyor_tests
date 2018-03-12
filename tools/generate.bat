@echo off &&^
echo. &&^
echo --------------------------------- &&^
echo Generate the project build files: &&^
echo --------------------------------- &&^
echo. &&^
cmake -B../build -H.. -G "Ninja" -DCMAKE_BUILD_TYPE:STRING=Release &&^
echo.