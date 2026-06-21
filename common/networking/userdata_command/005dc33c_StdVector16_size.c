// addr: 0x005dc33c
// name: StdVector16_size
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint StdVector16_size(void * this) */

uint __fastcall StdVector16_size(void *this)

{
                    /* Returns the element count for a vector-like container with 16-byte elements,
                       or zero when its begin pointer is null. Evidence: computes (end - begin) >> 4
                       and is used by the 16-byte vector assignment helper. */
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 4;
}

