// addr: 0x0054e65f
// name: StdPairString_copyFrom
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdPairString_copyFrom(void * dst, void * src) */

void * __thiscall StdPairString_copyFrom(void *this,void *dst,void *src)

{
                    /* Copies a small aggregate containing a leading dword, a std::string-like
                       member, and two trailing dwords from src to dst. */
  *(undefined4 *)this = *(undefined4 *)dst;
  FUN_004e52ed((int)dst + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)dst + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)dst + 0xc);
  return this;
}

