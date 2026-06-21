// addr: 0x01509b90
// name: CommandObject_DummyEvent_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_DummyEvent_dtor(void * this) */

void __fastcall CommandObject_DummyEvent_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_DummyEvent: installs the
                       CommandObject_DummyEvent vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b5838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_DummyEvent::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DummyEvent::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

