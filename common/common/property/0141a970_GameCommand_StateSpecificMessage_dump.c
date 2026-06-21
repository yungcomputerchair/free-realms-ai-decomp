// addr: 0x0141a970
// name: GameCommand_StateSpecificMessage_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_StateSpecificMessage_dump(void * this, void * serializer) */

void __thiscall GameCommand_StateSpecificMessage_dump(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  
                    /* Dumps GameCommand_StateSpecificMessage with two nullable nested command/value
                       pointers and three integer fields. Evidence is exact start/end strings naming
                       the class and the null-marker plus nested vtable dump pattern. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting GameCommand_StateSpecificMessage\n");
  GameCommand_serialize(this,serializer);
  DebugStream_writeCString(serializer,"Number 1: ");
  piVar1 = *(int **)((int)this + 0x30);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  DebugStream_writeCString(serializer,"Number 2: ");
  piVar1 = *(int **)((int)this + 0x34);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(serializer,"Ending GameCommand_StateSpecificMessage\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

