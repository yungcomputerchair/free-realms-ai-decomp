// addr: 0x01474fa0
// name: DoublePassState_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DoublePassState_dump(void * this, void * writer) */

void __thiscall DoublePassState_dump(void *this,void *writer)

{
  uint uVar1;
  undefined4 *puVar2;
  int *stream;
  uint uVar3;
  undefined4 uVar4;
  int *apiStack_34 [2];
  uint uStack_2c;
  undefined1 auStack_28 [8];
  void *pvStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Appends a textual/debug dump for DoublePassState, including pass lists,
                       active/current player ids, ordered player list, may-skip flag, look strategy,
                       and state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (writer == (void *)0x0) {
    writer = (void *)0x1474fe3;
    stream = (int *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting DoublePassState\n");
  CancellableStateMachineState_serialize(this,stream,(int)writer);
  apiStack_34[0] = stream;
  DebugStream_writeCString(stream,"PassedList: ");
  STLMap_intToBool_serialize_01472c10(&stack0x00000000,(void *)((int)this + 0xf8),(int)writer);
  DebugStream_writeCString(stream,"OriginalActivePlayer: ");
  if (*(int *)((int)this + 0x104) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar3);
  DebugStream_writeCString(stream,"CurrentPlayer: ");
  if (*(int *)((int)this + 0x108) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar3);
  puStack_1c = (undefined4 *)0x0;
  puStack_18 = (undefined4 *)0x0;
  pvStack_14 = (void *)0x0;
  puStack_8 = (undefined1 *)0x0;
  uVar3 = *(uint *)((int)this + 0x114);
  if (uVar3 < *(uint *)((int)this + 0x110)) {
    FUN_00d83c2d();
  }
  uStack_2c = *(uint *)((int)this + 0x110);
  if (*(uint *)((int)this + 0x114) < uStack_2c) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar1 = uStack_2c;
    if (this == (void *)0xfffffef4) {
      FUN_00d83c2d();
    }
    if (uVar1 == uVar3) break;
    if (this == (void *)0xfffffef4) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x114) <= uVar1) {
      FUN_00d83c2d();
    }
    uVar4 = GamePlayer_getPlayerId();
    puVar2 = puStack_18;
    if ((puStack_1c == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_14 - (int)puStack_1c >> 2) <=
        (uint)((int)puStack_18 - (int)puStack_1c >> 2))) {
      if (puStack_18 < puStack_1c) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_28,&pvStack_20,puVar2,&stack0xffffffc8);
    }
    else {
      *puStack_18 = uVar4;
      puStack_18 = puStack_18 + 1;
    }
    if (*(uint *)((int)this + 0x114) <= uStack_2c) {
      FUN_00d83c2d();
    }
    uStack_2c = uStack_2c + 4;
  }
  DebugStream_writeCString(stream,"OrderedPlayerList: ");
  STLVector_int_serialize(apiStack_34,(int)&pvStack_20);
  DebugStream_writeCString(stream,"MaySkip: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x11c));
  DebugStream_writeCString(stream,"LookStrategy: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x120));
  DebugStream_writeCString(stream,"State: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x128));
  DebugStream_writeCString(stream,"Ending DoublePassState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  local_c = (void *)0xffffffff;
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  ExceptionList = pvStack_14;
  return;
}

