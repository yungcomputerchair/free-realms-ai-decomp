// addr: 0x013d5380
// name: PropertyVector16_init
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector16_init(void * self) */

void __fastcall PropertyVector16_init(void *self)

{
                    /* Initializes a small vector-like property container by clearing the header and
                       begin/end/capacity fields. It does not allocate memory. */
  *(undefined4 *)self = 0;
  *(undefined4 *)((int)self + 8) = 0;
  *(undefined4 *)((int)self + 0xc) = 0;
  *(undefined4 *)((int)self + 0x10) = 0;
  return;
}

