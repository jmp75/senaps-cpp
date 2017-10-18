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
