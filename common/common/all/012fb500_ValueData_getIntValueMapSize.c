// addr: 0x012fb500
// name: ValueData_getIntValueMapSize
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ValueData_getIntValueMapSize(void * this) */

uint __fastcall ValueData_getIntValueMapSize(void *this)

{
                    /* Checks that this ValueData holds an int-to-Value map, then returns the map
                       object's count field at payload+8. */
  if (*(int *)((int)this + 4) != 0xe) {
    FUN_012f5a60("this->isIntValueMapValue()","..\\common\\common\\all\\ValueData.cpp",0x446);
    if (*(int *)((int)this + 4) != 0xe) {
      FUN_012f5a60("mTypeID == kIntValueMapTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x141);
      if (*(int *)((int)this + 4) != 0xe) {
        return uRam00000008;
      }
    }
  }
  return *(uint *)(*(int *)((int)this + 8) + 8);
}

