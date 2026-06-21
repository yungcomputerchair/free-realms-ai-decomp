// addr: 0x014186c0
// name: CWPlayer_setupDeck
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwplayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall CWPlayer_setupDeck(void *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  void *pvVar6;
  int iVar7;
  void *str;
  undefined4 *puVar8;
  undefined4 unaff_retaddr;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Sets a CWDeck on a CWPlayer, copies deck properties, creates CWCard instances
                       for deck entries, logs each added card, and emits a setup display action.
                       Evidence: cwplayer.cpp strings "setting up deck" and "Adding card",
                       Deck/CWDeck RTTI. */
  puStack_8 = &LAB_016933ce;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffa4;
  ExceptionList = &local_c;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_4 = 0;
  uVar3 = FUN_00f942a0(0,*(undefined4 *)((int)param_1 + 0x20),&DAT_0175b400,0);
  if (uVar3 == 0) {
    piVar4 = (int *)FUN_00d8d382(param_2,0,&Deck::RTTI_Type_Descriptor,&CWDeck::RTTI_Type_Descriptor
                                 ,0,uVar2);
    if (piVar4 == (int *)0x0) {
      FUN_012f5a60(&DAT_018d4520,"..\\common\\rules\\game\\cwplayer.cpp",0xc1);
    }
    pbVar5 = Deck_getPropertyList(piVar4);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((int)param_1 + 0xc),pbVar5,0,0xffffffff);
    *(int **)((int)param_1 + 0x28) = piVar4;
    Game_logGeneral(*(void **)((int)param_1 + 8),"|-- setting up deck for player %d",
                    *(undefined4 *)((int)param_1 + 0x34));
    PlayElement_getGame();
    FUN_0139d7a0();
    puStack_44 = (undefined4 *)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(*piVar4 + 0x4c))(&puStack_48);
    puVar8 = puStack_48;
    if (puStack_44 < puStack_48) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar1 = puStack_44;
      if (puStack_44 < puStack_48) {
        FUN_00d83c2d();
      }
      if (puVar8 == puVar1) break;
      if (puStack_44 <= puVar8) {
        FUN_00d83c2d();
      }
      Game_logGeneral(*(void **)((int)param_1 + 8)," -- -- Adding card %d.",*puVar8);
      pvVar6 = Mem_Alloc(0x150);
      puStack_8._0_1_ = 2;
      if (pvVar6 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)CWCard_ctor();
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      (**(code **)(*piVar4 + 0x44))
                (*(undefined4 *)((int)param_1 + 8),*(undefined4 *)((int)param_1 + 0x34));
      if (puStack_4c <= puVar8) {
        FUN_00d83c2d();
      }
      (**(code **)(*piVar4 + 0xb4))(*puVar8);
      PlayElement_changeParent(unaff_retaddr,3);
      if (puStack_44 <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 1;
    }
    pvVar6 = Mem_Alloc(0x14);
    puStack_8._0_1_ = 3;
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    puStack_8._0_1_ = 1;
    FUN_012f8c70(0x67);
    iVar7 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar6,iVar7);
    unknown_getField30(param_1);
    iVar7 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(pvVar6,iVar7);
    DisplayActionBuilder_addIntArg(pvVar6,*(int *)((int)param_1 + 0x34));
    str = Game_copyCommandObjectList(param_1,&local_2c);
    puStack_8._0_1_ = 4;
    DisplayActionBuilder_addStringArg(pvVar6,str);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    (**(code **)(**(int **)((int)param_1 + 8) + 0x154))(pvVar6);
    local_4 = local_4 & 0xffffff00;
    if (puStack_44 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_44);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = uVar3 & 0xffffff00;
  }
  ExceptionList = local_c;
  return uVar3;
}

