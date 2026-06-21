// addr: 0x0136ca90
// name: Game_queueIntroduceCardCommand
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_queueIntroduceCardCommand(void * this, void * queue, void * card) */

void __thiscall Game_queueIntroduceCardCommand(void *this,void *queue,void *card)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds a GameCommand_IntroduceCard for a non-null card with a valid player
                       id, sets the introduced card, and queues it. It asserts the card and
                       card->getPlayerID(). */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016804fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this_00 = (void *)0x0;
  if (card == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Game.cpp",0x1ce7,uVar1);
  }
  iVar2 = (**(code **)(*(int *)card + 0x28))();
  if (iVar2 == 0) {
    FUN_012f5a60("card->getPlayerID()","..\\common\\common\\game\\Game.cpp",0x1ce8,uVar1);
  }
  pvVar3 = Mem_Alloc(0x30);
  uStack_4 = 0;
  if (pvVar3 != (void *)0x0) {
    this_00 = (void *)GameCommand_IntroduceCard_ctor(this);
  }
  uStack_4 = 0xffffffff;
  uVar1 = (**(code **)(*(int *)card + 0x28))();
  set_field_4(this_00,uVar1);
  GameCommand_IntroduceCard_setCardIntroduced(this_00,card);
  Game_dispatchCommandToPlayer(this,(int)queue,this_00);
  ExceptionList = local_c;
  return;
}

