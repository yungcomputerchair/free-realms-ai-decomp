// addr: 0x0136d6a0
// name: Game_dispatchCommandToAllPlayers
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCommandToAllPlayers(void * this, void * command) */

void __thiscall Game_dispatchCommandToAllPlayers(void *this,void *command)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 unaff_EBP;
  uint uVar4;
  
                    /* Dispatches a command to all players in both player lists by cloning/deriving
                       per-player command data, or logs 'CW_ERROR: Server ignoring game commands!'
                       when the ignore flag is set. */
  if (*(char *)((int)this + 0x362) == '\0') {
    if (*(char *)((int)this + 0x388) == '\0') {
      if (command != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0136d6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined4 **)command)();
        return;
      }
    }
    else {
      uVar1 = *(uint *)((int)this + 0x2c);
      if (uVar1 < *(uint *)((int)this + 0x28)) {
        FUN_00d83c2d();
      }
      uVar4 = *(uint *)((int)this + 0x28);
      if (*(uint *)((int)this + 0x2c) < uVar4) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (this == (void *)0xffffffdc) {
          FUN_00d83c2d();
        }
        if (uVar4 == uVar1) break;
        if (this == (void *)0xffffffdc) {
          FUN_00d83c2d();
        }
        if (*(uint *)((int)this + 0x2c) <= uVar4) {
          FUN_00d83c2d();
        }
        pvVar2 = (void *)(**(code **)(*(int *)command + 0x44))();
        iVar3 = GamePlayer_getPlayerId();
        Game_dispatchCommandToPlayer(this,iVar3,pvVar2);
        if (*(uint *)((int)this + 0x2c) <= uVar4) {
          FUN_00d83c2d();
        }
        uVar4 = uVar4 + 4;
      }
      uVar1 = *(uint *)((int)this + 0x4c);
      if (uVar1 < *(uint *)((int)this + 0x48)) {
        FUN_00d83c2d();
      }
      uVar4 = *(uint *)((int)this + 0x48);
      if (*(uint *)((int)this + 0x4c) < uVar4) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (this == (void *)0xffffffbc) {
          FUN_00d83c2d();
        }
        if (uVar4 == uVar1) break;
        if (this == (void *)0xffffffbc) {
          FUN_00d83c2d();
        }
        if (*(uint *)((int)this + 0x4c) <= uVar4) {
          FUN_00d83c2d();
        }
        pvVar2 = (void *)(**(code **)(*(int *)command + 0x44))();
        iVar3 = GamePlayer_getPlayerId();
        Game_dispatchCommandToPlayer(this,iVar3,pvVar2);
        if (*(uint *)((int)this + 0x4c) <= uVar4) {
          FUN_00d83c2d();
        }
        uVar4 = uVar4 + 4;
      }
      if (command != (void *)0x0) {
        (*(code *)**(undefined4 **)command)(1);
      }
    }
  }
  else {
    Game_logGeneral(this,"CW_ERROR: Server ignoring game commands!",unaff_EBP);
    if (command != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0136d80e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined4 **)command)();
      return;
    }
  }
  return;
}

