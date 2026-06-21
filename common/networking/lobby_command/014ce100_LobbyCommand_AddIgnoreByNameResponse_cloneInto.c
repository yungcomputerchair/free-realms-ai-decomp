// addr: 0x014ce100
// name: LobbyCommand_AddIgnoreByNameResponse_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAddIgnoreByNameResponse.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnoreByNameResponse_cloneInto(int param_1, int param_2)
    */

void __thiscall LobbyCommand_AddIgnoreByNameResponse_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_AddIgnoreByNameResponse into a target command,
                       assigning two string fields and copying response/status scalars. Identified
                       by RTTI and the clone assertion in LobbyCommandAddIgnoreByNameResponse.cpp.
                        */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_AddIgnoreByNameResponse::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandAddIgnoreByNameResponse.cpp",
                 0x66);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)thisObj + 0xc)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0xc),0,0xffffffff);
  *(undefined4 *)((int)thisObj + 0x28) = *(undefined4 *)((int)this + 0x28);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x2c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x2c),0,0xffffffff);
  return;
}

