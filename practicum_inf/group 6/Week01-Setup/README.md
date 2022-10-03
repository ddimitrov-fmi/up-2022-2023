# Installation guide for VS Code on Windows

## 1) [VS Code Download](https://code.visualstudio.com/download)

## 2) Add [the C/C++ extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) for code formatting and intellisense

Press **Ctrl + Shift + X** in VSCode to open the extension tab and download the extensions from there

**Shortcut for formatting page: Ctrl + Alt + F**

[optional]: enable auto formatting  - Open the Settings tab (Ctrl + ,) and search for `format on type` and check the option

## 3) [Install compiler Mingw-w64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)
**!!!Important!!!**
After you have chosen a destination folder for mingw, make sure to copy the path somewhere.
We will need it for later.

## 4) Set up environmental variable(For Windows users)
1. Open your search tab
2. Search for `edit environment variables for your account`
3. Click on `PATH` in the user variables tab and then `Edit`
![](http://i.imgur.com/gHPOIh5.png)
4. Add a new path by clicking on `New`
5. Paste the path from the last step and add *'\bin'* at the end
6. You are all set!

You're ready to go :)

## Commands for compiling via terminal

- `g++ $filename` - compiles the code and creates exe with name `a`
- `.\a.exe` - runs the exe compiled from the previous command
- `g++ $filename -o $exefilename` - compiles the code and creates exe with name `exefilename`