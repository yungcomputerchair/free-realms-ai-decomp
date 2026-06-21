// addr: 0x01500600
// name: CommandObject_RemoveInstalledAction_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool CommandObject_RemoveInstalledAction_doCommand(void * this) */

bool __fastcall CommandObject_RemoveInstalledAction_doCommand(void *this)

{
  void *env;
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  void *card;
  int *formatText;
  char *formatText_00;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_34;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes RemoveInstalledAction: resolves target and origin cards, finds
                       installed actions matching this command's action id, removes them from the
                       card/game action containers, and logs the removal count. Returns false on
                       missing target/origin. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b42b8;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  Game_logGeneral(*(void **)((int)this + 0x30),"CommandObject_RemoveInstalledAction::doCommand",card
                 );
  env = (void *)((int)this + 0x84);
  formatText = EvaluationEnvironment_getTargetCard(env);
  if (formatText == (int *)0x0) {
    Game_logGeneral(*(void **)((int)this + 0x30),"Couldn\'t get target!",card);
    bVar2 = false;
  }
  else {
    EvaluationEnvironment_logCardMessage(env,"targetCard: ",(char *)formatText,card);
    formatText_00 = EvaluationEnvironment_getOriginCard(env);
    EvaluationEnvironment_logCardMessage(env,"originCard: ",formatText_00,card);
    if (formatText_00 == (char *)0x0) {
      Game_logGeneral(*(void **)((int)this + 0x30),"Couldn\'t get originCard!.",card);
      bVar2 = false;
    }
    else {
      uVar4 = PackedActionId_getLow12Bits(*(undefined4 *)((int)this + 0x124));
      uVar4 = PackedActionId_getHighBits(*(undefined4 *)((int)this + 0x124),uVar4);
      Game_logGeneral(*(void **)((int)this + 0x30),"actionID: %d (%d)",uVar4);
      local_18 = (undefined4 *)0x0;
      local_14 = (undefined4 *)0x0;
      local_10 = 0;
      local_4 = 0;
      (**(code **)(*formatText + 0x78))(local_1c);
      puVar1 = local_14;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      puVar7 = local_18;
      iStack_34 = 0;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (puVar7 == puVar1) break;
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (local_14 <= puVar7) {
          FUN_00d83c2d();
        }
        uVar4 = *puVar7;
        if (local_14 <= puVar7) {
          FUN_00d83c2d();
        }
        uVar5 = FUN_01321f20(puVar7[1]);
        uVar5 = PackedActionId_getLow12Bits(uVar5);
        uVar5 = FUN_01321f20(uVar5);
        uVar5 = PackedActionId_getHighBits(uVar5);
        Game_logGeneral(*(void **)((int)this + 0x30),"action: %d (%d), origin: %d",uVar5);
        uVar5 = FUN_01321f20();
        iVar6 = PackedActionId_getHighBits(uVar5);
        if (iVar6 == *(int *)((int)this + 0x124)) {
          Game_logGeneral(*(void **)((int)this + 0x30),"Removing..",card);
          iStack_34 = iStack_34 + 1;
          if (local_14 <= puVar7) {
            FUN_00d83c2d();
          }
          iVar6 = formatText[0x12];
          uVar5 = FUN_01322200(formatText,uVar4,puVar7[1]);
          uVar5 = FUN_013221d0(uVar5);
          cVar3 = (**(code **)(iVar6 + 8))(uVar5);
          if (cVar3 == '\0') {
            uVar5 = PlayElement_getId();
            uVar5 = FUN_01321f20(uVar5);
            uVar5 = PackedActionId_getLow12Bits(uVar5);
            uVar5 = FUN_01321f20(uVar5);
            uVar5 = PackedActionId_getHighBits(uVar5);
            Game_logGeneral(*(void **)((int)this + 0x30),
                            "couldn\'t remove action %d (%d) from card %d!",uVar5);
          }
          if (local_14 <= puVar7) {
            FUN_00d83c2d();
          }
          iVar6 = FUN_01321f20();
          Card_removeActionOriginPair(formatText,(void *)puVar7[1],iVar6,(int)card);
          while( true ) {
            if (local_14 <= puVar7) {
              FUN_00d83c2d();
            }
            iVar6 = **(int **)((int)this + 0x30);
            uVar5 = FUN_01322200(formatText,uVar4,puVar7[1]);
            uVar5 = FUN_013221d0(uVar5);
            cVar3 = (**(code **)(iVar6 + 8))(uVar5);
            if (cVar3 == '\0') break;
            Game_logGeneral(*(void **)((int)this + 0x30),"Removing action from game.",card);
          }
        }
        if (local_14 <= puVar7) {
          FUN_00d83c2d();
        }
        puVar7 = puVar7 + 2;
      }
      Game_logGeneral(*(void **)((int)this + 0x30),"Removed %d actions",iStack_34);
      local_4 = 0xffffffff;
      if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      bVar2 = true;
    }
  }
  ExceptionList = local_c;
  return bVar2;
}

