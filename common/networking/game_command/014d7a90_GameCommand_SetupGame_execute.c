// addr: 0x014d7a90
// name: GameCommand_SetupGame_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSetupGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommandSetupGame_execute(void * this) */

void __fastcall GameCommand_SetupGame_execute(void *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_EAX;
  void *this_00;
  undefined4 uVar4;
  void *apvStack_418 [2];
  void *pvStack_410;
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes GameCommandSetupGame: checks client/server version compatibility,
                       displays/logs an error on mismatch, then applies many setup fields into the
                       Game and resets game state. Evidence is the GameCommandSetupGame.cpp assert
                       path and version mismatch strings. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ad6f9;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)apvStack_418);
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffbd8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandSetupGame.cpp",0x133);
  }
  GameCommand_execute(this);
  iVar1 = *(int *)((int)this + 0x50);
  iVar3 = FUN_01347aa0();
  if ((iVar3 != iVar1) && (iVar1 != 0)) {
    DisplayActionManager_ensureSingleton();
    if (extraout_EAX != 0) {
      apvStack_418[0] = Mem_Alloc(0x14);
      uStack_4 = 0;
      if (apvStack_418[0] == (void *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)FUN_012f9eb0();
      }
      uStack_4 = 0xffffffff;
      FUN_012f8c70(0x14);
      uStack_3fc = 0xf;
      uStack_400 = 0;
      pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
      uStack_4 = 1;
      _sprintf(acStack_3f8,"ERROR! GAME HAS VERSION NUMBER DIFFERENT THAN SERVER VERSION!",uVar2);
      DisplayActionBuilder_addCStringArg(this_00,acStack_3f8);
      DisplayActionBuilder_addBoolArg(this_00,false);
      FUN_012d3550(this_00);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_410);
      }
      uStack_3fc = 0xf;
      uStack_400 = 0;
      pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
    }
    uVar4 = FUN_01347aa0(*(undefined4 *)((int)this + 0x50));
    FUN_012f5dc0("ERROR! GAME HAS WRONG VERSION! %d != %d",uVar4);
  }
  FUN_0135ce40(*(undefined4 *)((int)this + 0xc));
  FUN_01347e80(*(undefined4 *)((int)this + 0x24));
  FUN_01347e90(*(undefined4 *)((int)this + 0x28));
  FUN_01347c30(*(undefined4 *)((int)this + 0x2c));
  FUN_01347960(*(undefined4 *)((int)this + 0x58));
  FUN_0135f9d0((int)this + 0x30);
  FUN_0135f9e0((int)this + 0x40);
  Game_setMyPlayerID(*(void **)((int)this + 8),*(int *)((int)this + 4));
  FUN_01347ee0(*(undefined4 *)((int)this + 0x54));
  FUN_013479b0(*(undefined4 *)((int)this + 0x5c));
  FUN_013488a0(*(undefined4 *)((int)this + 0x60));
  FUN_01348d10(*(undefined4 *)((int)this + 100));
  FUN_01347940(*(undefined4 *)((int)this + 0x68));
  Game_setMatchStructure(*(undefined4 *)((int)this + 0x78));
  FUN_01347880(*(undefined4 *)((int)this + 0x7c));
  (**(code **)(**(int **)((int)this + 8) + 0x28))(0);
  ExceptionList = local_10;
  return;
}

