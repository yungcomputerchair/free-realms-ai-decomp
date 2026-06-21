// addr: 0x01412d00
// name: FUN_01412d00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_flag_130(void * this, bool value_) */

void __thiscall set_flag_130(void *this,bool value_)

{
                    /* Stores a boolean at offset 0x130. The owning class/semantic flag is not
                       evident from this tiny setter. */
  *(bool *)((int)this + 0x130) = value_;
  return;
}

