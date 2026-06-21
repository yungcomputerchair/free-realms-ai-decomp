// addr: 0x01387d00
// name: EvaluationEnvironment_setRevealedCardsReturn
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setRevealedCardsReturn(int param_1)

{
  int *piVar1;
  int iVar2;
  uint key_;
  int *piVar3;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Stores a list of revealed card ids into the return map as a ValueData list
                       under key 0x0c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683528;
  local_c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  FUN_012fa910();
  iVar2 = param_1;
  local_4 = 0;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 < *(int **)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)(iVar2 + 4);
  if (*(int **)(iVar2 + 8) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    if (*piVar3 != 0) {
      param_1 = PlayElement_getId();
      FUN_01300680(6);
      FUN_0042c155(&param_1);
    }
    if (*(int **)(iVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  param_1 = 0xc;
  EvaluationEnvironment_getOrCreateReturnValue(&param_1,key_);
  FUN_013010e0(local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

