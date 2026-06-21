// addr: 0x015096d0
// name: CommandObject_EmitSound_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_EmitSound_dtor(void * this) */

void __fastcall CommandObject_EmitSound_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_EmitSound: installs the CommandObject_EmitSound
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b5748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_EmitSound::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_EmitSound::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

