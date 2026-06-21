// addr: 0x0108dcc0
// name: FUN_0108dcc0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0108dcc0(void * object) */

void __fastcall FUN_0108dcc0(void *object)

{
                    /* Frees the heap pointer stored at offset 4 if non-null. This is a generic
                       destructor helper with no class evidence. */
  if (*(void **)((int)object + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)object + 4));
  }
  return;
}

