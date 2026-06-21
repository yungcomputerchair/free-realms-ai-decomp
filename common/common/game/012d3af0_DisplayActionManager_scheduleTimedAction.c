// addr: 0x012d3af0
// name: DisplayActionManager_scheduleTimedAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
DisplayActionManager_scheduleTimedAction
          (int param_1,int param_2,int param_3,void *param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *this;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_5;
  iVar1 = (int)param_4;
                    /* Creates or updates a timed display action with timestamp/current time data,
                       several integer args, and manager registration. Used by multiple game command
                       handlers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016702bb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  this = (void *)0x0;
  *(void **)(param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  if (0 < (int)param_4) {
    TimeStamp_setCurrentFtime(local_14);
    *(undefined4 *)(param_1 + 0x38) = local_14[0];
    *(undefined4 *)(param_1 + 0x3c) = local_14[0];
  }
  FUN_012cfde0(uVar4,uVar2);
  iVar3 = FUN_012cc6b0(uVar4);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar4 = FUN_01301f50();
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  param_4 = Mem_Alloc(0x14);
  local_4 = 0;
  if (param_4 != (void *)0x0) {
    this = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x4c);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x2c));
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x4c));
  DisplayActionBuilder_addIntArg(this,param_3);
  DisplayActionBuilder_addIntArg(this,iVar1);
  iVar1 = *(int *)(param_1 + 0x14);
  param_4 = this;
  iVar3 = FUN_012d1bc0(iVar1,*(undefined4 *)(iVar1 + 4),&param_4);
  FUN_012d2590(1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  if (param_2 == 0) {
    FUN_004ef7fa(*(undefined4 *)(*(int *)(param_1 + 0xb4) + 4));
    *(int *)(*(int *)(param_1 + 0xb4) + 4) = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
    *(int *)(*(int *)(param_1 + 0xb4) + 8) = *(int *)(param_1 + 0xb4);
  }
  ExceptionList = local_c;
  return;
}

