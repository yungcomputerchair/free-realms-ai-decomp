// addr: 0x008031c0
// name: AnimationBinding_setFlagD0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationBinding_setFlagD0(void * this, char enabled_) */

void __thiscall AnimationBinding_setFlagD0(void *this,char enabled_)

{
                    /* Stores a one-byte flag at offset +0xd0. */
  *(char *)((int)this + 0xd0) = enabled_;
  return;
}

