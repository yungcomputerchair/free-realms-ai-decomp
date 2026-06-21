// addr: 0x01509970
// name: CommandObject_EmitSound_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_EmitSound_ctor(void * this) */

void * __fastcall CommandObject_EmitSound_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_EmitSound, installs its vftable, initializes fields,
                       and assigns the name string "CommandObject_EmitSound". Evidence is the
                       vftable and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b57a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CommandObject_EmitSound::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_EmitSound::vftable;
  *(undefined4 *)((int)this + 0x124) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_EmitSound",0x17);
  ExceptionList = local_c;
  return this;
}

