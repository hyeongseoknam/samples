[![WhaTap Logo](https://www.whatap.io/img/common/whatap_logo_re.svg)](https://www.whatap.io/)
# Whatap APM Gradle JIB Build

Whatap APM Gradle JIB WAR Build

# JIB WAR 빌드
기본 jetty엔진을 사용하는 WAR 빌드입니다.
자세한 사항은 아래 링크를 참조하실 수 있습니다.
https://github.com/GoogleContainerTools/jib/tree/master/jib-gradle-plugin#war-projects
```
./gradlew jib
```

# 도커 실행

```
docker run --rm \
-e JAVA_TOOL_OPTIONS=-javaagent:/whatap/whatap.agent-2.2.0.jar \
registry.whatap.io:5000/dev/hsnam-image:whatapapm_enabled 
```
