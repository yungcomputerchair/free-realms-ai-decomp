// addr: 0x010ba8e0
// name: FUN_010ba8e0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int span_end_or_zero(int span_) */

int __fastcall span_end_or_zero(int span_)

{
                    /* Returns base+length when the span length field is nonzero, otherwise zero.
                       Class identity is not evident. */
  if (*(int *)(span_ + 8) != 0) {
    return *(int *)(span_ + 4) + *(int *)(span_ + 8);
  }
  return 0;
}

