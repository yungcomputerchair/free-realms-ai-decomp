// addr: 0x015198e0
// name: CommandPayload_setFieldC
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandPayload_setFieldC(void * this, int value_) */

void __thiscall CommandPayload_setFieldC(void *this,int value_)

{
                    /* Stores a 32-bit value at offset +0xc in the command payload prepared by
                       014b5250. Exact field name is not evident. */
  *(int *)((int)this + 0xc) = value_;
  return;
}

