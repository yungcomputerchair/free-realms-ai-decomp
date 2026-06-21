// addr: 0x00803160
// name: AnimationBinding_setSecondarySlots
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationBinding_setSecondarySlots(void * this, int * slots) */

void __thiscall AnimationBinding_setSecondarySlots(void *this,int *slots)

{
                    /* Copies four binding pointers/handles from the input array into offsets
                       +0xb0..+0xbc. */
  *(int *)((int)this + 0xb0) = *slots;
  *(int *)((int)this + 0xb4) = slots[1];
  *(int *)((int)this + 0xb8) = slots[2];
  *(int *)((int)this + 0xbc) = slots[3];
  return;
}

