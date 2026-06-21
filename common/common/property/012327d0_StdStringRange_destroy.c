// addr: 0x012327d0
// name: StdStringRange_destroy
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdStringRange_destroy(void * first, void * last) */

void __cdecl StdStringRange_destroy(void *first,void *last)

{
  while( true ) {
    if (first == last) {
      return;
    }
    if (0xf < *(uint *)((int)first + 0x18)) break;
    *(undefined4 *)((int)first + 0x18) = 0xf;
    *(undefined4 *)((int)first + 0x14) = 0;
    *(undefined1 *)((int)first + 4) = 0;
    first = (void *)((int)first + 0x1c);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)first + 4));
}

