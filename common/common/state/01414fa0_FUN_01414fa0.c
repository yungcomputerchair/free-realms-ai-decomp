// addr: 0x01414fa0
// name: FUN_01414fa0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01414fa0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *stream;
  undefined4 uVar4;
  uint uVar5;
  uint auStack_44 [2];
  uint uStack_3c;
  undefined1 auStack_38 [4];
  void *pvStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  void *pvStack_24;
  undefined1 auStack_20 [4];
  uint *puStack_1c;
  uint *puStack_18;
  int iStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Small helper/dispatcher using calls: CancellableStateMachineState_serialize;
                       GamePlayer_getPlayerId; 00d82463; STLVector_int_serialize; PlayElement_getId;
                       DebugStream_writeCString. No class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01692db0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    param_2 = 0x1414fe2;
    stream = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffac);
  }
  else {
    stream = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(stream,"Starting HandleResponseState\n");
  CancellableStateMachineState_serialize(param_1,stream,param_2);
  puStack_1c = (uint *)0x0;
  puStack_18 = (uint *)0x0;
  iStack_14 = 0;
  puStack_8 = (undefined1 *)0x0;
  uVar5 = param_1[0x40];
  if (uVar5 < (uint)param_1[0x3f]) {
    FUN_00d83c2d();
  }
  uStack_3c = param_1[0x3f];
  if ((uint)param_1[0x40] < uStack_3c) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar1 = uStack_3c;
    if (param_1 == (int *)0xffffff08) {
      FUN_00d83c2d();
    }
    if (uVar1 == uVar5) break;
    if (param_1 == (int *)0xffffff08) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x40] <= uVar1) {
      FUN_00d83c2d();
    }
    auStack_44[0] = PlayElement_getId();
    puVar3 = puStack_18;
    if ((puStack_1c == (uint *)0x0) ||
       ((uint)(iStack_14 - (int)puStack_1c >> 2) <= (uint)((int)puStack_18 - (int)puStack_1c >> 2)))
    {
      if (puStack_18 < puStack_1c) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_38,auStack_20,puVar3,auStack_44);
    }
    else {
      *puStack_18 = auStack_44[0];
      puStack_18 = puStack_18 + 1;
    }
    if ((uint)param_1[0x40] <= uStack_3c) {
      FUN_00d83c2d();
    }
    uStack_3c = uStack_3c + 4;
  }
  DebugStream_writeCString(stream,"mProcessedCommands: ");
  STLVector_int_serialize(&stack0x00000000,(int)auStack_20);
  puStack_2c = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  pvStack_24 = (void *)0x0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  auStack_44[0] = param_1[0x44];
  if (auStack_44[0] < (uint)param_1[0x43]) {
    FUN_00d83c2d();
  }
  uVar5 = param_1[0x43];
  if ((uint)param_1[0x44] < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    uStack_3c = uVar5;
    uVar5 = uStack_3c;
    if (param_1 == (int *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if (uVar5 == auStack_44[0]) break;
    if (param_1 == (int *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x44] <= uVar5) {
      FUN_00d83c2d();
    }
    uVar4 = PlayElement_getId();
    puVar2 = puStack_28;
    if ((puStack_2c == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_24 - (int)puStack_2c >> 2) <=
        (uint)((int)puStack_28 - (int)puStack_2c >> 2))) {
      if (puStack_28 < puStack_2c) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_38,&uStack_30,puVar2,&stack0xffffffb8);
    }
    else {
      *puStack_28 = uVar4;
      puStack_28 = puStack_28 + 1;
    }
    if ((uint)param_1[0x44] <= uStack_3c) {
      FUN_00d83c2d();
    }
    uVar5 = uStack_3c + 4;
  }
  DebugStream_writeCString(stream,"Commands: ");
  STLVector_int_serialize(&stack0x00000000,(int)&uStack_30);
  DebugStream_writeCString(stream,"CurrentCommand: ");
  if (param_1[0x46] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar5);
  DebugStream_writeCString(stream,"Next State: ");
  Serializer_appendInteger(stream,param_1[0x47]);
  DebugStream_writeCString(stream,"Current State: ");
  Serializer_appendInteger(stream,param_1[0x48]);
  DebugStream_writeCString(stream,"Response State: ");
  Serializer_appendInteger(stream,param_1[0x49]);
  DebugStream_writeCString(stream,"Last Event: ");
  Serializer_appendInteger(stream,param_1[0x4a]);
  DebugStream_writeCString(stream,"SendPhaseDialog: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x4c));
  DebugStream_writeCString(stream,"ActivePlayerHolder: ");
  if (param_1[0x4d] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar5);
  DebugStream_writeCString(stream,"Cost Cards: ");
  STLVector_int_serialize(&stack0x00000000,(int)(param_1 + 0x4f));
  (**(code **)(param_1[0x53] + 0x28))(stream);
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x56));
  DebugStream_writeCString(stream,"Ending HandleResponseState\n");
  uVar4 = (**(code **)(*param_1 + 0xc))(stream);
  uStack_10 = uStack_10 & 0xffffff00;
  if (pvStack_34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  pvStack_34 = (void *)0x0;
  uStack_30 = 0;
  puStack_2c = (undefined4 *)0x0;
  uStack_10 = 0xffffffff;
  if (pvStack_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  ExceptionList = puStack_18;
  return uVar4;
}

