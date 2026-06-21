// addr: 0x013b3560
// name: LobbyCommand_Join_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandJoin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_Join_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_Join_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_Join into a target command, including lobby
                       identifiers, strings, a member at 0x2c, a referenced object at 0x78, and
                       additional scalar/string fields. RTTI and the clone assertion in
                       LobbyCommandJoin.cpp identify the function. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_Join::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandJoin.cpp",0xc9);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x10),0,0xffffffff);
  FUN_005f1e5c((int)this + 0x2c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x3c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x3c),0,0xffffffff);
  PropertySet_copyPropertiesFrom(*(int *)((int)this + 0x78));
  *(undefined4 *)((int)thisObj + 0x58) = *(undefined4 *)((int)this + 0x58);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x5c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x5c),0,0xffffffff);
  return;
}

