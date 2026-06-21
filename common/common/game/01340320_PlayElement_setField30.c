// addr: 0x01340320
// name: PlayElement_setField30
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setField30(void * this, int value) */

void __thiscall PlayElement_setField30(void *this,int value)

{
                    /* Stores a 32-bit value into a PlayElement-like object at offset +0x30. */
  *(int *)((int)this + 0x30) = value;
  return;
}

