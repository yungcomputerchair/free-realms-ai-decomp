// addr: 0x01500230
// name: CommandObject_RemoveInstalledAction_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveInstalledAction_dtor(void * this) */

void __fastcall CommandObject_RemoveInstalledAction_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_RemoveInstalledAction: installs class vftables
                       and invokes CommandObject base destruction. */
  puStack_8 = &LAB_016b41f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_RemoveInstalledAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveInstalledAction::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

