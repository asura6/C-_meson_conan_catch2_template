### Minimal C++ project using Meson build with ninja and Conan v2 package manager configured with example Catch2 unit tests

Minimal configuration for a C++ project for Linux with gcc.


See `.vscode/tasks.json` for examples of how to build and run tests.  
See `.vscode/launch.json` for examples of how to run the debugger using gdb.

## vscode
### Debug
- Debug main
- Debug open file (or open test) (Assumes output binary matching path and filename of source file)
### Tasks
- Build (Debug)
- Build (Release)
- Run tests (Debug)

### Extensions
Works out of the box with the extension [C++ TestMate](https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter) which can be used to interactively run and debug tests.

# Dependencies
Make these available on your system.

- meson
- conan (version 2)
- ninja

