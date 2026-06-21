// addr: 0x01401bc0
// name: FUN_01401bc0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_pair_fields_4_8(void * this, uint first_, uint second_) */

void __thiscall set_pair_fields_4_8(void *this,uint first_,uint second_)

{
                    /* Stores two 32-bit values into offsets +4 and +8, used by state UI/message
                       setup; exact class is not identifiable. */
  *(uint *)((int)this + 8) = second_;
  *(uint *)((int)this + 4) = first_;
  return;
}

