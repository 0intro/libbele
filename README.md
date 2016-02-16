[![Build Status](https://drone.io/github.com/0intro/libbele/status.png)](https://drone.io/github.com/0intro/libbele/latest)
[![Coverity Scan Build Status](https://scan.coverity.com/projects/7835/badge.svg)](https://scan.coverity.com/projects/7835)

Libbele
=======

Libbele is a simple library which provides functions to marshal a
1- to 8-byte integer to or from little-endian or big-endian formats.

Headers
-------

```
#include <stdint.h>
#include <bele.h>
```

Big-endian
----------

```
uint8_t be8getv(void *p);
uint16_t be16getv(void *p);
uint32_t be24getv(void *p);
uint32_t be32getv(void *p);
uint64_t be64getv(void *p);

unsigned int be8get(void *p, uint8_t *v);
unsigned int be16get(void *p, uint16_t *v);
unsigned int be24get(void *p, uint32_t *v);
unsigned int be32get(void *p, uint32_t *v);
unsigned int be64get(void *p, uint64_t *v);

unsigned int be8put(void *p, uint8_t v);
unsigned int be16put(void *p, uint16_t v);
unsigned int be24put(void *p, uint32_t v);
unsigned int be32put(void *p, uint32_t v);
unsigned int be64put(void *p, uint64_t v);
```

Little-endian
-------------

```
uint8_t le8getv(void *p);
uint16_t le16getv(void *p);
uint32_t le24getv(void *p);
uint32_t le32getv(void *p);
uint64_t le64getv(void *p);

unsigned int le8get(void *p, uint8_t *v);
unsigned int le16get(void *p, uint16_t *v);
unsigned int le24get(void *p, uint32_t *v);
unsigned int le32get(void *p, uint32_t *v);
unsigned int le64get(void *p, uint64_t *v);

unsigned int le8put(void *p, uint8_t v);
unsigned int le16put(void *p, uint16_t v);
unsigned int le24put(void *p, uint32_t v);
unsigned int le32put(void *p, uint32_t v);
unsigned int le64put(void *p, uint64_t v);
```
