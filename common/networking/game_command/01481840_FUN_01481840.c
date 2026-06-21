// addr: 0x01481840
// name: FUN_01481840
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01481840(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  void *this;
  int *piVar2;
  int playerId_;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puStack_8 = &LAB_016a0ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  piVar2 = param_3;
  local_10 = param_1;
  if ((param_4 < param_3) && (FUN_00d83c2d(), param_4 < param_3)) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (piVar2 == param_4) break;
    if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (param_4 <= piVar2) {
      FUN_00d83c2d();
    }
    playerId_ = *piVar2;
    this = (void *)StateMachineState_getGame();
    local_10 = PlayArea_findPlayerElementById(this,playerId_);
    if (local_10 != (int *)0x0) {
      FUN_01336350(&local_10);
    }
    if (param_4 <= piVar2) {
      FUN_00d83c2d();
    }
    piVar2 = piVar2 + 1;
  }
  uVar1 = param_1[0x5e];
  if (uVar1 < (uint)param_1[0x5d]) {
    FUN_00d83c2d();
  }
  param_1[0x60] = 0;
  param_1[0x61] = (int)(param_1 + 0x5c);
  param_1[0x62] = uVar1;
  if ((param_1[0x5d] != 0) && (param_1[0x5e] - param_1[0x5d] >> 2 != 0)) {
    *(undefined1 *)((int)param_1 + 0x11e) = 1;
    param_1[0x45] = 0xe;
  }
  (**(code **)(*param_1 + 0x38))();
  local_4 = 0xffffffff;
  if (param_3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = local_c;
  return;
}

