// addr: 0x014e5250
// name: ArchCommand_ValidateUsername_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommandvalidateusername.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_ValidateUsername_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_ValidateUsername_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an ArchCommand_ValidateUsername into an existing target: validates
                       RTTI, clones the ArchCommand base, assigns the username string, and copies
                       two trailing 32-bit fields. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ArchCommand_ValidateUsername::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommandvalidateusername.cpp",
                 0x3a);
  }
  ArchCommand_cloneInto(this,target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 8)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 8),0,0xffffffff);
  *(undefined4 *)((int)target_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)target_00 + 0x28) = *(undefined4 *)((int)this + 0x28);
  return;
}

