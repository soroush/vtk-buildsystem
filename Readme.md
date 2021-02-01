# Purose

This explains the bug reported in https://github.com/microsoft/vcpkg/issues/12906.

# Project Structure and Dependencies:

```
root/
├─ foo/           # Shared Library. Dependencies: VTK
├─ bar/           # Shared Library. Dependencies: VTK
├─ application/   # Executable. Dependencies: Foo, Bar, VTK
```

# How To Reproduce

Install VTK using vcpkg:

```
vcpkg.exe vtk[qt,cuda,paraview,opengl]
```

Assuming you have vcpkg, cmake and VTK installed and cloned this repo, do:

```
mkdir build
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=c:/vcpkg/scripts/buildsystems/vcpkg.cmake ..
```

Don't forget to set your vcpkg path if it is different.