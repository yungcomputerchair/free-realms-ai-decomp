// addr: 0x0146c830
// name: FUN_0146c830
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0146c830(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *stream;
  uint uVar4;
  undefined4 uVar5;
  uint uStack_30;
  undefined1 auStack_2c [4];
  void *pvStack_28;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Small helper/dispatcher using calls: GamePlayer_getPlayerId;
                       STLVector_int_serialize; PlayElement_getId;
                       Vector_insertSingleAndReturnIterator_realloc; 00d82463; FUN_00d83c2d. No
                       class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169e8f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    param_2 = 0x146c872;
    stream = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  }
  else {
    stream = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(stream,"Starting MultiActionState\n");
  CancellableStateMachineState_serialize(param_1,stream,param_2);
  DebugStream_writeCString(stream,"Player: ");
  uVar4 = GamePlayer_getPlayerId();
  Serializer_appendInteger(stream,uVar4);
  DebugStream_writeCString(stream,"Command: ");
  Serializer_appendInteger(stream,0);
  DebugStream_writeCString(stream,"CommandType: ");
  Serializer_appendInteger(stream,param_1[0x3f]);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,param_1[0x40]);
  DebugStream_writeCString(stream,"PlayedCardID: ");
  Serializer_appendInteger(stream,param_1[0x41]);
  DebugStream_writeCString(stream,"ActionID: ");
  Serializer_appendInteger(stream,param_1[0x42]);
  DebugStream_writeCString(stream,"Max Num Actions: ");
  Serializer_appendInteger(stream,param_1[0x43]);
  DebugStream_writeCString(stream,"ACtions Left: ");
  Serializer_appendInteger(stream,param_1[0x44]);
  DebugStream_writeCString(stream,"Cancelable: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x45));
  DebugStream_writeCString(stream,"Targets: ");
  (**(code **)(param_1[0x46] + 0x28))(stream);
  DebugStream_writeCString(stream,"State: ");
  Serializer_appendInteger(stream,param_1[0x49]);
  DebugStream_writeCString(stream,"Selected Target: ");
  if (param_1[0x4a] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar4);
  DebugStream_writeCString(stream,"Selected Target2: ");
  if (param_1[0x4b] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar4);
  DebugStream_writeCString(stream,"ValidTargets: ");
  puStack_20 = (undefined4 *)0x0;
  puStack_1c = (undefined4 *)0x0;
  iStack_18 = 0;
  local_c = (void *)0x0;
  uVar4 = param_1[0x4e];
  if (uVar4 < (uint)param_1[0x4d]) {
    FUN_00d83c2d();
  }
  uStack_30 = param_1[0x4d];
  if ((uint)param_1[0x4e] < uStack_30) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (int *)0xfffffed0) {
      FUN_00d83c2d();
    }
    if (uStack_30 == uVar4) break;
    if (param_1 == (int *)0xfffffed0) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x4e] <= uStack_30) {
      FUN_00d83c2d();
    }
    uVar5 = PlayElement_getId();
    puVar2 = puStack_1c;
    if ((puStack_20 == (undefined4 *)0x0) ||
       ((uint)(iStack_18 - (int)puStack_20 >> 2) <= (uint)((int)puStack_1c - (int)puStack_20 >> 2)))
    {
      if (puStack_1c < puStack_20) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_2c,auStack_24,puVar2,&stack0xffffffc8);
    }
    else {
      *puStack_1c = uVar5;
      puStack_1c = puStack_1c + 1;
    }
    if ((uint)param_1[0x4e] <= uStack_30) {
      FUN_00d83c2d();
    }
    uStack_30 = uStack_30 + 4;
  }
  STLVector_int_serialize(&uStack_4,(int)auStack_24);
  DebugStream_writeCString(stream,"ValidPlayElements: ");
  STLVector_int_serialize(&uStack_4,(int)(param_1 + 0x50));
  DebugStream_writeCString(stream,"Button Pressed: ");
  Serializer_appendInteger(stream,param_1[0x54]);
  DebugStream_writeCString(stream,"CustomCommand: ");
  (**(code **)(param_1[0x55] + 0x28))(stream);
  DebugStream_writeCString(stream,"GetSecondTarget: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x58));
  DebugStream_writeCString(stream,"Cost EvaulationState: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x161));
  DebugStream_writeCString(stream,"Reveal ID: ");
  Serializer_appendInteger(stream,param_1[0x59]);
  DebugStream_writeCString(stream,"mUseUntil");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x5b));
  piVar1 = (int *)param_1[0x5a];
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
  }
  else {
    bVar3 = Serializer_appendInteger(stream,0);
    if (bVar3) {
      (**(code **)(*piVar1 + 0x28))(stream);
    }
  }
  DebugStream_writeCString(stream,"mNumActionsDone");
  Serializer_appendInteger(stream,param_1[0x5c]);
  DebugStream_writeCString(stream,"Ending MultiActionState\n");
  uVar5 = (**(code **)(*param_1 + 0xc))(stream);
  uStack_14 = 0xffffffff;
  if (pvStack_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  ExceptionList = puStack_1c;
  return uVar5;
}

