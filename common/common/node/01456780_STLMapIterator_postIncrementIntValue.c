// addr: 0x01456780
// name: STLMapIterator_postIncrementIntValue
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMapIterator_postIncrementIntValue(int iterator_) */

int __fastcall STLMapIterator_postIncrementIntValue(int iterator_)

{
                    /* Thin post-increment wrapper for a second STL map iterator instantiation; it
                       calls STLMapIterator_next and returns the original iterator value. */
  STLMapIterator_next((void *)iterator_);
  return iterator_;
}

