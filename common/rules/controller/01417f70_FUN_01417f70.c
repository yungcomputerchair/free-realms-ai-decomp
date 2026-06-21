// addr: 0x01417f70
// name: FUN_01417f70
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_01417f70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016932a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  local_4 = 0;
  uVar2 = FUN_014164a0(param_1,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = (int *)FUN_01417d90(local_28,uVar2);
  if (*piVar3 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*piVar3 + 8) <= (uint)piVar3[1]) {
    FUN_00d83c2d();
  }
  iVar1 = piVar3[1];
  local_4 = local_4 & 0xffffff00;
  FUN_01300cd0();
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return iVar1 + 4;
}

