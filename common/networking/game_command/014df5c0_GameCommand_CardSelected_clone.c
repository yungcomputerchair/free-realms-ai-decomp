// addr: 0x014df5c0
// name: GameCommand_CardSelected_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCardSelected.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CardSelected_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_CardSelected_clone(void *this,void *gameCommand)

{
  void *gameCommand_00;
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int elementId_;
  
                    /* Clone routine for GameCommand_CardSelected; it validates/copies the base
                       command and copies selected-card ids/metadata, deriving some card details
                       when the selected PlayElement is a Card. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_CardSelected::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandCardSelected.cpp",0x3c);
  }
  GameCommand_clone(this,gameCommand_00);
  *(undefined4 *)((int)gameCommand_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  pvVar1 = find_play_element_in_maps(*(void **)((int)gameCommand_00 + 8),elementId_);
  piVar2 = (int *)FUN_00d8d382(pvVar1,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_0138a380();
    *(undefined4 *)((int)gameCommand_00 + 0x28) = uVar3;
    uVar3 = (**(code **)(*piVar2 + 0x28))();
    *(undefined4 *)((int)gameCommand_00 + 0x30) = uVar3;
  }
  *(undefined4 *)((int)gameCommand_00 + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand_00 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)gameCommand_00 + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined1 *)((int)gameCommand_00 + 0x34) = *(undefined1 *)((int)this + 0x34);
  return;
}

