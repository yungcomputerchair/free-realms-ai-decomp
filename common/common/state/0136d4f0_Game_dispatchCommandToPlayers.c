// addr: 0x0136d4f0
// name: Game_dispatchCommandToPlayers
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCommandToPlayers(void * this, void * command) */

void __thiscall Game_dispatchCommandToPlayers(void *this,void *command)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *command_00;
  uint uVar4;
  void *this_00;
  
                    /* Dispatches a command to player collections unless the server is ignoring game
                       commands, then releases the command object. */
  if (*(char *)((int)this + 0x362) == '\0') {
    uVar1 = *(uint *)((int)this + 0x2c);
    this_00 = this;
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
      Game_dispatchCommandToPlayer(this_00,iVar3,pvVar2);
      if (*(uint *)((int)this + 0x2c) <= uVar4) {
        FUN_00d83c2d();
      }
      uVar4 = uVar4 + 4;
    }
    uVar1 = *(uint *)((int)this_00 + 0x4c);
    pvVar2 = this_00;
    if (uVar1 < *(uint *)((int)this_00 + 0x48)) {
      FUN_00d83c2d();
    }
    uVar4 = *(uint *)((int)this_00 + 0x48);
    if (*(uint *)((int)this_00 + 0x4c) < uVar4) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (this_00 == (void *)0xffffffbc) {
        FUN_00d83c2d();
      }
      if (uVar4 == uVar1) break;
      if (this_00 == (void *)0xffffffbc) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)this_00 + 0x4c) <= uVar4) {
        FUN_00d83c2d();
      }
      command_00 = (void *)(**(code **)(*(int *)command + 0x44))();
      iVar3 = GamePlayer_getPlayerId();
      Game_dispatchCommandToPlayer(pvVar2,iVar3,command_00);
      if (*(uint *)((int)this_00 + 0x4c) <= uVar4) {
        FUN_00d83c2d();
      }
      uVar4 = uVar4 + 4;
    }
    if (command != (void *)0x0) {
      (*(code *)**(undefined4 **)command)(1);
    }
  }
  else {
    Game_logGeneral(this,"CW_ERROR: Server ignoring game commands!",this);
    if (command != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0136d631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined4 **)command)();
      return;
    }
  }
  return;
}

