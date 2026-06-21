// addr: 0x010efee0
// name: zlib_compress2
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int zlib_compress2(void * dest, long * destLen, void * source, long sourceLen,
   int level) */

int __cdecl zlib_compress2(void *dest,long *destLen,void *source,long sourceLen,int level)

{
  int iVar1;
  int iVar2;
  void *local_38;
  long local_34;
  void *local_2c;
  long local_28;
  long local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* Compresses a source buffer into a destination buffer using zlib deflate at a
                       caller-specified level, updates *destLen with total output on success, and
                       converts unfinished deflate to Z_BUF_ERROR. The embedded version string is
                       '1.2.3'. */
  local_34 = sourceLen;
  local_2c = dest;
  local_38 = source;
  local_28 = *destLen;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar1 = zlib_deflateInit_(&local_38,level,"1.2.3",0x38);
  if (iVar1 == 0) {
    iVar2 = FUN_010ec290(&local_38,4);
    if (iVar2 == 1) {
      *destLen = local_24;
      iVar1 = FUN_010eca70(&local_38);
    }
    else {
      FUN_010eca70(&local_38);
      iVar1 = -5;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}

