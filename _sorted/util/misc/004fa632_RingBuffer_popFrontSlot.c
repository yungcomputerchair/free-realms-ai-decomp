// addr: 0x004fa632
// name: RingBuffer_popFrontSlot
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RingBuffer_popFrontSlot(void * this) */

void __fastcall RingBuffer_popFrontSlot(void *this)

{
  int *piVar1;
  
                    /* Advances/removes one entry from a ring-buffer-like object. It increments a
                       cursor at +0xc, wraps at capacity*4 from +8, and decrements the live count at
                       +0x10. */
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_004d4a38(0);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if ((uint)(*(int *)((int)this + 8) << 2) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return;
}

