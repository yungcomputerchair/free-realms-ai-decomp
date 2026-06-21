// addr: 0x013a3620
// name: Account_getPropertySet
// subsystem: common/common/account
// source (binary assert): common/common/account/Account.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Account_getPropertySet(int param_1)

{
                    /* Returns the Account's backing PropertySet pointer after asserting that
                       mPropertySet is present. */
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\account\\Account.cpp",0x155);
  }
  return *(undefined4 *)(param_1 + 0x50);
}

