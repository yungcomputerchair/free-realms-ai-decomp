// addr: 0x01456660
// name: STLMapIterator_postIncrementIntInt
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMapIterator_postIncrementIntInt(int iterator_) */

int __fastcall STLMapIterator_postIncrementIntInt(int iterator_)

{
                    /* Thin post-increment wrapper for an STL map iterator clone; it advances the
                       iterator via STLMapIterator_next and returns the original iterator value. */
  STLMapIterator_next((void *)iterator_);
  return iterator_;
}

