// addr: 0x01233400
// name: StdVector_destroyAndFree
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_destroyAndFree(void * self) */

void __fastcall StdVector_destroyAndFree(void *self)

{
                    /* Destroys all vector elements between begin/end, frees the backing allocation,
                       and zeros begin/end/capacity. It is a generic vector cleanup helper. */
  if (*(void **)((int)self + 4) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)self + 4),*(void **)((int)self + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)self + 4));
  }
  *(undefined4 *)((int)self + 4) = 0;
  *(undefined4 *)((int)self + 8) = 0;
  *(undefined4 *)((int)self + 0xc) = 0;
  return;
}

