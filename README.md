
- Android Studio supports CMake: Which is useful for cross-platform projects
- React Native, dependencies or frameworks you download from NPM are actually just Native apps with bindings that allow invokation from the JavaScript side of the system.
- Pick any react-native dependency and look at it's source code in github for example, you will almost always find an `android/` folder.
- You can either create a new android project with C/C++ support, or you can import your C code to an already existing android project.

To compile and debug native code for your app, you need the following components:

- The Android Native Development Kit (`NDK`):
    - A toolset that lets you use C and C++ code with Android.
    - NDK provides platform libraries that let you manage native activities and access physical device components, such as sensors and touch input.
- `CMake`: an external build tool that works alongside Gradle to build your native library. You don't need this component if you only plan to use ndk-build.
- `LLDB`: the debugger in Android Studio that debugs native code.


`C++` is a Superset language, on top of `C`, so most times C and C++ code are inter-operable.


## Why do we need to do this?
- Why do should be load C/++ apps into our Android Projects?
- You can also link other pre-built binaries/projects

