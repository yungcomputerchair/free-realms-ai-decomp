// addr: 0x01340310
// name: PlayElement_setField2C
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setField2C(void * this, int value) */

void __thiscall PlayElement_setField2C(void *this,int value)

{
                    /* Stores a 32-bit value into a PlayElement-like object at offset +0x2c. */
  *(int *)((int)this + 0x2c) = value;
  return;
}

