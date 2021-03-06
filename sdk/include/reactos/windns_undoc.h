#ifndef _WINDNS_UNDOC_H_
#define _WINDNS_UNDOC_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _DNS_CACHE_ENTRY
{
    struct _DNS_CACHE_ENTRY *pNext; /* Pointer to next entry */
    PWSTR pszName;                  /* DNS Record Name */
    unsigned short wType1;          /* DNS Record Type 1 */
    unsigned short wType2;          /* DNS Record Type 2 */
    unsigned short wFlags;          /* DNS Record Flags */
} DNS_CACHE_ENTRY, *PDNS_CACHE_ENTRY;


#ifndef __WIDL__
// Hack

BOOL
WINAPI
DnsFlushResolverCache(VOID);

BOOL
WINAPI
DnsGetCacheDataTable(
    _Out_ PDNS_CACHE_ENTRY *DnsCache);

DNS_STATUS
WINAPI
GetCurrentTimeInSeconds(VOID);

#endif /* __WIDL__ */

#ifdef __cplusplus
}
#endif

#endif /* _WINDNS_UNDOC_H_ */
