// addr: 0x004ce432
// name: CheckedTreeIterator_notEquals
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedTreeIterator_notEquals(void * this, void * other) */

bool __thiscall CheckedTreeIterator_notEquals(void *this,void *other)

{
  bool bVar1;
  
                    /* Negates CheckedTreeIterator_equals for map/set iterator comparisons. Used by
                       game loops over checked tree containers. */
  bVar1 = CheckedTreeIterator_equals(this,other);
  return (bool)('\x01' - bVar1);
}

