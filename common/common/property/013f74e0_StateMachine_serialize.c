// addr: 0x013f74e0
// name: StateMachine_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_serialize(void * this, void * serializer) */

void __thiscall StateMachine_serialize(void *this,void *serializer)

{
  int *this_00;
  uint *puVar1;
  void *stream;
  uint uVar2;
  int *piVar3;
  int iVar4;
  size_t _Size;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  void *pvStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_34 [4];
  uint *puStack_30;
  uint *puStack_2c;
  int iStack_28;
  undefined1 auStack_24 [8];
  undefined1 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Serializes the state machine, including state stack class ids and serialized
                       buffers, return value stack, saved/restore state and phase strings,
                       wait/dialog text, buttons, and top state id. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0168f880;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (serializer == (void *)0x0) {
    serializer = (void *)0x13f7523;
    stream = (void *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffff8c);
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting StateMachine\n");
  DebugStream_writeCString(stream,"GameID: ");
  uVar2 = StateMachine_getCurrentState();
  Serializer_appendInteger(stream,uVar2);
  DebugStream_writeCString(stream,"StateStack, classID: ");
  FUN_005258fb();
  puStack_8 = (undefined1 *)0x0;
  FUN_01365f40();
  puStack_30 = (uint *)0x0;
  puStack_2c = (uint *)0x0;
  iStack_28 = 0;
  puStack_8 = (undefined1 *)CONCAT31((int3)((uint)puStack_8 >> 8),2);
  puVar5 = *(undefined4 **)((int)this + 0x10);
  if (puVar5 < *(undefined4 **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  puStack_58 = *(undefined4 **)((int)this + 0xc);
  if (*(undefined4 **)((int)this + 0x10) < puStack_58) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (puStack_58 == puVar5) break;
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= puStack_58) {
      FUN_00d83c2d();
    }
    this_00 = (int *)*puStack_58;
    PacketBuffer_init(auStack_24);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
    StateMachine_getSerializeFlags(this_00);
    piVar3 = IntDefaultMap_getOrInsert(&uStack_40,(int *)&stack0x00000000);
    iVar4 = (**(code **)(*this_00 + 0x18))();
    *piVar3 = iVar4;
    (**(code **)(*this_00 + 0x28))(auStack_24);
    _Size = PacketBuffer_getSize(&iStack_28);
    pvStack_4 = Mem_Alloc(_Size + 1);
    puVar5 = PacketBuffer_identity(&iStack_28);
    _memcpy(pvStack_4,(void *)*puVar5,_Size);
    puVar5 = (undefined4 *)StateMachine_getSerializeFlags(this_00);
    puVar6 = (undefined4 *)StateMachineMap_findOrInsertByInt(&stack0xffffff98);
    *puVar6 = pvStack_4;
    puVar6[1] = _Size;
    (**(code **)(*this_00 + 0x18))(_Size);
    uVar2 = StateMachine_getSerializeFlags(this_00);
    Game_logGeneral(*(void **)((int)this + 4),"Serializing State: %d, class: %d, size: %d",uVar2);
    uVar2 = StateMachine_getSerializeFlags(this_00);
    puVar1 = puStack_2c;
    if ((puStack_30 == (uint *)0x0) ||
       ((uint)(iStack_28 - (int)puStack_30 >> 2) <= (uint)((int)puStack_2c - (int)puStack_30 >> 2)))
    {
      if (puStack_2c < puStack_30) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_54,auStack_34,puVar1,&stack0x00000000);
    }
    else {
      *puStack_2c = uVar2;
      puStack_2c = puStack_2c + 1;
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    RawBuffer_free(auStack_24);
    if (*(undefined4 **)((int)this + 0x10) <= puStack_58) {
      FUN_00d83c2d();
    }
    puStack_58 = puStack_58 + 1;
  }
  STLMap_dwordPair_serialize(&stack0x00000000,&uStack_40,serializer);
  DebugStream_writeCString(stream,"StateStack, buffer: ");
  STLMap_intBlob_serialize(&stack0x00000000,&uStack_4c,serializer);
  puStack_60 = puStack_48;
  puStack_58 = (undefined4 *)*puStack_48;
  puStack_5c = &uStack_4c;
  if (&uStack_4c == (undefined4 *)0x0) {
    FUN_00d83c2d();
  }
  if (puStack_58 != puStack_60) {
    if (&uStack_4c == (undefined4 *)0x0) {
      FUN_00d83c2d();
    }
    if (puStack_58 == puStack_48) {
      FUN_00d83c2d();
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)puStack_58[4]);
  }
  DebugStream_writeCString(stream,"StateStack: intList");
  STLVector_int_serialize(&stack0x00000000,(int)auStack_34);
  Serializer_appendInteger(stream,0xa2c2a);
  DebugStream_writeCString(stream,"ReturnValueStack: ");
  StateMachine_stateObjectList_serialize(&stack0x00000000,(int)this + 0x20);
  DebugStream_writeCString(stream,"SavedStateName: ");
  Serializer_appendString(stream,(void *)((int)this + 0x40));
  DebugStream_writeCString(stream,"SavedPhaseName: ");
  Serializer_appendString(stream,(void *)((int)this + 0x5c));
  DebugStream_writeCString(stream,"SavedPhaseDialogText: ");
  (**(code **)(*(int *)((int)this + 0x78) + 0x28))(stream);
  DebugStream_writeCString(stream,"SavedWaitDialogText: ");
  (**(code **)(*(int *)((int)this + 0x94) + 0x28))(stream);
  DebugStream_writeCString(stream,"SavedButton1: ");
  Serializer_appendString(stream,(void *)((int)this + 0xb0));
  DebugStream_writeCString(stream,"SavedButton2: ");
  Serializer_appendString(stream,(void *)((int)this + 0xcc));
  DebugStream_writeCString(stream,"TopStateID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x104));
  DebugStream_writeCString(stream,"RestoreStateName: ");
  Serializer_appendString(stream,(void *)((int)this + 0x114));
  DebugStream_writeCString(stream,"RestorePhaseName: ");
  Serializer_appendString(stream,(void *)((int)this + 0x130));
  DebugStream_writeCString(stream,"RestorePhaseDialogText: ");
  (**(code **)(*(int *)((int)this + 0x14c) + 0x28))(stream);
  DebugStream_writeCString(stream,"RestoreWaitDialogText: ");
  (**(code **)(*(int *)((int)this + 0x168) + 0x28))(stream);
  DebugStream_writeCString(stream,"RestoreButton1: ");
  Serializer_appendString(stream,(void *)((int)this + 0x184));
  DebugStream_writeCString(stream,"RestoreButton2: ");
  Serializer_appendString(stream,(void *)((int)this + 0x1a0));
  DebugStream_writeCString(stream,"SavedButton3: ");
  Serializer_appendString(stream,(void *)((int)this + 0xe8));
  DebugStream_writeCString(stream,"Ending StateMachine\n");
  (**(code **)(*(int *)this + 0xc))();
  uStack_1c = 1;
  if (pvStack_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_44);
  }
  pvStack_44 = (void *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_1c = 0;
  StateMachineTree_eraseRange
            (&puStack_60,&stack0xffffff98,&puStack_60,(void *)*puStack_5c,&puStack_60,puStack_5c,
             stream);
                    /* WARNING: Subroutine does not return */
  _free(puStack_5c);
}

