// addr: 0x00803190
// name: AnimationBinding_setTertiarySlots
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationBinding_setTertiarySlots(void * this, int * slots) */

void __thiscall AnimationBinding_setTertiarySlots(void *this,int *slots)

{
                    /* Copies four binding pointers/handles from the input array into offsets
                       +0xc0..+0xcc. */
  *(int *)((int)this + 0xc0) = *slots;
  *(int *)((int)this + 0xc4) = slots[1];
  *(int *)((int)this + 200) = slots[2];
  *(int *)((int)this + 0xcc) = slots[3];
  return;
}

