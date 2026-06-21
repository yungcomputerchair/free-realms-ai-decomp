// addr: 0x01344ed0
// name: PlayElement_setField3C
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setField3C(void * this, int value) */

void __thiscall PlayElement_setField3C(void *this,int value)

{
                    /* Stores a 32-bit value into offset +0x3c of a PlayElement-family object. */
  *(int *)((int)this + 0x3c) = value;
  return;
}

