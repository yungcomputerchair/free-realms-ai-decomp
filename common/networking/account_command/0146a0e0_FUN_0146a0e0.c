// addr: 0x0146a0e0
// name: FUN_0146a0e0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0146a0e0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *unaff_EBX;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_38;
  int *local_34;
  int *apiStack_30 [2];
  uint uStack_28;
  void *pvStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
                    /* Unidentified helper; references strings PlayerID:, Ending MultiPlayerState,
                       PlayerIter:, PlayerList:, state:. */
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_0169e538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = param_1;
  if (param_2 == 0) {
    param_2 = 0x146a12c;
    piVar2 = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  }
  else {
    piVar2 = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(piVar2,"Starting MultiPlayerState\n");
  CancellableStateMachineState_serialize(param_1,piVar2,param_2);
  apiStack_30[0] = piVar2;
  DebugStream_writeCString(piVar2,"Effect: ");
  (**(code **)(param_1[0x3e] + 0x28))(piVar2);
  DebugStream_writeCString(piVar2,"state: ");
  Serializer_appendInteger(piVar2,param_1[0x41]);
  uVar5 = param_1[0x44];
  if (uVar5 < (uint)param_1[0x43]) {
    FUN_00d83c2d();
  }
  puStack_20 = (undefined4 *)0x0;
  puStack_1c = (undefined4 *)0x0;
  pvStack_18 = (void *)0x0;
  local_c = (void *)0x0;
  uVar4 = param_1[0x43];
  if ((uint)param_1[0x44] < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (int *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar5) break;
    if (param_1 == (int *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x44] <= uVar4) {
      FUN_00d83c2d();
    }
    uStack_38 = GamePlayer_getPlayerId();
    puVar1 = puStack_1c;
    if ((puStack_20 == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_18 - (int)puStack_20 >> 2) <=
        (uint)((int)puStack_1c - (int)puStack_20 >> 2))) {
      if (puStack_1c < puStack_20) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(apiStack_30,&pvStack_24,puVar1,&uStack_38);
    }
    else {
      *puStack_1c = uStack_38;
      puStack_1c = puStack_1c + 1;
    }
    if ((uint)param_1[0x44] <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 4;
    piVar2 = piStack_4;
  }
  DebugStream_writeCString(piVar2,"PlayerList: ");
  STLVector_int_serialize(&local_34,(int)&pvStack_24);
  DebugStream_writeCString(piVar2,"PlayerIter: ");
  uStack_28 = param_1[0x44];
  uVar5 = 0;
  if (uStack_28 < (uint)param_1[0x43]) {
    FUN_00d83c2d();
  }
  apiStack_30[0] = (int *)0x0;
  while( true ) {
    uVar4 = param_1[0x43];
    if ((uint)param_1[0x44] < uVar4) {
      FUN_00d83c2d();
    }
    if (param_1 == (int *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if (uStack_28 == uVar4) break;
    uVar4 = unaff_EBX[0x48];
    if ((param_1 == (int *)0xfffffef8) || (param_1 + 0x42 != (int *)unaff_EBX[0x47])) {
      FUN_00d83c2d();
    }
    if (uStack_28 == uVar4) break;
    uVar5 = uVar5 + 1;
    if (param_1 == (int *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if (uStack_28 <= (uint)param_1[0x43]) {
      FUN_00d83c2d();
    }
    uStack_28 = uStack_28 - 4;
  }
  uVar4 = param_1[0x43];
  if ((uint)param_1[0x44] < uVar4) {
    FUN_00d83c2d();
  }
  if (param_1 == (int *)0xfffffef8) {
    FUN_00d83c2d();
  }
  piVar2 = piStack_4;
  if (uStack_28 == uVar4) {
    Serializer_appendInteger(piStack_4,0xffffffff);
  }
  else {
    Serializer_appendInteger(piStack_4,uVar5);
    piVar2 = piStack_4;
  }
  DebugStream_writeCString(piVar2,"PlayerID: ");
  Serializer_appendInteger(piVar2,unaff_EBX[0x49]);
  DebugStream_writeCString(piVar2,"Ending MultiPlayerState\n");
  uVar3 = (**(code **)(*unaff_EBX + 0xc))(piVar2);
  uStack_10 = 0xffffffff;
  if (pvStack_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  ExceptionList = pvStack_18;
  return uVar3;
}

