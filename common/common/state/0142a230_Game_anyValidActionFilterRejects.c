// addr: 0x0142a230
// name: Game_anyValidActionFilterRejects
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_anyValidActionFilterRejects(void * game, void * env) */

bool __thiscall Game_anyValidActionFilterRejects(void *this,void *game,void *env)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *element;
  void *pvVar5;
  undefined1 auStack_18 [4];
  int iStack_14;
  char cStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Checks whether valid-action filters reject the current originating card,
                       logging if the originating card is not active. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01695808;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x4c) == '\0') {
LAB_0142a28a:
    uVar2 = 0;
  }
  else {
    if ((*(char *)((int)this + 0x54) != '\0') && (*(int *)((int)this + 0x50) != 0)) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x4c))();
      if (cVar1 == '\0') {
        Game_logGeneral(*(void **)((int)this + 0x30),"Originating Card is not active.",uVar3);
        goto LAB_0142a28a;
      }
    }
    uVar4 = Rules_getDynamicCardReturnCard();
    element = EvaluationEnvironment_getOriginCard(game);
    pvVar5 = CommandObject_getActionFromEnvironment(game);
    EvaluationEnvironment_setDynamicCardReturn(*(undefined4 *)((int)this + 0x50));
    FUN_012fa910();
    uStack_4 = 0;
    uVar2 = (**(code **)(**(int **)((int)this + 0x48) + 0x38))(auStack_18,game);
    if ((iStack_14 == 1) && (cStack_10 == '\0')) {
      uVar2 = 0;
    }
    set_play_element_id_field(game,element);
    EvaluationEnvironment_setActionReturn(pvVar5);
    EvaluationEnvironment_setDynamicCardReturn(uVar4);
    uStack_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return (bool)uVar2;
}

