// addr: 0x01360b30
// name: Game_setEnvironmentTargetPlayer
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_setEnvironmentTargetPlayer(int *param_1,void *param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 unaff_retaddr;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Resolves the current environment member/player through PlayElement->Game and
                       stores it back into the EvaluationEnvironment. */
  puStack_8 = &LAB_0167ec48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x144))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  if (cVar1 != '\0') {
    PlayElement_getGame();
    piVar2 = (int *)FUN_0139d7c0();
    (**(code **)(*piVar2 + 0x34))(&stack0xffffffe0);
    pvVar3 = EvaluationEnvironment_getMember14(param_2);
    FUN_013815b0(unaff_retaddr);
    piVar2 = local_18;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    piVar4 = local_1c;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (piVar4 == piVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (local_18 <= piVar4) {
        FUN_00d83c2d();
      }
      if (((int *)*piVar4)[0x19] != 0) {
        (**(code **)(*(int *)*piVar4 + 0x16c))(param_2);
      }
      if (local_18 <= piVar4) {
        FUN_00d83c2d();
      }
      piVar4 = piVar4 + 1;
    }
    FUN_013815b0(pvVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

