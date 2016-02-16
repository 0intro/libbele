#ifndef _BELE_H_
#define _BELE_H_ 1
#if defined(__cplusplus)
extern "C" {
#endif

/*
 * beget.c
 */
uint8_t be8getv(void*);
uint16_t be16getv(void*);
uint32_t be24getv(void*);
uint32_t be32getv(void*);
uint64_t be64getv(void*);

unsigned int be8get(void*, uint8_t*);
unsigned int be16get(void*, uint16_t*);
unsigned int be24get(void*, uint32_t*);
unsigned int be32get(void*, uint32_t*);
unsigned int be64get(void*, uint64_t*);

unsigned int be8put(void*, uint8_t);
unsigned int be16put(void*, uint16_t);
unsigned int be24put(void*, uint32_t);
unsigned int be32put(void*, uint32_t);
unsigned int be64put(void*, uint64_t);

/*
 * leget.c
 */
uint8_t le8getv(void*);
uint16_t le16getv(void*);
uint32_t le24getv(void*);
uint32_t le32getv(void*);
uint64_t le64getv(void*);

unsigned int le8get(void*, uint8_t*);
unsigned int le16get(void*, uint16_t*);
unsigned int le24get(void*, uint32_t*);
unsigned int le32get(void*, uint32_t*);
unsigned int le64get(void*, uint64_t*);

unsigned int le8put(void*, uint8_t);
unsigned int le16put(void*, uint16_t);
unsigned int le24put(void*, uint32_t);
unsigned int le32put(void*, uint32_t);
unsigned int le64put(void*, uint64_t);

#if defined(__cplusplus)
}
#endif
#endif
