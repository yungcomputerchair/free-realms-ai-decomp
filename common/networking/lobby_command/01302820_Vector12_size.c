// addr: 0x01302820
// name: Vector12_size
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Vector12_size(void * this) */

int __fastcall Vector12_size(void *this)

{
                    /* Returns the number of 12-byte records in a vector-like container, or zero if
                       the begin pointer is null. */
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
}

