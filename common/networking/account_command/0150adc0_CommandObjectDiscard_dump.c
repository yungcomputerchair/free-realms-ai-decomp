// addr: 0x0150adc0
// name: CommandObjectDiscard_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectDiscard_dump(void * this, void * writer) */

void __thiscall CommandObjectDiscard_dump(void *this,void *writer)

{
  uint value;
  
                    /* Appends a textual/debug dump for CommandObject_Discard, including common
                       command fields, discard reason, player id, target/int vector data,
                       use-game-command, and cost-effect flags. */
  (**(code **)(*(int *)this + 8))(writer);
  DebugStream_writeCString(writer,"Starting CommandObject_Discard\n");
  CommandObject_dump(this,writer);
  DebugStream_writeCString(writer,"Discard Reason: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(writer,"Player: ");
  if (*(int *)((int)this + 0x120) == 0) {
    value = 0;
  }
  else {
    value = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(writer,value);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x124);
  DebugStream_writeCString(writer,"Use Game Command: ");
  Serializer_appendInteger(writer,(uint)*(byte *)((int)this + 0x134));
  DebugStream_writeCString(writer,"Cost Effect: ");
  Serializer_appendInteger(writer,(uint)*(byte *)((int)this + 0x135));
  DebugStream_writeCString(writer,"Ending CommandObject_Discard\n");
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}

