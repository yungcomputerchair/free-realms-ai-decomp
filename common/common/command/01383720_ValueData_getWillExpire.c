// addr: 0x01383720
// name: ValueData_getWillExpire
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_getWillExpire(void * this) */

bool __cdecl ValueData_getWillExpire(void *this)

{
  bool bVar1;
  
                    /* Boolean ValueData accessor wrapper for property id 0x1d with default false;
                       command code uses it to decide will-expire/environment behavior. */
  bVar1 = (bool)FUN_01383520(0x1d,0);
  return bVar1;
}

