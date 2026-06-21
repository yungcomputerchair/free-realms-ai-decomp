// addr: 0x014820b0
// name: FUN_014820b0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_014820b0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *stream;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *value;
  uint uStack_38;
  undefined4 auStack_34 [2];
  uint uStack_2c;
  void *pvStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Small helper/dispatcher using calls: GamePlayer_getPlayerId;
                       STLVector_int_serialize; PlayElement_getId;
                       Vector_insertSingleAndReturnIterator_realloc; FUN_01321f20; 00d82463. No
                       class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a0b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    param_2 = 0x14820f2;
    stream = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  }
  else {
    stream = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(stream,"Starting ActionPlayedState\n");
  CancellableStateMachineState_serialize(param_1,stream,param_2);
  DebugStream_writeCString(stream,"PlayedCardID: ");
  Serializer_appendInteger(stream,param_1[0x3e]);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,param_1[0x3f]);
  DebugStream_writeCString(stream,"mTargetID: ");
  Serializer_appendInteger(stream,param_1[0x40]);
  DebugStream_writeCString(stream,"mTargetID2: ");
  Serializer_appendInteger(stream,param_1[0x41]);
  DebugStream_writeCString(stream,"mActionID: ");
  Serializer_appendInteger(stream,param_1[0x42]);
  DebugStream_writeCString(stream,"mNeedTarget: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x43));
  DebugStream_writeCString(stream,"mNeedTarget2: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x10d));
  DebugStream_writeCString(stream,"mNextState: ");
  Serializer_appendInteger(stream,param_1[0x44]);
  DebugStream_writeCString(stream,"mCurrentState: ");
  Serializer_appendInteger(stream,param_1[0x45]);
  DebugStream_writeCString(stream,"mResponseState: ");
  Serializer_appendInteger(stream,param_1[0x46]);
  DebugStream_writeCString(stream,"UserWantsToPrevent: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x47));
  DebugStream_writeCString(stream,"PreventedBySucceeded: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x11d));
  DebugStream_writeCString(stream,"CanBePrevented: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x11e));
  DebugStream_writeCString(stream,"PreventingPlayer: ");
  if (param_1[0x48] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"ActionIsPlayActin: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x49));
  DebugStream_writeCString(stream,"IgnorePlayer: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x125));
  DebugStream_writeCString(stream,"Target1text; ");
  (**(code **)(param_1[0x4a] + 0x28))(stream);
  DebugStream_writeCString(stream,"Target2text: ");
  (**(code **)(param_1[0x51] + 0x28))(stream);
  DebugStream_writeCString(stream,"DependentAction: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x58));
  DebugStream_writeCString(stream,"AllowGetTarget: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x161));
  DebugStream_writeCString(stream,"SendCardSelected: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x162));
  DebugStream_writeCString(stream,"FirstTargetSelected: ");
  Serializer_appendInteger(stream,param_1[0x59]);
  DebugStream_writeCString(stream,"mTarget1Holder: ");
  if (param_1[0x5a] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"mTarget2Holder: ");
  if (param_1[0x5b] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"mPreventingPlayerList: ");
  puStack_24 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  pvStack_1c = (void *)0x0;
  uStack_10 = 0;
  puStack_8 = (undefined1 *)param_1[0x5e];
  if (puStack_8 < (uint)param_1[0x5d]) {
    FUN_00d83c2d();
  }
  uStack_38 = param_1[0x5d];
  if ((uint)param_1[0x5e] < uStack_38) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (int *)0xfffffe90) {
      FUN_00d83c2d();
    }
    if ((undefined1 *)uStack_38 == puStack_8) break;
    if (param_1 == (int *)0xfffffe90) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x5e] <= uStack_38) {
      FUN_00d83c2d();
    }
    uVar3 = GamePlayer_getPlayerId();
    puVar1 = puStack_20;
    if ((puStack_24 == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_1c - (int)puStack_24 >> 2) <=
        (uint)((int)puStack_20 - (int)puStack_24 >> 2))) {
      if (puStack_20 < puStack_24) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_34,&pvStack_28,puVar1,&stack0xffffffbc);
    }
    else {
      *puStack_20 = uVar3;
      puStack_20 = puStack_20 + 1;
    }
    if ((uint)param_1[0x5e] <= uStack_38) {
      FUN_00d83c2d();
    }
    uStack_38 = uStack_38 + 4;
  }
  STLVector_int_serialize(&stack0xffffffc0,(int)&pvStack_28);
  uStack_2c = param_1[0x5e];
  puStack_8 = (undefined1 *)0x0;
  if (uStack_2c < (uint)param_1[0x5d]) {
    FUN_00d83c2d();
  }
  auStack_34[0] = 0;
  while( true ) {
    uVar2 = param_1[0x5d];
    if ((uint)param_1[0x5e] < uVar2) {
      FUN_00d83c2d();
    }
    if (param_1 == (int *)0xfffffe90) {
      FUN_00d83c2d();
    }
    if (uStack_2c == uVar2) break;
    uVar2 = param_1[0x62];
    if ((param_1 == (int *)0xfffffe90) || (param_1 + 0x5c != (int *)param_1[0x61])) {
      FUN_00d83c2d();
    }
    if (uStack_2c == uVar2) break;
    puStack_8 = (undefined1 *)((int)puStack_8 + 1);
    if (param_1 == (int *)0xfffffe90) {
      FUN_00d83c2d();
    }
    if (uStack_2c <= (uint)param_1[0x5d]) {
      FUN_00d83c2d();
    }
    uStack_2c = uStack_2c - 4;
  }
  DebugStream_writeCString(stream,"mPreventingPlayerIter: ");
  uVar2 = param_1[0x5d];
  if ((uint)param_1[0x5e] < uVar2) {
    FUN_00d83c2d();
  }
  if (param_1 == (int *)0xfffffe90) {
    FUN_00d83c2d();
  }
  value = puStack_8;
  if (uStack_2c == uVar2) {
    value = (undefined1 *)0xffffffff;
  }
  Serializer_appendInteger(stream,(uint)value);
  DebugStream_writeCString(stream,"Event Holder: ");
  Serializer_appendInteger(stream,param_1[99]);
  DebugStream_writeCString(stream,"LastPlayedCardholder; ");
  if (param_1[100] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"LastActionHolder: ");
  if (param_1[0x65] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01321f20();
  }
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"DoExpireEvent: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x66));
  DebugStream_writeCString(stream,"SkipPayingCosts: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x199));
  DebugStream_writeCString(stream,"SkipPrePlayEvent: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x19a));
  DebugStream_writeCString(stream,"SkipPreconditions: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x19b));
  DebugStream_writeCString(stream,"Ending ActionPlayedState\n");
  uVar3 = (**(code **)(*param_1 + 0xc))(stream);
  uStack_14 = 0xffffffff;
  if (pvStack_28 == (void *)0x0) {
    ExceptionList = pvStack_1c;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_28);
}

