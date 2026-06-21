// addr: 0x0042b538
// name: FUN_0042b538
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0042b538(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* Returns vfunc +0x214 from the lazily resolved object at this+0x44, or 0 if
                       resolution fails. The property being queried is not identified. */
  iVar1 = FUN_0042b2c9();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0042b54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int **)(param_1 + 0x44) + 0x214))();
    return uVar2;
  }
  return 0;
}

