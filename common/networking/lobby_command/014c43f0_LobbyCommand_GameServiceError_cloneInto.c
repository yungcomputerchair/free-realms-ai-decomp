// addr: 0x014c43f0
// name: LobbyCommand_GameServiceError_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandGameServiceError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_GameServiceError_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_GameServiceError_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_GameServiceError into a target command, preserving two
                       scalar fields and assigning the error message string at offset 0x10. Evidence
                       comes from the RTTI cast and 'clone' assertion in
                       LobbyCommandGameServiceError.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_GameServiceError::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandGameServiceError.cpp",
                 0x54);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x10),0,0xffffffff);
  return;
}

