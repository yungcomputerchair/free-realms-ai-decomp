// addr: 0x01429d40
// name: GameCommand_FatalError_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFatalError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FatalError_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_FatalError_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  void *_Dst;
  
                    /* Clones a GameCommand_FatalError by dynamic-casting the target, copying
                       base/string state, allocating a new compressed buffer, copying bytes from
                       0x88, and preserving size fields. Evidence is RTTI and the 'clone' assert in
                       GameCommandFatalError.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_FatalError::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandFatalError.cpp",0x61);
  }
  GameCommand_clone(this,gameCommand);
  Exception_assign((void *)((int)gameCommand + 0x24),(void *)((int)this + 0x24));
  *(undefined4 *)((int)gameCommand + 0x90) = *(undefined4 *)((int)this + 0x90);
  _Dst = Mem_Alloc(*(int *)((int)this + 0x90) + 1);
  *(void **)((int)gameCommand + 0x88) = _Dst;
  _memcpy(_Dst,*(void **)((int)this + 0x88),*(size_t *)((int)this + 0x90));
  *(undefined4 *)((int)gameCommand + 0x8c) = *(undefined4 *)((int)this + 0x8c);
  return;
}

