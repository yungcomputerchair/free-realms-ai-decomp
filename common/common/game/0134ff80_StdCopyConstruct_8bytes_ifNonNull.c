// addr: 0x0134ff80
// name: StdCopyConstruct_8bytes_ifNonNull
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdCopyConstruct_8bytes_ifNonNull(void * dst, void * src) */

void StdCopyConstruct_8bytes_ifNonNull(void *dst,void *src)

{
                    /* Copies an 8-byte aggregate from src to dst when dst is non-null. */
  if (dst != (void *)0x0) {
    *(undefined4 *)dst = *(undefined4 *)src;
    *(undefined4 *)((int)dst + 4) = *(undefined4 *)((int)src + 4);
  }
  return;
}

