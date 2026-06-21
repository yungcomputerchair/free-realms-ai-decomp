// addr: 0x0141b480
// name: GameCommand_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_clone(void *this,void *gameCommand)

{
  void *this_00;
  int iVar1;
  undefined1 auStack_8 [8];
  
                    /* Base GameCommand clone helper that validates the destination GameCommand and
                       copies common fields including game/player ids and the base container at
                       +0x18. */
  this_00 = (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &GameCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("gameCommand","..\\common\\networking\\game_command\\GameCommand.cpp",0x5b);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  FUN_0141b3d0(*(undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  iVar1 = (int)this_00 + 0x18;
  if (iVar1 != (int)this + 0x18) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)this_00 + 0x1c),iVar1,
                 *(undefined4 **)((int)this_00 + 0x1c));
    FUN_012415a0((int)this + 0x18);
  }
  return;
}

