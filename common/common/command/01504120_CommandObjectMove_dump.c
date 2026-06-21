// addr: 0x01504120
// name: CommandObjectMove_dump
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectMove_dump(void * this, void * stream) */

void __thiscall CommandObjectMove_dump(void *this,void *stream)

{
  uint uVar1;
  
                    /* Appends a textual/debug dump for CommandObject_Move including property,
                       original location, player, move position, clone id, and holder event. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_Move\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Property: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(stream,"OriginalLocation: ");
  if (*(int *)((int)this + 0x120) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar1);
  DebugStream_writeCString(stream,"Player: ");
  if (*(int *)((int)this + 0x124) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar1);
  DebugStream_writeCString(stream,"MovePosition: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x128));
  DebugStream_writeCString(stream,"CloneID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 300));
  DebugStream_writeCString(stream,"HolderEvent: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x130));
  DebugStream_writeCString(stream,"Ending CommandObject_Move\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

