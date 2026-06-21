// addr: 0x01340360
// name: PlayElement_setField18
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setField18(void * this, int value) */

void __thiscall PlayElement_setField18(void *this,int value)

{
                    /* Sets the PlayElement-like object's 32-bit member at offset +0x18. */
  *(int *)((int)this + 0x18) = value;
  return;
}

