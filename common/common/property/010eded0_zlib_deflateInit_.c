// addr: 0x010eded0
// name: zlib_deflateInit_
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int zlib_deflateInit_(void * strm, int level, char * version, int stream_size)
    */

int __cdecl zlib_deflateInit_(void *strm,int level,char *version,int stream_size)

{
  int iVar1;
  
                    /* Wrapper for deflateInit2_ using method 8, windowBits 15, memLevel 8, and
                       strategy 0. It is the standard zlib deflateInit_ convenience entry point. */
  iVar1 = zlib_deflateInit2_(strm,level,8,0xf,8,0,version,stream_size);
  return iVar1;
}

