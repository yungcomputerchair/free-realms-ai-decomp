// addr: 0x015198c0
// name: CommandPayload_setField8
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandPayload_setField8(void * this, int value_) */

void __thiscall CommandPayload_setField8(void *this,int value_)

{
                    /* Stores a 32-bit value at offset +8 in the command payload prepared by
                       014b5250. Exact field name is not evident. */
  *(int *)((int)this + 8) = value_;
  return;
}

