// addr: 0x013b4250
// name: LobbyCommand_SendText_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSendText.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SendText_cloneInto(void * thisObj, void * lobbyCommand) */

void __thiscall LobbyCommand_SendText_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a SendText command into an existing destination, including scalar
                       fields, a std::string at offset 0x14, a byte flag, and a final 32-bit field.
                       It validates the destination with LobbyCommand_SendText RTTI before copying
                       base LobbyCommand state. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_SendText::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("lobbyCommand","..\\common\\networking\\lobby_command\\LobbyCommandSendText.cpp",
                 0x83);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj_00 + 0x14),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x14),0,0xffffffff);
  *(undefined1 *)((int)thisObj_00 + 0x30) = *(undefined1 *)((int)this + 0x30);
  *(undefined4 *)((int)thisObj_00 + 0x34) = *(undefined4 *)((int)this + 0x34);
  return;
}

