// addr: 0x013fcd10
// name: GameTurn_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameTurn_serialize(void * this, void * serializer) */

void __thiscall GameTurn_serialize(void *this,void *serializer)

{
  uint uVar1;
  uint uVar2;
  void *stream;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 *puStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 *puStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes a GameTurn, including active player, phase/event/turn counters,
                       card draw/owner maps, canceled command, played card maps, end/prevent/suspend
                       flags, and related vectors. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168fff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (serializer == (void *)0x0) {
    serializer = (void *)0x13fcd51;
    stream = (void *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting GameTurn\n");
  DebugStream_writeCString(stream,"GameID: ");
  uVar3 = StateMachine_getCurrentState();
  Serializer_appendInteger(stream,uVar3);
  DebugStream_writeCString(stream,"ActivePlayer: ");
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar3);
  DebugStream_writeCString(stream,"Current Phase: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Current Event: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Current Turn number: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(stream,"CardsDrawnCountMap: ");
  STLMap_intToInt_serialize_013fa2e0(&stack0x00000000,(void *)((int)this + 0x1c),(int)serializer);
  DebugStream_writeCString(stream,"Cards Taken into Hand: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"SkipPhaseMap: ");
  STLMap_intToInt_serialize_013fa2e0(&stack0x00000000,(void *)((int)this + 0x2c),(int)serializer);
  DebugStream_writeCString(stream,"Last Owner Card Map: ");
  puStack_44 = *(undefined4 **)((int)this + 0x3c);
  GameTurn_ctor();
  puStack_8 = (undefined1 *)0x0;
  uStack_3c = **(uint **)((int)this + 0x3c);
  iStack_40 = (int)this + 0x38;
  while( true ) {
    uVar3 = uStack_3c;
    iVar6 = iStack_40;
    if ((iStack_40 == 0) || (iStack_40 != (int)this + 0x38)) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)uVar3 == puStack_44) break;
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (uVar3 == *(uint *)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(uVar3 + 0x10) == 0) {
      if (uVar3 == *(uint *)(iVar6 + 4)) {
        FUN_00d83c2d();
      }
      puVar4 = (undefined4 *)GameTurnTree_findOrInsertByInt(&stack0xffffffb0);
      *puVar4 = 0;
      FUN_013f93b0();
    }
    else {
      if (uVar3 == *(uint *)(iVar6 + 4)) {
        FUN_00d83c2d();
      }
      if (uVar3 == *(uint *)(iVar6 + 4)) {
        FUN_00d83c2d();
      }
      puVar4 = (undefined4 *)GameTurnTree_findOrInsertByInt(&stack0xffffffb0);
      uVar5 = PlayElement_getId();
      *puVar4 = uVar5;
      FUN_013f93b0();
    }
  }
  STLMap_intToInt_serialize_013fa2e0(&stack0x00000000,auStack_1c,(int)serializer);
  DebugStream_writeCString(stream,"CanceledCommand: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x44));
  DebugStream_writeCString(stream,"PhaseCardPlayedMap: ");
  iStack_24 = FUN_01240fa0();
  *(undefined1 *)(iStack_24 + 0x21) = 1;
  *(int *)(iStack_24 + 4) = iStack_24;
  *(int *)iStack_24 = iStack_24;
  *(int *)(iStack_24 + 8) = iStack_24;
  uStack_20 = 0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  puStack_34 = *(undefined4 **)((int)this + 0x4c);
  iStack_48 = (int)this + 0x48;
  puStack_44 = (undefined4 *)*puStack_34;
  while( true ) {
    puVar4 = puStack_44;
    iVar6 = iStack_48;
    if ((iStack_48 == 0) || (iStack_48 != (int)this + 0x48)) {
      FUN_00d83c2d();
    }
    if (puVar4 == puStack_34) break;
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    uVar3 = puVar4[6];
    if (uVar3 < (uint)puVar4[5]) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)(iStack_48 + 4)) {
      FUN_00d83c2d();
    }
    uVar1 = puVar4[5];
    puVar7 = puVar4;
    if ((uint)puVar4[6] < uVar1) {
      FUN_00d83c2d();
    }
    while( true ) {
      uStack_3c = uVar1;
      if (puVar7 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (uStack_3c == uVar3) break;
      if (puVar7 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((uint)puVar7[6] <= uStack_3c) {
        FUN_00d83c2d();
      }
      uVar5 = PlayElement_getId();
      if (puVar4 == *(undefined4 **)(iStack_48 + 4)) {
        FUN_00d83c2d();
      }
      uStack_4c = puVar4[3];
      iVar6 = IntKeyBufferMap_findOrInsert(&uStack_4c);
      uVar1 = *(uint *)(iVar6 + 4);
      if ((uVar1 == 0) ||
         ((uint)((int)(*(int *)(iVar6 + 0xc) - uVar1) >> 2) <=
          (uint)((int)(*(int *)(iVar6 + 8) - uVar1) >> 2))) {
        uVar2 = *(uint *)(iVar6 + 8);
        if (uVar2 < uVar1) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(auStack_30,iVar6,uVar2,&stack0x00000000);
        puVar7 = puStack_44;
      }
      else {
        puVar7 = *(undefined4 **)(iVar6 + 8);
        *puVar7 = uVar5;
        *(undefined4 **)(iVar6 + 8) = puVar7 + 1;
        puVar7 = puVar4;
      }
      puVar4 = puVar7;
      if ((uint)puVar7[6] <= uStack_3c) {
        FUN_00d83c2d();
        puVar4 = puStack_44;
      }
      uVar1 = uStack_3c + 4;
    }
    FUN_013f9430();
  }
  STLMap_intToIntVector_serialize_013fbce0(&stack0x00000000,&puStack_28,serializer);
  DebugStream_writeCString(stream,"EndPhase: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x54));
  DebugStream_writeCString(stream,"EndMultiAction: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x68));
  DebugStream_writeCString(stream,"PreventCardPlay: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x69));
  DebugStream_writeCString(stream,"SuspendedCards: ");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x6c);
  DebugStream_writeCString(stream,"PhaseSuspended: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x7c));
  DebugStream_writeCString(stream,"SuspenedPhaseID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x80));
  DebugStream_writeCString(stream,"PreventByPrevented: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x84));
  Serializer_appendString(stream,(void *)((int)this + 0x8c));
  DebugStream_writeCString(stream,"Ending Game Turn\n");
  (**(code **)(*(int *)this + 0xc))();
  local_c = (void *)((uint)local_c & 0xffffff00);
  StdRbTree_eraseRange
            (auStack_2c,&puStack_34,auStack_2c,(void *)*puStack_28,auStack_2c,puStack_28,stream);
                    /* WARNING: Subroutine does not return */
  _free(puStack_28);
}

