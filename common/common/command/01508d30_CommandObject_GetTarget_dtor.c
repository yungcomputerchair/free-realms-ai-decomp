// addr: 0x01508d30
// name: CommandObject_GetTarget_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_GetTarget_dtor(void * this) */

void __fastcall CommandObject_GetTarget_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_GetTarget: installs the CommandObject_GetTarget
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b5598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_GetTarget::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_GetTarget::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

