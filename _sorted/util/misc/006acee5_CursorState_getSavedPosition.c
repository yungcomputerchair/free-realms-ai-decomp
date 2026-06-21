// addr: 0x006acee5
// name: CursorState_getSavedPosition
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CursorState_getSavedPosition(void * this, int * outA, int * outB) */

int __thiscall CursorState_getSavedPosition(void *this,int *outA,int *outB)

{
  uint in_EAX;
  uint uVar1;
  
                    /* Returns whether a saved position exists and optionally writes two saved
                       dwords from offsets +0x38 and +0x3c. Evidence is the guard flag at +0x34 and
                       optional out parameters. */
  if (*(int *)((int)this + 0x34) == 0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    if (outA != (int *)0x0) {
      *outA = *(int *)((int)this + 0x38);
    }
    if (outB != (int *)0x0) {
      *outB = *(int *)((int)this + 0x3c);
    }
    uVar1 = CONCAT31((int3)((uint)outB >> 8),1);
  }
  return uVar1;
}

