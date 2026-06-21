// addr: 0x014c8330
// name: LobbyCommand_ChallengeLeaguePlayerResponse_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandChallengeLeaguePlayerResponse.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayerResponse_cloneInto(int param_1, int
   param_2) */

void __thiscall
LobbyCommand_ChallengeLeaguePlayerResponse_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  undefined4 uVar1;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_ChallengeLeaguePlayerResponse into a target command,
                       including scalar response fields, a string at 0x18, an optional cloned
                       deck/card object at 0x34, and a flag at 0x38. Identified by RTTI and the
                       clone assertion in LobbyCommandChallengeLeaguePlayerResponse.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_ChallengeLeaguePlayerResponse::RTTI_Type_Descriptor,0
                                );
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandChallengeLeaguePlayerResponse.cpp"
                 ,0xba);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)thisObj + 0x10) = *(undefined4 *)((int)this + 0x10);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x18),0,0xffffffff);
  if (*(int *)((int)this + 0x34) != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x34) + 0x74))();
    *(undefined4 *)((int)thisObj + 0x34) = uVar1;
    *(undefined1 *)((int)thisObj + 0x38) = *(undefined1 *)((int)this + 0x38);
    return;
  }
  *(undefined1 *)((int)thisObj + 0x38) = *(undefined1 *)((int)this + 0x38);
  return;
}

