// addr: 0x015198a0
// name: CommandPayload_setField4
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandPayload_setField4(void * this, int value_) */

void __thiscall CommandPayload_setField4(void *this,int value_)

{
                    /* Stores a 32-bit value at offset +4 in the small command payload initialized
                       by 014b5250. Exact field meaning is unknown. */
  *(int *)((int)this + 4) = value_;
  return;
}

