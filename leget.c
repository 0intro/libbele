#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bele.h"

uint8_t
le8getv(void *p)
{
	uint8_t *a;
	uint8_t v;

	a = p;
	v = a[0];
	return v;
}

uint16_t
le16getv(void *p)
{
	uint8_t *a;
	uint16_t v;

	a = p;
	v = a[0];
	v |= a[1]<<8;
	return v;
}

uint32_t
le24getv(void *p)
{
	uint8_t *a;
	uint32_t v;

	a = p;
	v = a[0];
	v |= a[1]<<8;
	v |= a[2]<<16;
	return v;
}

uint32_t
le32getv(void *p)
{
	uint8_t *a;
	uint32_t v;

	a = p;
	v = a[0];
	v |= a[1]<<8;
	v |= a[2]<<16;
	v |= a[3]<<24;
	return v;
}

uint64_t
le64getv(void *p)
{
	uint8_t *a;
	uint64_t v;

	a = p;
	v = (uint64_t)a[0];
	v |= (uint64_t)a[1]<<8;
	v |= (uint64_t)a[2]<<16;
	v |= (uint64_t)a[3]<<24;
	v |= (uint64_t)a[4]<<32;
	v |= (uint64_t)a[5]<<40;
	v |= (uint64_t)a[6]<<48;
	v |= (uint64_t)a[7]<<56;
	return v;
}

unsigned int
le8get(void *p, uint8_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0];
	return 1;
}

unsigned int
le16get(void *p, uint16_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0];
	*v |= a[1]<<8;
	return 2;
}

unsigned int
le24get(void *p, uint32_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0];
	*v |= a[1]<<8;
	*v |= a[2]<<16;
	return 3;
}

unsigned int
le32get(void *p, uint32_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0];
	*v |= a[1]<<8;
	*v |= a[2]<<16;
	*v |= a[3]<<24;
	return 4;
}

unsigned int
le64get(void *p, uint64_t *v)
{
	uint8_t *a;

	a = p;
	*v = (uint64_t)a[0];
	*v |= (uint64_t)a[1]<<8;
	*v |= (uint64_t)a[2]<<16;
	*v |= (uint64_t)a[3]<<24;
	*v |= (uint64_t)a[4]<<32;
	*v |= (uint64_t)a[5]<<40;
	*v |= (uint64_t)a[6]<<48;
	*v |= (uint64_t)a[7]<<56;
	return 8;
}

unsigned int
le8put(void *p, uint8_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v;
	return 1;
}

unsigned int
le16put(void *p, uint16_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v;
	a[1] = v>>8;
	return 2;
}

unsigned int
le24put(void *p, uint32_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v;
	a[1] = v>>8;
	a[2] = v>>16;
	return 3;
}

unsigned int
le32put(void *p, uint32_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v;
	a[1] = v>>8;
	a[2] = v>>16;
	a[3] = v>>24;
	return 4;
}

unsigned int
le64put(void *p, uint64_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v;
	a[1] = v>>8;
	a[2] = v>>16;
	a[3] = v>>24;
	a[4] = v>>32;
	a[5] = v>>40;
	a[6] = v>>48;
	a[7] = v>>56;
	return 8;
}
