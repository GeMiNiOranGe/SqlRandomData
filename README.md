# SqlRandomData
**This repo only supports Vietnamese names**

This repo is created, because when I insert data into sql using script. If I were to write thousands of lines of code, I would be too lazy to think about what cases the data might encounter. the database will need to insert a lot of data for the application to process.

## How to install
Clone this repo to your machine
```cmd
git clone https://github.com/GeMiNiOranGe/SqlRandomData.git
```
And read how to build and run below
### For `mingw32-make` (recommend)
This instruction is for using `mingw32-make` of `msys2`

Step 1: Make build folder
```cmd
mkdir .bin
```
Step 2: Build
```cmd
mingw32-make
```
Step 3: Run
```cmd
mingw32-make run
```

### For `cmd`
If you aren't using `mingw32-make`, you can use `command prompt`

Step 1: Compile object file
```cmd
g++ -c *.cpp
```
Step 2: Link object file to `Program.exe`
```cmd
g++ -o Program.exe *.o
```
Step 3: Run
```cmd
Program.exe
```
