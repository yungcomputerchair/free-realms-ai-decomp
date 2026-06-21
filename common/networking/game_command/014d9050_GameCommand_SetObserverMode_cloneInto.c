// addr: 0x014d9050
// name: GameCommand_SetObserverMode_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSetObserverMode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandSetObserverMode_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_SetObserverMode_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies SetObserverMode derived state into a checked clone target, including
                       byte field +0x24 and dword +0x28 after the base copy. Evidence is the clone
                       assert in GameCommandSetObserverMode.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_SetObserverMode::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandSetObserverMode.cpp",0x3d
                );
  }
  GameCommand_clone(this,gameCommand);
  *(undefined1 *)((int)gameCommand + 0x24) = *(undefined1 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  return;
}

