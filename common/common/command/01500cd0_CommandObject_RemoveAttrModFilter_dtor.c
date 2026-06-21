// addr: 0x01500cd0
// name: CommandObject_RemoveAttrModFilter_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveAttrModFilter_dtor(void * this) */

void __fastcall CommandObject_RemoveAttrModFilter_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_RemoveAttrModFilter: installs class vftables and
                       invokes the CommandObject base destructor. */
  puStack_8 = &LAB_016b43a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_RemoveAttrModFilter::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveAttrModFilter::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

