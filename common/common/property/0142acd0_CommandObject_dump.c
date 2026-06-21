// addr: 0x0142acd0
// name: CommandObject_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_dump(void * this, void * debug_stream) */

void __thiscall CommandObject_dump(void *this,void *debug_stream)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  
                    /* Writes a complete CommandObject debug dump including command type,
                       originating card, target, action, emitted events, ownership/expiry flags,
                       environment, pushed state, and chained event data. */
  (**(code **)(*(int *)this + 8))(debug_stream);
  DebugStream_writeCString(debug_stream,"Starting CommandObject\n");
  PlayElement_serialize(this,debug_stream);
  DebugStream_writeCString(debug_stream,"CommandTypeName: ");
  Serializer_appendString(debug_stream,(void *)((int)this + 0x40));
  DebugStream_writeCString(debug_stream,"OriginatingCard: ");
  if (*(int *)((int)this + 0x5c) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = PlayElement_getId();
  }
  Serializer_appendInteger(debug_stream,uVar3);
  DebugStream_writeCString(debug_stream,"mTarget: ");
  if (*(int *)((int)this + 0x60) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = PlayElement_getId();
  }
  Serializer_appendInteger(debug_stream,uVar3);
  DebugStream_writeCString(debug_stream,"mAction: ");
  if (*(int *)((int)this + 100) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_01321f20();
  }
  Serializer_appendInteger(debug_stream,uVar3);
  DebugStream_writeCString(debug_stream,"mEmittedPreEvent: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x6c));
  DebugStream_writeCString(debug_stream,"mEmittedSecondPreEvent: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x70));
  DebugStream_writeCString(debug_stream,"mEmittedEvent: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x74));
  DebugStream_writeCString(debug_stream,"Will Expire: ");
  Serializer_appendInteger(debug_stream,(uint)*(byte *)((int)this + 0x79));
  DebugStream_writeCString(debug_stream,"Is Owned: ");
  Serializer_appendInteger(debug_stream,(uint)*(byte *)((int)this + 0x7a));
  DebugStream_writeCString(debug_stream,"Environment: ");
  (**(code **)(*(int *)((int)this + 0x7c) + 0x28))(debug_stream);
  DebugStream_writeCString(debug_stream,"Pushes State: ");
  Serializer_appendInteger(debug_stream,(uint)*(byte *)((int)this + 0x110));
  DebugStream_writeCString(debug_stream,"State To Push: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x114));
  DebugStream_writeCString(debug_stream,"Number of emitted Events: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x118));
  DebugStream_writeCString(debug_stream,"State Pushed: ");
  Serializer_appendInteger(debug_stream,(uint)*(byte *)((int)this + 0x78));
  if ((*(char *)((int)this + 0x78) == '\0') &&
     (piVar1 = *(int **)((int)this + 0x68), piVar1 != (int *)0x0)) {
    bVar2 = Serializer_appendInteger(debug_stream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(debug_stream);
    }
  }
  else {
    Serializer_appendInteger(debug_stream,1);
  }
  DebugStream_writeCString(debug_stream,"Ending CommandObject\n");
  (**(code **)(*(int *)this + 0xc))(debug_stream);
  return;
}

