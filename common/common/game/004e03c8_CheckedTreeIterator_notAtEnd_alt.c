// addr: 0x004e03c8
// name: CheckedTreeIterator_notAtEnd_alt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedTreeIterator_notAtEnd_alt(void * it) */

bool CheckedTreeIterator_notAtEnd_alt(void *it)

{
  char cVar1;
  
                    /* Returns the negation of another checked tree iterator end/equality helper.
                       Used in Game.cpp loops but the precise container type is not identified. */
  cVar1 = FUN_004d1cb0(it);
  return (bool)('\x01' - (cVar1 != '\0'));
}

