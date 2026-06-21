// addr: 0x01333470
// name: CWGame_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_dump(void * this, void * writer) */

void __thiscall CWGame_dump(void *this,void *writer)

{
  char cVar1;
  void *stream;
  uint value;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uStack_450;
  undefined1 local_414 [4];
  void *local_410;
  void *local_40c;
  void *local_408;
  void *local_404;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Appends a textual/debug dump for CWGame, writing CWGame-specific
                       vectors/scalars, iterating a map/list of game elements, and then dumping the
                       base game state. */
  puStack_3f8 = &LAB_0167af93;
  local_3fc = ExceptionList;
  uStack_450 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_450;
  ExceptionList = &local_3fc;
  local_408 = writer;
  local_3f4 = 0;
  local_404 = this;
  local_8 = uStack_450;
  if (writer == (void *)0x0) {
    writer = (void *)0x13334d4;
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    local_400 = (undefined1 *)&uStack_450;
    stream = (void *)(**(code **)(*(int *)this + 8))();
  }
  local_408 = stream;
  DebugStream_writeCString(stream,"Starting CWGame\n");
  local_410 = stream;
  local_40c = stream;
  STLMap_intToInt_serialize_012fc6a0(&local_410,(void *)((int)this + 0x38c),(int)writer);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x398));
  STLVector_int_serialize(&local_40c,(int)this + 0x39c);
  STLVector_int_serialize(&local_40c,(int)this + 0x3ac);
  STLMap_intToInt_serialize_012fc6a0(&local_410,(void *)((int)this + 0x3bc),(int)writer);
  value = PropertyDwordVector_size((void *)((int)this + 0x3c8));
  Serializer_appendInteger(stream,value);
  FUN_01330330(local_414);
  while( true ) {
    uVar2 = FUN_01330390(local_414);
    cVar1 = FUN_0132e7f0(uVar2);
    if (cVar1 == '\0') break;
    puVar3 = (undefined4 *)FUN_0132c4b0();
    PersistentComponent_serializePointer(stream,(void *)*puVar3);
    FUN_0132c4e0();
  }
  CWGame_dumpDetails(this,stream);
  local_3f4 = 0xffffffff;
  CWGame_serializeEndingGame();
  return;
}

