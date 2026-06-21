// addr: 0x005e86cb
// name: ValueData_case6Payload_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValueData_case6Payload_dtor(void * this, char flags) */

void * __thiscall ValueData_case6Payload_dtor(void *this,char flags)

{
                    /* Destructor/deleting-destructor wrapper for the ValueData variant case-6
                       payload: runs the payload destructor and frees this when the low flag bit is
                       set. */
  StdVector_clearStorage(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

