# 2018-01-08

Getting back to it for a couple hours to check the latest swagger codegen:

```sh
cd ~/src/tmp/swagger-codegen-master
mvn clean package 

SWAGGER_ROOT=~/src/tmp/swagger-codegen-feature-cpprest_fix_modelbase_includes
cd ~/src/github_jm/senaps-cpp/tmp
java -jar $SWAGGER_ROOT/modules/swagger-codegen-cli/target/swagger-codegen-cli.jar generate -i https://sensor-cloud.io/api-docs/sensorcloud-spec.json -l cpprest -o ./

```

Switching to windows to try to seed out compilation errors. Need vs pro

```cmd
cd c:\src\github_jm\senaps-cpp\client\build
cmake -G "Visual Studio 15 2017" ..
:: Not a typo: needed to cmake -G twice otherwise first
::  The CMAKE_C_COMPILER:
::    C:/Program Files (x86)/Microsoft Visual Studio/2017/Professional/VC/Tools/MSVC/14.11.25503/bin/HostX86/x86/cl.exe
::  is not a full path to an existing compiler tool.
cmake -G "Visual Studio 15 2017" ..
```

Remember that setting the vs env var first via the dev prompt or scripts you usually use (msvs) may have make it work first time around.

Need to install the following libraries:

```
vcpkg.exe install cpprest:x64-windows
vcpkg.exe install boost-uuid:x64-windows
```

```
Error	C2665	'io::swagger::client::model::ModelBase::toJson': none of the 9 overloads could convert all the argument types	SenapsCpp	C:\src\github_jm\senaps-cpp\client\api\DefaultApi.cpp	1225	
```
the argument body is of type `boost::optional<std::shared_ptr<CollectionPut>>`

# 2017-10-18

https://sensor-cloud.io/api-docs/sensorcloud-spec.json

Found out about swagger, now known as OpenAPI

```bash
mkdir -p ~/src/github_jm/senaps-cpp/tmp
cd ~/src/github_jm/senaps-cpp/tmp
SWAGGER_ROOT=~/src/tmp/swagger-codegen-master
java -jar $SWAGGER_ROOT/modules/swagger-codegen-cli/target/swagger-codegen-cli.jar generate -i https://sensor-cloud.io/api-docs/sensorcloud-spec.json -l cpprest -o ./
```

```sh
mkdir build
cd build/
cmake ..
```

CMake Error at CMakeLists.txt:39 (message): Failed to find cpprest SDK (or missing components).  Double check that "CPPREST_ROOT" is properly set

[I think this is what cpprest is](https://github.com/Microsoft/cpprestsdk)

```sh
sudo apt-get install libcpprest-dev
```

Seems I need to modify the cmakelists generated, so:
```sh
cd ~/src/github_jm/senaps-cpp
mkdir client
cp -R tmp/* client
mkdir build
cd build/
```
Changes to the cmakelists.txt

```Cmake
project(SenapsCpp)
set(CPPREST_INCLUDE_DIR /usr/include/cpprest)
set(CPPREST_LIBRARY_DIR /usr/lib/x86_64-linux-gnu)
# and comment out the check on CPPREST_ROOT
```

```sh
cmake ..
make
```

```txt
/home/per202/src/github_jm/senaps-cpp/client/model/UnivariateResult.h:26:10: fatal error: Object.h: No such file or directory
 #include "Object.h"
          ^~~~~~~~~~
```

[There is a github issue recently logged as I write](https://github.com/swagger-api/swagger-codegen/issues/6512)

Hacking to try to work around.
I create an Object.h and .cpp implementation by starting from Stream.* files. methods do nothing. I doubt this is correct.
Still an issue with ApiClient; I need to manually add an implementation for:

```c++
    static utility::string_t parameterToString(double value);
```

OK, now make works out.

Note that this creates a `libSenapsCpp.a`



# 2017-11-08

Quick test using a [swagger fork by Native Instruments](https://github.com/NativeInstruments/swagger-codegen/tree/feature/cpprest_fix_modelbase_includes) (appeals to my DJ-ing side BTW - self note)


```bash
cd ~/src/tmp
unzip swagger-codegen-feature-cpprest_fix_modelbase_includes.zip

cd swagger-codegen-feature-cpprest_fix_modelbase_includes
mvn clean package

SWAGGER_ROOT=~/src/tmp/swagger-codegen-feature-cpprest_fix_modelbase_includes
cd ~/src/github_jm/senaps-cpp/tmp
java -jar $SWAGGER_ROOT/modules/swagger-codegen-cli/target/swagger-codegen-cli.jar generate -i https://sensor-cloud.io/api-docs/sensorcloud-spec.json -l cpprest -o ./
```

Move stuff to client folder. Follow instructions from 2017-10-18

```cmd
cd c:\src\github_jm\senaps-cpp\client\build
cmake -G "Visual Studio 15 2017" ..
```

```
CMake Error at CMakeLists.txt:14 (project):
  No CMAKE_C_COMPILER could be found.
```
As an aside while googling: check out [vcpkg](https://github.com/Microsoft/vcpkg)

Ended up needing `cmake version 3.10.0-rc4`

Yeah, of course:
```
Error	C1083	Cannot open include file: 'cpprest/details/basic_types.h': No such file or directory	SenapsCpp	c:\src\github_jm\senaps-cpp\client\HttpContent.h	26	
```

Well, vcpkg is an option for cpprest on windows, so let's go. Install vcpkg, see github. 
Note that cpprest will depend on boost, so the first install will compile boost in multiple mode/architecture - Looooong time.


## Windows

After testing it compiles on Debian, check out on windows. 

