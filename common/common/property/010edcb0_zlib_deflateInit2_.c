// addr: 0x010edcb0
// name: zlib_deflateInit2_
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int zlib_deflateInit2_(void * strm, int level, int method, int windowBits, int
   memLevel, int strategy, char * version, int stream_size) */

int __cdecl
zlib_deflateInit2_(void *strm,int level,int method,int windowBits,int memLevel,int strategy,
                  char *version,int stream_size)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
                    /* Initializes a zlib deflate stream after validating version '1' and stream
                       size 0x38, sets default alloc/free callbacks, allocates deflate state, and
                       validates level/method/window/memory/strategy. Returns zlib-style negative
                       error codes on failure. */
  uVar4 = 1;
  if (((version == (char *)0x0) || (*version != '1')) || (stream_size != 0x38)) {
    return -6;
  }
  if (strm == (void *)0x0) {
    return -2;
  }
  *(undefined4 *)((int)strm + 0x18) = 0;
  if (*(int *)((int)strm + 0x20) == 0) {
    *(code **)((int)strm + 0x20) = zlib_zcalloc;
    *(undefined4 *)((int)strm + 0x28) = 0;
  }
  if (*(int *)((int)strm + 0x24) == 0) {
    *(code **)((int)strm + 0x24) = zlib_zcfree;
  }
  if (level == -1) {
    level = 6;
  }
  if (windowBits < 0) {
    uVar4 = 0;
    windowBits = -windowBits;
  }
  else if (0xf < windowBits) {
    uVar4 = 2;
    windowBits = windowBits + -0x10;
  }
  if (((memLevel - 1U < 9) && (method == 8)) &&
     ((windowBits - 8U < 8 && (((uint)level < 10 && ((uint)strategy < 5)))))) {
    if (windowBits == 8) {
      windowBits = 9;
    }
    puVar2 = (undefined4 *)
             (**(code **)((int)strm + 0x20))(*(undefined4 *)((int)strm + 0x28),1,0x16c0);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 **)((int)strm + 0x1c) = puVar2;
      puVar2[6] = uVar4;
      iVar5 = 1 << ((byte)windowBits & 0x1f);
      puVar2[0xc] = windowBits;
      puVar2[0xd] = iVar5 + -1;
      iVar3 = 1 << ((byte)(memLevel + 7) & 0x1f);
      puVar2[0x14] = memLevel + 7;
      *puVar2 = strm;
      puVar2[0x13] = iVar3;
      puVar2[0x15] = iVar3 + -1;
      puVar2[7] = 0;
      puVar2[0xb] = iVar5;
      puVar2[0x16] = (memLevel + 9U) / 3;
      uVar4 = (**(code **)((int)strm + 0x20))(*(undefined4 *)((int)strm + 0x28),iVar5,2);
      puVar2[0xe] = uVar4;
      uVar4 = (**(code **)((int)strm + 0x20))(*(undefined4 *)((int)strm + 0x28),puVar2[0xb],2);
      puVar2[0x10] = uVar4;
      uVar4 = (**(code **)((int)strm + 0x20))(*(undefined4 *)((int)strm + 0x28),puVar2[0x13],2);
      puVar2[0x11] = uVar4;
      iVar3 = 1 << ((char)memLevel + 6U & 0x1f);
      puVar2[0x5a7] = iVar3;
      iVar3 = (**(code **)((int)strm + 0x20))(*(undefined4 *)((int)strm + 0x28),iVar3,4);
      uVar1 = puVar2[0x5a7];
      puVar2[2] = iVar3;
      puVar2[3] = uVar1 * 4;
      if ((((puVar2[0xe] != 0) && (puVar2[0x10] != 0)) && (puVar2[0x11] != 0)) && (iVar3 != 0)) {
        puVar2[0x5a9] = iVar3 + (uVar1 & 0xfffffffe);
        puVar2[0x5a6] = iVar3 + uVar1 * 3;
        puVar2[0x21] = level;
        puVar2[0x22] = strategy;
        *(undefined1 *)(puVar2 + 9) = 8;
        iVar3 = FUN_010edb50(strm);
        return iVar3;
      }
      puVar2[1] = 0x29a;
      *(undefined **)((int)strm + 0x18) = PTR_s_insufficient_memory_0188caf8;
      FUN_010eca70(strm);
    }
    return -4;
  }
  return -2;
}

