// addr: 0x013f7ee0
// name: FUN_013f7ee0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_field_4(void * this, uint value_) */

void __thiscall set_field_4(void *this,uint value_)

{
                    /* Stores a 32-bit field at offset +4; used during game/state setup but exact
                       class semantics are not proven. */
  *(uint *)((int)this + 4) = value_;
  return;
}

