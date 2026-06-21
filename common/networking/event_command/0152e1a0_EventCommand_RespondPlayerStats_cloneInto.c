// addr: 0x0152e1a0
// name: EventCommand_RespondPlayerStats_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondPlayerStats.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondPlayerStats_cloneInto(void * this, void * target) */

void __thiscall EventCommand_RespondPlayerStats_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Clone-into implementation: copies the player-stats scalar block and refreshes
                       the base/event data before delegating to EventCommand clone. The RTTI cast
                       uses EventCommand_RespondPlayerStats::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in EventCommandRespondPlayerStats.cpp. */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &EventCommand_RespondPlayerStats::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandRespondPlayerStats.cpp"
                 ,0xd4);
  }
  EventCommand_setDisplayActionId(this_00,*(uint *)((int)this + 4));
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this_00 + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this_00 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this_00 + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this_00 + 0x34) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this_00 + 0x38) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)((int)this + 0x20);
  EventCommand_cloneInto(this,this_00);
  return;
}

