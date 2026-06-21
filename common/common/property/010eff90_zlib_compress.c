// addr: 0x010eff90
// name: zlib_compress
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int zlib_compress(void * dest, long * destLen, void * source, long sourceLen)
    */

int __cdecl zlib_compress(void *dest,long *destLen,void *source,long sourceLen)

{
  int iVar1;
  
                    /* Default-level zlib compress wrapper that forwards to compress2 with level -1.
                       Used by multiple command serialization compression paths. */
  iVar1 = zlib_compress2(dest,destLen,source,sourceLen,-1);
  return iVar1;
}

