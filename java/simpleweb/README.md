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
