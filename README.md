# Disney Infinity 3.0: Gold Edition Decomp
This is a WIP decompilation of Disney Infinity 3.0: Gold Edition for Windows.

## Setup
This project uses Visual Studio 2005 and [decomp.me](https://decomp.me), as well as strongly recommends Binary Ninja  
Visual Studio 2005 is split into 2 discs, [here](https://archive.org/details/microsoft-visual-studio-2005-professional-edition-disc-1) and [here](https://archive.org/details/microsoft-visual-studio-2005-msdn-library-disc-2_202103)  
Binary Ninja is found [here](https://binary.ninja)
### Setting Up Visual Studio 2005
1. Combine open both iso as discs or through a zip program and combine them in 1 directory
2. Run setup.exe
3. Create a new project for C++
4. Fork this repo
5. Use git or GitHub desktop to clone the repo into <VS2005 directory>/projects/<proj name>/<proj name>/
### Setting Up Binary Ninja for decomp.me
1. Download and Install Binary Ninja
2. Go to `Settings` -> `Architecture` -> `x86.disassembly` and change `BN_INTEL` to the ASM syntax you're comfortable with (if unknown, use `INTEL`)
3. Go to [this]() Google Drive link and download the .bndb file (150MB)
   a. NOTE: flipping instructions 2 and 3 will require restarting the application to get the correct settings.
4. Open the file
### Decompiling a function
1. Copy and paste the function from Binary Ninja into decomp.me
2. Use the following regexps to remove the unnecessary additions Binary Ninja adds:
   a. `\w+  \w+ +`
   b. ` +\{.+\}`
3. The context is a header file, put in the stuff you think the program will need to know before running. (You can also do this after creating the scratch)
