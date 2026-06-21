// addr: 0x012fb560
// name: ValueData_getIntegerListSize
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ValueData_getIntegerListSize(void * this) */

int __fastcall ValueData_getIntegerListSize(void *this)

{
  int iVar1;
  
                    /* Checks for kIntegerListTypeID and returns the number of 32-bit entries in the
                       stored integer vector, or 0 for an empty/null list. */
  if (*(int *)((int)this + 4) != 6) {
    FUN_012f5a60("this->isIntegerListValue()","..\\common\\common\\all\\ValueData.cpp",0x488);
    if (*(int *)((int)this + 4) != 6) {
      FUN_012f5a60("mTypeID == kIntegerListTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x135);
      if (*(int *)((int)this + 4) != 6) {
        iVar1 = 0;
        goto LAB_012fb5aa;
      }
    }
  }
  iVar1 = *(int *)((int)this + 8);
LAB_012fb5aa:
  if (*(int *)(iVar1 + 4) == 0) {
    return 0;
  }
  return *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
}

