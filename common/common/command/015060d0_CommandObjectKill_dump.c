// addr: 0x015060d0
// name: CommandObjectKill_dump
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectKill_dump(void * this, void * stream) */

void __thiscall CommandObjectKill_dump(void *this,void *stream)

{
  uint uVar1;
  
                    /* Appends a textual/debug dump for CommandObject_Kill including discard command
                       and player fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_Kill\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Discard Command: ");
  if (*(int *)((int)this + 0x11c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar1);
  DebugStream_writeCString(stream,"Player: ");
  if (*(int *)((int)this + 0x120) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(stream,uVar1);
  DebugStream_writeCString(stream,"Ending CommandObject_Kill\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

