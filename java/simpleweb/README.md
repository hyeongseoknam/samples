[![WhaTap Logo](https://www.whatap.io/img/common/whatap_logo_re.svg)](https://www.whatap.io/)
# Whatap APM Gradle JIB Build

Whatap APM Gradle JIB Build

# JIB 빌드

```
./gradlew jib
```

# 도커 실행

```
docker run --rm \
-e JAVA_TOOL_OPTIONS=-javaagent:/whatap/whatap.agent-2.2.0.jar \
registry.whatap.io:5000/dev/hsnam-image:whatapapm_enabled 
```

# WAR 빌드

```
./gradlew bootWar
BUILD SUCCESSFUL in 1s
3 actionable tasks: 3 up-to-date
(base) hsnam@HSNAM2020L:~/git/samples/java/simpleweb$ find ./ -name "*.war"
./build/libs/simpleweb-0.0.1-SNAPSHOT-plain.war
```
