// addr: 0x0141b000
// name: FUN_0141b000
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_field_4(void * this, uint value_) */

void __thiscall set_field_4(void *this,uint value_)

{
                    /* Stores a 32-bit value at offset +4. Many game/message callers use it as a
                       generic helper, but class evidence is absent. */
  *(uint *)((int)this + 4) = value_;
  return;
}

