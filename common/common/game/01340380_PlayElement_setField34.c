// addr: 0x01340380
// name: PlayElement_setField34
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setField34(void * this, int value) */

void __thiscall PlayElement_setField34(void *this,int value)

{
                    /* Stores a 32-bit value at offset +0x34 of a PlayElement-like object. */
  *(int *)((int)this + 0x34) = value;
  return;
}

