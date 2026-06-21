// addr: 0x0135ff50
// name: FUN_0135ff50
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_0135ff50(int param_1)

{
  int *piVar1;
  
                    /* Increments and returns a counter stored in an int-keyed default map entry.
                       Exact subsystem/class role is not evident. */
  piVar1 = IntDefaultMap_getOrInsert((void *)(param_1 + 0xcc),(int *)&stack0x00000004);
  *piVar1 = *piVar1 + 1;
  return *piVar1;
}

