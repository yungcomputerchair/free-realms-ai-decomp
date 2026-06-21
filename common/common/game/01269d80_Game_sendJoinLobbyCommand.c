// addr: 0x01269d80
// name: Game_sendJoinLobbyCommand
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int Game_sendJoinLobbyCommand(void) */

int Game_sendJoinLobbyCommand(void)

{
  bool bVar1;
  int iVar2;
  int *this;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds and sends a "JoinLobby" command/message with GroupID and Password
                       parameters for the current player when the game is not in the guard/paused
                       state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0165f864;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012e0ba0(DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  iVar2 = FUN_0124d010();
  if (iVar2 != 0) {
    this = (int *)FUN_0131b3c0();
    if (this != (int *)0x0) {
      bVar1 = unknown_getGameGuardFlag(this);
      if (!bVar1) {
        iVar2 = *this;
        uVar5 = 1;
        iVar3 = Game_getMyPlayerID(this);
        (**(code **)(iVar2 + 0x78))(iVar3,uVar5);
        pvVar4 = Mem_Alloc(0x40);
        uStack_4 = 0;
        if (pvVar4 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_28,"JoinLobby");
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          uVar5 = FUN_012ec110(abStack_28);
        }
        uStack_4 = 0xffffffff;
        if (pvVar4 != (void *)0x0) {
          FUN_0041f1d7();
        }
        FUN_012ebe40("GroupID",2);
        FUN_012ebe40(&DAT_018c9f18,1);
        FUN_012ebde0("Password",&DAT_0175b400);
        FUN_012e5730(uVar5);
        FUN_012e5820(uVar5);
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}

