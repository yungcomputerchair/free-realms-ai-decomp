// addr: 0x01303cf0
// name: Record12_copy
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Record12_copy(void * dest, void * src) */

void Record12_copy(void *dest,void *src)

{
                    /* Copies one 12-byte record when the destination is non-null. */
  if (dest != (void *)0x0) {
    *(undefined4 *)dest = *(undefined4 *)src;
    *(undefined4 *)((int)dest + 4) = *(undefined4 *)((int)src + 4);
    *(undefined4 *)((int)dest + 8) = *(undefined4 *)((int)src + 8);
  }
  return;
}

