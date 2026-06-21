// addr: 0x013a3490
// name: Account_setPropertySet
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Account_setPropertySet(int param_1,undefined4 param_2)

{
                    /* Stores a pointer/value at offset 4 on an Account-like object. Evidence: only
                       known caller is account creation path and later Account_getPropertySet is
                       used for AccountPref. */
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

