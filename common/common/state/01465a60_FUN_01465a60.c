// addr: 0x01465a60
// name: FUN_01465a60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01465a60(int *param_1,int param_2)

{
  int *piVar1;
  int *stream;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piStack_40;
  int *local_3c;
  undefined4 uStack_38;
  int iStack_34;
  void *pvStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Small helper/dispatcher using calls: GamePlayer_getPlayerId; FUN_01400b20;
                       PlayElement_getId; FUN_01321f20; 00d82463; FUN_00d83c2d. No class-identifying
                       evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169dc70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c = param_1;
  if (param_2 == 0) {
    param_2 = 0x1465aa6;
    stream = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffac);
  }
  else {
    stream = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(stream,"Starting ProcessEventEmissionState\n");
  CancellableStateMachineState_serialize(param_1,stream,param_2);
  DebugStream_writeCString(stream,"CurrentState: ");
  Serializer_appendInteger(stream,param_1[0x3e]);
  DebugStream_writeCString(stream,"mEventID: ");
  Serializer_appendInteger(stream,param_1[0x3f]);
  DebugStream_writeCString(stream,"mOldEventID: ");
  Serializer_appendInteger(stream,param_1[0x40]);
  DebugStream_writeCString(stream,"mResponses: ");
  uStack_1c = 0;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  puStack_8 = (undefined1 *)0x0;
  piVar1 = (int *)param_1[0x43];
  if (piVar1 < (int *)param_1[0x42]) {
    FUN_00d83c2d();
  }
  piVar4 = (int *)param_1[0x42];
  if ((int *)param_1[0x43] < piVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (int *)0xfffffefc) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) break;
    if (param_1 == (int *)0xfffffefc) {
      FUN_00d83c2d();
    }
    if ((int *)param_1[0x43] <= piVar4) {
      FUN_00d83c2d();
    }
    if (*piVar4 != 0) {
      if ((int *)param_1[0x43] <= piVar4) {
        FUN_00d83c2d();
      }
      if (piVar4[1] != 0) {
        if ((int *)param_1[0x43] <= piVar4) {
          FUN_00d83c2d();
        }
        uVar2 = FUN_01321f20();
        if ((int *)param_1[0x43] <= piVar4) {
          FUN_00d83c2d();
        }
        piVar3 = (int *)PlayElement_getId();
        if ((int *)param_1[0x43] <= piVar4) {
          FUN_00d83c2d();
        }
        iStack_34 = piVar4[2];
        local_3c = piVar3;
        uStack_38 = uVar2;
        FUN_013098c0(&local_3c);
      }
    }
    if ((int *)param_1[0x43] <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 3;
  }
  FUN_01400b20(&pvStack_20);
  DebugStream_writeCString(stream,"mManualResponses: ");
  piVar1 = (int *)param_1[0x47];
  if (piVar1 < (int *)param_1[0x46]) {
    FUN_00d83c2d();
  }
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  piVar4 = (int *)param_1[0x46];
  piVar3 = param_1;
  if ((int *)param_1[0x47] < piVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((param_1 == (int *)0xfffffeec) || (param_1 + 0x45 != piVar3 + 0x45)) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) break;
    if (param_1 == (int *)0xfffffeec) {
      FUN_00d83c2d();
    }
    if ((int *)param_1[0x47] <= piVar4) {
      FUN_00d83c2d();
    }
    if (*piVar4 != 0) {
      if ((int *)param_1[0x47] <= piVar4) {
        FUN_00d83c2d();
      }
      if (piVar4[1] != 0) {
        if ((int *)param_1[0x47] <= piVar4) {
          FUN_00d83c2d();
        }
        uVar2 = FUN_01321f20();
        if ((int *)param_1[0x47] <= piVar4) {
          FUN_00d83c2d();
        }
        piVar3 = (int *)PlayElement_getId();
        if ((int *)param_1[0x47] <= piVar4) {
          FUN_00d83c2d();
        }
        iStack_34 = piVar4[2];
        local_3c = piVar3;
        uStack_38 = uVar2;
        FUN_013098c0(&local_3c);
        piVar3 = piStack_40;
      }
    }
    if ((int *)param_1[0x47] <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 3;
  }
  FUN_01400b20(&pvStack_30);
  DebugStream_writeCString(stream,"CurrentResponse.first: ");
  if (piVar3[0x49] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar5);
  DebugStream_writeCString(stream,"CurrentReponse.second.first: ");
  if (piVar3[0x4a] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_01321f20();
  }
  Serializer_appendInteger(stream,uVar5);
  DebugStream_writeCString(stream,"CurrentReponse.second.second: ");
  Serializer_appendInteger(stream,piVar3[0x4b]);
  DebugStream_writeCString(stream,"Initialized: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(piVar3 + 0x4c));
  DebugStream_writeCString(stream,"mDoneDoublePass: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)piVar3 + 0x131));
  DebugStream_writeCString(stream,"CounterEventID: ");
  Serializer_appendInteger(stream,piVar3[0x4d]);
  DebugStream_writeCString(stream,"Keep Going: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(piVar3 + 0x4e));
  DebugStream_writeCString(stream,"ActivePlayer: ");
  if (piVar3[0x4f] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar5);
  DebugStream_writeCString(stream,"EventEmissionPlayer: ");
  Serializer_appendInteger(stream,piVar3[0x50]);
  DebugStream_writeCString(stream,"TriggeringPlayer: ");
  if (piVar3[0x51] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar5);
  DebugStream_writeCString(stream,"Ending ProcessEventEmissionState\n");
  uVar2 = (**(code **)(*piVar3 + 0xc))(stream);
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (pvStack_30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  pvStack_30 = (void *)0x0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_c = (void *)0xffffffff;
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  ExceptionList = pvStack_14;
  return uVar2;
}

