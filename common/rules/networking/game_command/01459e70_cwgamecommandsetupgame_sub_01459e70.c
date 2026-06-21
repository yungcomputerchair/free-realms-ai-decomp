// addr: 0x01459e70
// name: cwgamecommandsetupgame_sub_01459e70
// subsystem: common/rules/networking/game_command
// source (binary assert): common/rules/networking/game_command/cwgamecommandsetupgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void cwgamecommandsetupgame_sub_01459e70(int param_1_) */

void __fastcall cwgamecommandsetupgame_sub_01459e70(int param_1_)

{
  int iVar1;
  uint uVar2;
  int *this;
  int iVar3;
  int extraout_EAX;
  undefined4 uVar4;
  void *this_00;
  void *apvStack_418 [2];
  void *pvStack_410;
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path
                       ..\\common\\rules\\networking\\game_command\\cwgamecommandsetupgame.cpp;
                       strings ERROR! GAME HAS WRONG VERSION! %d != %d, ERROR! GAME HAS VERSION
                       NUMBER DIFFERENT THAN SERVER VERSION!, mg_game. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169c7b9;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)apvStack_418);
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffbd8;
  ExceptionList = &local_c;
  this = (int *)FUN_00d8d382(*(undefined4 *)(param_1_ + 8),0,&CTP::Game::RTTI_Type_Descriptor,
                             &CWGame::RTTI_Type_Descriptor,0);
  if (this == (int *)0x0) {
    FUN_012f5a60("mg_game","..\\common\\rules\\networking\\game_command\\cwgamecommandsetupgame.cpp"
                 ,0x5c);
  }
  GameCommand_execute((void *)param_1_);
  iVar1 = *(int *)(param_1_ + 0x50);
  iVar3 = FUN_01347aa0();
  if ((iVar3 != iVar1) && (iVar1 != 0)) {
    DisplayActionManager_ensureSingleton();
    this_00 = (void *)0x0;
    if (extraout_EAX != 0) {
      apvStack_418[0] = Mem_Alloc(0x14);
      uStack_4 = 0;
      if (apvStack_418[0] != (void *)0x0) {
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
    uVar4 = FUN_01347aa0(*(undefined4 *)(param_1_ + 0x50));
    FUN_012f5dc0("ERROR! GAME HAS WRONG VERSION! %d != %d",uVar4);
  }
  FUN_0135ce40(*(undefined4 *)(param_1_ + 0xc));
  FUN_01347e80(*(undefined4 *)(param_1_ + 0x24));
  FUN_01347c30(*(undefined4 *)(param_1_ + 0x2c));
  FUN_01347960(*(undefined4 *)(param_1_ + 0x58));
  FUN_0135f9d0(param_1_ + 0x30);
  FUN_0135f9e0(param_1_ + 0x40);
  Game_setMyPlayerID(this,*(int *)(param_1_ + 4));
  FUN_01347ee0(*(undefined4 *)(param_1_ + 0x54));
  FUN_013479b0(*(undefined4 *)(param_1_ + 0x5c));
  FUN_013488a0(*(undefined4 *)(param_1_ + 0x60));
  FUN_01348d10(*(undefined4 *)(param_1_ + 100));
  FUN_01347940(*(undefined4 *)(param_1_ + 0x68));
  Game_setMatchStructure(*(undefined4 *)(param_1_ + 0x78));
  FUN_01347880(*(undefined4 *)(param_1_ + 0x7c));
  FUN_01348eb0(*(int *)(param_1_ + 0x80) == 1);
  FUN_01348ed0(*(int *)(param_1_ + 0x84) == 1);
  (**(code **)(*this + 0x28))(*(int *)(param_1_ + 0x54) << 8);
  ExceptionList = local_10;
  return;
}

