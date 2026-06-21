// addr: 0x013f0080
// name: FUN_013f0080
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint increment_field_104(void * this) */

uint __fastcall increment_field_104(void *this)

{
                    /* Increments and returns the 32-bit counter at offset 0x104; likely an
                       object-local id/sequence counter, but class evidence is weak. */
  *(int *)((int)this + 0x104) = *(int *)((int)this + 0x104) + 1;
  return *(uint *)((int)this + 0x104);
}

