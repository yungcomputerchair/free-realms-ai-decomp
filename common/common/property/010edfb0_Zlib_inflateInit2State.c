// addr: 0x010edfb0
// name: Zlib_inflateInit2State
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Zlib_inflateInit2State(void * stream, int windowBits, char * version, int
   streamSize) */

int __cdecl Zlib_inflateInit2State(void *stream,int windowBits,char *version,int streamSize)

{
  int iVar1;
  
                    /* Initializes a zlib inflate state, installing default alloc/free callbacks,
                       allocating the internal state block, handling negative/raw window bits, and
                       validating the window size. It returns zlib-style negative error codes for
                       version, memory, stream, or window failures. */
  if (((version == (char *)0x0) || (*version != '1')) || (streamSize != 0x38)) {
    return -6;
  }
  if (stream != (void *)0x0) {
    *(undefined4 *)((int)stream + 0x18) = 0;
    if (*(int *)((int)stream + 0x20) == 0) {
      *(code **)((int)stream + 0x20) = zlib_zcalloc;
      *(undefined4 *)((int)stream + 0x28) = 0;
    }
    if (*(int *)((int)stream + 0x24) == 0) {
      *(code **)((int)stream + 0x24) = zlib_zcfree;
    }
    iVar1 = (**(code **)((int)stream + 0x20))(*(undefined4 *)((int)stream + 0x28),1,0x2530);
    if (iVar1 == 0) {
      return -4;
    }
    *(int *)((int)stream + 0x1c) = iVar1;
    if (windowBits < 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      windowBits = -windowBits;
    }
    else {
      *(int *)(iVar1 + 8) = (windowBits >> 4) + 1;
      if (windowBits < 0x30) {
        windowBits = windowBits & 0xf;
      }
    }
    if (windowBits - 8U < 8) {
      *(int *)(iVar1 + 0x24) = windowBits;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      iVar1 = Zlib_inflateResetState(stream);
      return iVar1;
    }
    (**(code **)((int)stream + 0x24))(*(undefined4 *)((int)stream + 0x28),iVar1);
    *(undefined4 *)((int)stream + 0x1c) = 0;
  }
  return -2;
}

