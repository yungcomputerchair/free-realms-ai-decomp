// addr: 0x014d7680
// name: GameCommand_SynchPoint_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSynchPoint.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SynchPoint_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_SynchPoint_cloneInto(void *this,void *gameCommand)

{
  int iVar1;
  void *gameCommand_00;
  undefined1 auStack_8 [8];
  
                    /* Clone routine for GameCommand_SynchPoint; it copies the common base, scalar
                       fields at +0x24/+0x28/+0x2c, and the container at +0x30. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_SynchPoint::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandSynchPoint.cpp",0x3b);
  }
  GameCommand_clone(this,gameCommand_00);
  *(undefined4 *)((int)gameCommand_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  iVar1 = (int)gameCommand_00 + 0x30;
  *(undefined4 *)((int)gameCommand_00 + 0x28) = *(undefined4 *)((int)this + 0x28);
  if (iVar1 != (int)this + 0x30) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)gameCommand_00 + 0x34),iVar1,
                 *(undefined4 **)((int)gameCommand_00 + 0x34));
    FUN_012415a0((int)this + 0x30);
    *(undefined4 *)((int)gameCommand_00 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
    return;
  }
  *(undefined4 *)((int)gameCommand_00 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return;
}

