#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bele.h"

uint8_t
be8getv(void *p)
{
	uint8_t *a;
	uint8_t v;

	a = p;
	v = a[0];
	return v;
}

uint16_t
be16getv(void *p)
{
	uint8_t *a;
	uint16_t v;

	a = p;
	v = a[0]<<8;
	v |= a[1];
	return v;
}

uint32_t
be24getv(void *p)
{
	uint8_t *a;
	uint32_t v;

	a = p;
	v = a[0]<<16;
	v |= a[1]<<8;
	v |= a[2];
	return v;
}

uint32_t
be32getv(void *p)
{
	uint8_t *a;
	uint32_t v;

	a = p;
	v = a[0]<<24;
	v |= a[1]<<16;
	v |= a[2]<<8;
	v |= a[3];
	return v;
}

uint64_t
be64getv(void *p)
{
	uint8_t *a;
	uint64_t v;

	a = p;
	v = (uint64_t)a[0]<<56;
	v |= (uint64_t)a[1]<<48;
	v |= (uint64_t)a[2]<<40;
	v |= (uint64_t)a[3]<<32;
	v |= (uint64_t)a[4]<<24;
	v |= a[5]<<16;
	v |= a[6]<<8;
	v |= a[7];
	return v;
}

unsigned int
be8get(void *p, uint8_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0];
	return 1;
}

unsigned int
be16get(void *p, uint16_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0]<<8;
	*v |= a[1];
	return 2;
}

unsigned int
be24get(void *p, uint32_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0]<<16;
	*v |= a[1]<<8;
	*v |= a[2];
	return 3;
}

unsigned int
be32get(void *p, uint32_t *v)
{
	uint8_t *a;

	a = p;
	*v = a[0]<<24;
	*v |= a[1]<<16;
	*v |= a[2]<<8;
	*v |= a[3];
	return 4;
}

unsigned int
be64get(void *p, uint64_t *v)
{
	uint8_t *a;

	a = p;
	*v = (uint64_t)a[0]<<56;
	*v |= (uint64_t)a[1]<<48;
	*v |= (uint64_t)a[2]<<40;
	*v |= (uint64_t)a[3]<<32;
	*v |= (uint64_t)a[4]<<24;
	*v |= a[5]<<16;
	*v |= a[6]<<8;
	*v |= a[7];
	return 8;
}

unsigned int
be8put(void *p, uint8_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v;
	return 1;
}

unsigned int
be16put(void *p, uint16_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v>>8;
	a[1] = v;
	return 2;
}

unsigned int
be24put(void *p, uint32_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v>>16;
	a[1] = v>>8;
	a[2] = v;
	return 3;
}

unsigned int
be32put(void *p, uint32_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v>>24;
	a[1] = v>>16;
	a[2] = v>>8;
	a[3] = v;
	return 4;
}

unsigned int
be64put(void *p, uint64_t v)
{
	uint8_t *a;

	a = p;
	a[0] = v>>56;
	a[1] = v>>48;
	a[2] = v>>40;
	a[3] = v>>32;
	a[4] = v>>24;
	a[5] = v>>16;
	a[6] = v>>8;
	a[7] = v;
	return 8;
}
