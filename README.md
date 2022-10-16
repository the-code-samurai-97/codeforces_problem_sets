# Personal Laptop Version
- Ubuntu 22.04 LTS Jammy Jelly Fish
- Backward Compatability(18.04 LTS Works), For 16.04 LTS bazel doesn't work change the cmake version in the code or update your cmake version 3.13 is enough 


## Check Your Version In Linux Terminal
```sh
bazel --version
```
bazel 5.3.1
```sh
cmake --version
```
cmake version 3.22.1
## Installation
Bazel Build 
```sh
cd codeforces_problem_sets & bazel build //...
```
Bazel Run
```sh
bazel run //src/$PROJECT_NAME:$PROJECT_NAME
```
Cmake Build
```sh
cd codeforces_problem_sets & mkdir build & cd build & cmake .. & make
```
Cmake Run
```sh
cd build
./src/$PROJECT_NAME/$PROJECT_NAME
```


## Development

Want to contribute? Great!

## License

Creative Commons Zero v1.0 Universal

**Free Software, Hell Yeah!**
