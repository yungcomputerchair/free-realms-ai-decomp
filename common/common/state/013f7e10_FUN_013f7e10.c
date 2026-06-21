// addr: 0x013f7e10
// name: FUN_013f7e10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_flag_84(void * this, bool value_) */

void __thiscall set_flag_84(void *this,bool value_)

{
                    /* Stores a boolean flag at offset 0x84; ActionPlayedState callers suggest it is
                       a state flag, but the exact semantic name is not proven. */
  *(bool *)((int)this + 0x84) = value_;
  return;
}

