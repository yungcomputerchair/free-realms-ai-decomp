// addr: 0x010f2300
// name: zlib_zcalloc
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * zlib_zcalloc(void * opaque, int items, int size) */

void * __cdecl zlib_zcalloc(void *opaque,int items,int size)

{
  void *pvVar1;
  
                    /* Default zlib allocation callback that mallocs items*size bytes and ignores
                       the opaque pointer. The decompiler omitted the return but the malloc result
                       is the callback return value. */
  pvVar1 = _malloc(items * size);
  return pvVar1;
}

