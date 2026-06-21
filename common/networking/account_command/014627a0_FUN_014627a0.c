// addr: 0x014627a0
// name: FUN_014627a0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_014627a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *stream;
  uint uVar2;
  undefined4 uVar3;
  uint uStack_34;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; references strings PlayerID:, PlayArea:, State:, Ending
                       RevealState, mAutoClose. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169d6a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    param_2 = 0x14627e2;
    stream = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  }
  else {
    stream = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(stream,"Starting RevealState\n");
  CancellableStateMachineState_serialize(param_1,stream,param_2);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,param_1[0x3e]);
  DebugStream_writeCString(stream,"Player: ");
  if (param_1[0x3f] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"PlayArea: ");
  Serializer_appendInteger(stream,param_1[0x40]);
  DebugStream_writeCString(stream,"ValidTargetsIDs: ");
  STLVector_int_serialize(&stack0x00000000,(int)(param_1 + 0x41));
  DebugStream_writeCString(stream,"Selected Target: ");
  if (param_1[0x45] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"State: ");
  Serializer_appendInteger(stream,param_1[0x46]);
  DebugStream_writeCString(stream,"ValidTargetValueData: ");
  (**(code **)(param_1[0x47] + 0x28))(stream);
  DebugStream_writeCString(stream,"Random: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x4a));
  DebugStream_writeCString(stream,"Num Shown: ");
  Serializer_appendInteger(stream,param_1[0x4b]);
  DebugStream_writeCString(stream,"Get Target: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x4c));
  DebugStream_writeCString(stream,"ShowAll: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x131));
  DebugStream_writeCString(stream,"until: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x132));
  DebugStream_writeCString(stream,"Until Query: ");
  (**(code **)(param_1[0x4d] + 0x28))(stream);
  DebugStream_writeCString(stream,"CardDrawPosition: ");
  Serializer_appendInteger(stream,param_1[0x50]);
  DebugStream_writeCString(stream,"RevealedCArdList: ");
  puStack_24 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  pvStack_1c = (void *)0x0;
  uStack_10 = 0;
  uVar2 = param_1[0x53];
  if (uVar2 < (uint)param_1[0x52]) {
    FUN_00d83c2d();
  }
  uStack_34 = param_1[0x52];
  if ((uint)param_1[0x53] < uStack_34) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (int *)0xfffffebc) {
      FUN_00d83c2d();
    }
    if (uStack_34 == uVar2) break;
    if (param_1 == (int *)0xfffffebc) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x53] <= uStack_34) {
      FUN_00d83c2d();
    }
    uVar3 = PlayElement_getId();
    puVar1 = puStack_20;
    if ((puStack_24 == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_1c - (int)puStack_24 >> 2) <=
        (uint)((int)puStack_20 - (int)puStack_24 >> 2))) {
      if (puStack_20 < puStack_24) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_30,&pvStack_28,puVar1,&stack0xffffffc4);
    }
    else {
      *puStack_20 = uVar3;
      puStack_20 = puStack_20 + 1;
    }
    if ((uint)param_1[0x53] <= uStack_34) {
      FUN_00d83c2d();
    }
    uStack_34 = uStack_34 + 4;
  }
  STLVector_int_serialize(&puStack_8,(int)&pvStack_28);
  DebugStream_writeCString(stream,"Close On Button: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x56));
  DebugStream_writeCString(stream,"mRevealID");
  Serializer_appendInteger(stream,param_1[0x55]);
  DebugStream_writeCString(stream,"mClosable");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x159));
  DebugStream_writeCString(stream,"mAutoClose");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x15a));
  DebugStream_writeCString(stream,"Ending RevealState\n");
  uVar3 = (**(code **)(*param_1 + 0xc))(stream);
  uStack_14 = 0xffffffff;
  if (pvStack_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  ExceptionList = pvStack_1c;
  return uVar3;
}

