// addr: 0x010ee080
// name: zlib_inflateInit_
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int zlib_inflateInit_(void * strm, char * version, int stream_size) */

int __cdecl zlib_inflateInit_(void *strm,char *version,int stream_size)

{
  int iVar1;
  
                    /* Wrapper for inflateInit2_ using the default windowBits value 15. It forwards
                       the stream, version, and stream-size arguments to the lower initializer. */
  iVar1 = Zlib_inflateInit2State(strm,0xf,version,stream_size);
  return iVar1;
}

