// addr: 0x01384650
// name: EvaluationEnvironment_truncateTraceActions
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall EvaluationEnvironment_truncateTraceActions(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Truncates an EvaluationEnvironment action/debug trace vector back to an
                       iterator position, using helper 01383170 and erasing the tail if needed.
                       Evidence is EvaluationEnvironment neighboring names and use after
                       random/response handling. */
  piVar4 = (int *)FUN_01383170(local_8,&stack0x00000004);
  uVar1 = *(uint *)(param_1 + 0x84);
  iVar2 = *piVar4;
  uVar3 = piVar4[1];
  if (uVar1 < *(uint *)(param_1 + 0x80)) {
    FUN_00d83c2d();
  }
  if ((iVar2 == 0) || (iVar2 != param_1 + 0x7c)) {
    FUN_00d83c2d();
  }
  if (uVar3 != uVar1) {
    FUN_01383c40(local_8,iVar2,uVar3);
  }
  return;
}

