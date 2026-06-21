// addr: 0x014fb450
// name: CommandObject_UIEffect_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_UIEffect_dtor(void * this) */

void __fastcall CommandObject_UIEffect_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_UIEffect: installs its vftables and chains to
                       CommandObject destruction. */
  puStack_8 = &LAB_016b35d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_UIEffect::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_UIEffect::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

