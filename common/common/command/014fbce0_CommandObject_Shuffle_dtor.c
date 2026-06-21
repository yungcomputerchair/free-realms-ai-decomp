// addr: 0x014fbce0
// name: CommandObject_Shuffle_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Shuffle_dtor(void * this) */

void __fastcall CommandObject_Shuffle_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_Shuffle: installs its vftables and chains to the
                       CommandObject base destructor. */
  puStack_8 = &LAB_016b3788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Shuffle::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Shuffle::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

