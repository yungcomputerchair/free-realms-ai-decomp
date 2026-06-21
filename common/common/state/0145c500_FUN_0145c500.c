// addr: 0x0145c500
// name: FUN_0145c500
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_field_ec(void * this, uint value_) */

void __thiscall set_field_ec(void *this,uint value_)

{
                    /* Stores a 32-bit value at offset 0xec; called during StateMachine
                       deserialization but exact field name is not proven. */
  *(uint *)((int)this + 0xec) = value_;
  return;
}

