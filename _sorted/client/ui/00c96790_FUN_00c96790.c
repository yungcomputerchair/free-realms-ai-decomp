// addr: 0x00c96790
// name: FUN_00c96790
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c96790(int *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* Drains a linked list at object offset 0x52c0 by repeatedly calling a removal
                       helper, then sets the same lifecycle flag as 00c93340 and dispatches vfunc
                       +0x10. Exact class is unknown. */
  iVar1 = param_1[0x14b0];
  while (iVar1 != 0) {
    FUN_00c965a0(iVar1);
    iVar1 = param_1[0x14b0];
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x14ad) = 1;
                    /* WARNING: Could not recover jumptable at 0x00c967c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

