// addr: 0x014ce630
// name: LobbyCommand_AddIgnoreByName_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAddIgnoreByName.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnoreByName_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_AddIgnoreByName_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_AddIgnoreByName into a target command by assigning the
                       name string at offset 8 after base command copy. RTTI and the clone assertion
                       in LobbyCommandAddIgnoreByName.cpp identify it. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_AddIgnoreByName::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandAddIgnoreByName.cpp",
                 0x2c);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)thisObj + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 8),0,0xffffffff);
  return;
}

