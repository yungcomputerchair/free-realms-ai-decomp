// addr: 0x0145a470
// name: CWCommandObject_Destroy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCommandObject_Destroy_ctor(void * this) */

void * __fastcall CWCommandObject_Destroy_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWCommandObject_Destroy command object, installing
                       primary/secondary vtables, setting its command name, and clearing payload
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CWCommandObject_Destroy::vftable;
  *(undefined ***)((int)this + 8) = CWCommandObject_Destroy::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CWCommandObject_Destroy",0x17);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  ExceptionList = local_c;
  return this;
}

