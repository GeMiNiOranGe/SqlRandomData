# SqlRandomData
**This repo only supports Vietnamese**

This repo is created, because when I insert data into sql using script. If I were to write thousands of lines of code, I would be too lazy to think about what cases the data might encounter. the database will need to insert a lot of data for the application to process.

## How to install
Clone this repo to your machine
```cmd
git clone https://github.com/GeMiNiOranGe/SqlRandomData.git
```
And read how to build and run below

### For `mingw32-make` (recommend)
This instruction is for using `mingw32-make` of `msys2`

Step 1: Build and run
```cmd
mingw32-make build-and-run
```

### For `cmd`
If you aren't using `mingw32-make`, you can use `command prompt`

Step 1: Compile object file
```cmd
g++ -c -Wall -I./sql_random_data/include .\sql_random_data\lib\*.cpp .\main.cpp
```
Step 2: Link object file to `program.exe`
```cmd
g++ -o program.exe *.o
```
Step 3: Run
```cmd
.\program.exe
```
