// addr: 0x01383a10
// name: ValueData_getBooleanProperty14
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_getBooleanProperty14(void * valueData) */

bool __cdecl ValueData_getBooleanProperty14(void *valueData)

{
  bool bVar1;
  
                    /* Thin wrapper that asks the common ValueData boolean accessor for property id
                       0x14 with default false. */
  bVar1 = (bool)FUN_01383520(0x14,0);
  return bVar1;
}

