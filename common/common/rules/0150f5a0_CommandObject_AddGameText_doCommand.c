// addr: 0x0150f5a0
// name: CommandObject_AddGameText_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_AddGameText_doCommand(void * this) */

bool __fastcall CommandObject_AddGameText_doCommand(void *this)

{
  void *env;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  
                    /* If a Card target is available, logs 'Adding Game Text from %s to %s' using
                       source/target names and invokes a virtual method on the source object to add
                       text to the target. Returns true even if no target is found. */
  uVar8 = 0;
  pTVar7 = &Card::RTTI_Type_Descriptor;
  pTVar6 = &PlayElement::RTTI_Type_Descriptor;
  env = (void *)((int)this + 0x84);
  uVar5 = 0;
  pvVar1 = EvaluationEnvironment_resolveTarget(env);
  iVar2 = FUN_00d8d382(pvVar1,uVar5,pTVar6,pTVar7,uVar8);
  if (iVar2 != 0) {
    EvaluationEnvironment_getOriginCard(env);
    Card_getPropertyMap();
    iVar3 = Card_getPropertyMap();
    if (*(uint *)(iVar3 + 0x18) < 0x10) {
      iVar3 = iVar3 + 4;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
    Game_logGeneral(*(void **)((int)this + 0x30),"Adding Game Text from %s to %s",iVar3);
    piVar4 = EvaluationEnvironment_getOriginCard(env);
    (**(code **)(*piVar4 + 0x1e0))(iVar2);
  }
  return true;
}

