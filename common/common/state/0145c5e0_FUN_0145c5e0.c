// addr: 0x0145c5e0
// name: FUN_0145c5e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * get_field_1c_address(void * this) */

void * __fastcall get_field_1c_address(void *this)

{
                    /* Returns the address of the subobject/field at offset 0x1c; used when
                       describing or deserializing state stacks. */
  return (void *)((int)this + 0x1c);
}

