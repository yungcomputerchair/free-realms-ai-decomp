// addr: 0x01502600
// name: CommandObject_PickList_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_PickList_dtor(void * this) */

void __fastcall CommandObject_PickList_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_PickList: installs the CommandObject_PickList
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b4808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_PickList::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_PickList::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

