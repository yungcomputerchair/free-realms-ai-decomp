// addr: 0x0141b020
// name: GameCommand_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int GameCommand_execute(void * this) */

int __fastcall GameCommand_execute(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 uVar5;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  undefined1 auStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Base GameCommand execute helper: asserts mGame, flushes/logs queued command
                       info when not in replay mode, formats the command name, and optionally prints
                       '--> %s'. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01693938;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&iStack_3c;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommand.cpp",0x1c,
                 DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  }
  bVar3 = Game_getFlag_14d(*(void **)((int)this + 8));
  uVar5 = extraout_var;
  if (!bVar3) {
    puStack_30 = *(undefined4 **)((int)this + 0x1c);
    puStack_38 = (undefined4 *)*puStack_30;
    iStack_3c = (int)this + 0x18;
    while( true ) {
      puVar2 = puStack_38;
      iVar1 = iStack_3c;
      if ((iStack_3c == 0) || (iStack_3c != (int)this + 0x18)) {
        FUN_00d83c2d();
      }
      if (puVar2 == puStack_30) break;
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if ((puVar2 == *(undefined4 **)(iVar1 + 4)) &&
         (FUN_00d83c2d(), puVar2 == *(undefined4 **)(iVar1 + 4))) {
        FUN_00d83c2d();
      }
      GameCommand_setQueuedCommandValue(puVar2[3],puVar2[4]);
      FUN_004d21f9();
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    uStack_4 = 0;
    (**(code **)(*(int *)this + 0x4c))(auStack_2c);
    GameCommand_recordOrExecute(*(void **)((int)this + 8),auStack_2c);
    cVar4 = Game_shouldLogCommands();
    uVar5 = extraout_var_00;
    if (cVar4 != '\0') {
      WAErrorLog_write("--> %s");
      uVar5 = extraout_var_01;
    }
    uStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar5,1);
}

