// addr: 0x01397e00
// name: Card_getValidTargets
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_getValidTargets(void * this, void * outTargets, void * environment)
    */

bool __thiscall Card_getValidTargets(void *this,void *outTargets,void *environment)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  void *source;
  void *this_00;
  int *extraout_EAX;
  void *context;
  int iVar4;
  undefined4 *puVar5;
  void *local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Computes valid targets for the current action on this card, optionally seeds
                       targets through the game, then runs each target filter/composite value
                       against the output vector. Logs an error if a target filter fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016849b8;
  local_c = ExceptionList;
  source = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  if (*(uint *)((int)this + 0x13c) < 0x10) {
    iVar4 = (int)this + 0x128;
  }
  else {
    iVar4 = *(int *)((int)this + 0x128);
  }
  PlayElement_getId();
  Game_logGeneral(*(void **)((int)this + 0x30),"Card::getValidTargets %s (%d)",iVar4);
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  this_00 = CommandObject_getActionFromEnvironment(environment);
  local_20 = this_00;
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("currentAction","..\\common\\common\\game\\Card.cpp",0x741);
  }
  FUN_0137e030(&local_20);
  bVar2 = card_check_target_modifier_predicates(this,context);
  if (bVar2) {
    Card_checkModifierPredicate68(this,local_1c,2);
  }
  else {
    ArchetypeRemap_allTargetPredicatesAccept(this_00,local_1c,2);
  }
  if ((*(int *)((int)outTargets + 4) == 0) ||
     (*(int *)((int)outTargets + 8) - *(int *)((int)outTargets + 4) >> 2 == 0)) {
    (**(code **)(**(int **)((int)this + 0x30) + 0x144))(outTargets);
    PointerVector_assign(environment,outTargets,source);
  }
  puVar1 = local_14;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  puVar5 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= puVar5) {
      FUN_00d83c2d();
    }
    PropertySerializer_writeCompositeValueA((int *)*puVar5);
    if ((extraout_EAX != (int *)0x0) &&
       (cVar3 = (**(code **)(*extraout_EAX + 0x3c))(outTargets,environment), cVar3 == '\0')) {
      Game_logGeneralFormatted
                (*(undefined4 *)((int)this + 0x30),
                 "get Valid Targets failed in card.getvalidtargets");
      local_4 = 0xffffffff;
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return false;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    if (local_14 <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  local_4 = 0xffffffff;
  if (local_18 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

