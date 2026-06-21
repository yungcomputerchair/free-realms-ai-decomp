// addr: 0x01519860
// name: CommandPayload_setEnabled
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandPayload_setEnabled(void * this, bool enabled_) */

void __thiscall CommandPayload_setEnabled(void *this,bool enabled_)

{
                    /* Stores a byte at the start of a small payload object. Caller 014b5250
                       initializes it to 1 before filling three adjacent fields and serializing a
                       command payload. */
  *(bool *)this = enabled_;
  return;
}

