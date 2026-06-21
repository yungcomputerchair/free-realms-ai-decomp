// addr: 0x014e4c90
// name: DeckCommand_PopulateOnlineDeckData_cloneInto
// subsystem: common/networking/deck_command
// source (binary assert): common/networking/deck_command/DeckCommandPopulateOnlineDeckData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_PopulateOnlineDeckData_cloneInto(void * this, void * target)
    */

void __thiscall DeckCommand_PopulateOnlineDeckData_cloneInto(void *this,void *target)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *ownerVector;
  void *target_00;
  undefined4 *puVar4;
  void *unaff_EDI;
  undefined4 uStack_14;
  void *local_10;
  undefined1 auStack_8 [8];
  
                    /* Copies a DeckCommand_PopulateOnlineDeckData into an existing target:
                       validates RTTI, copies the DeckCommand base, then iterates the source vector
                       and appends cloned/serialized element values into the destination vector. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &DeckCommand_PopulateOnlineDeckData::RTTI_Type_Descriptor,0);
  local_10 = target_00;
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\deck_command\\DeckCommandPopulateOnlineDeckData.cpp",0x44)
    ;
  }
  DeckCommand_cloneInto(target_00);
  puVar1 = *(undefined4 **)((int)this + 0xc);
  if (puVar1 < *(undefined4 **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)this + 8);
  if (*(undefined4 **)((int)this + 0xc) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0xc) <= puVar4) {
      FUN_00d83c2d();
    }
    uStack_14 = (**(code **)(*(int *)*puVar4 + 0x74))();
    pvVar2 = *(void **)((int)target_00 + 8);
    if ((pvVar2 == (void *)0x0) ||
       ((uint)(*(int *)((int)target_00 + 0x10) - (int)pvVar2 >> 2) <=
        (uint)(*(int *)((int)target_00 + 0xc) - (int)pvVar2 >> 2))) {
      ownerVector = *(void **)((int)target_00 + 0xc);
      if (ownerVector < pvVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator
                ((void *)((int)target_00 + 4),auStack_8,(void *)((int)target_00 + 4),ownerVector,
                 &uStack_14,unaff_EDI);
    }
    else {
      puVar3 = *(undefined4 **)((int)target_00 + 0xc);
      *puVar3 = uStack_14;
      *(undefined4 **)((int)target_00 + 0xc) = puVar3 + 1;
    }
    if (*(undefined4 **)((int)this + 0xc) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
    target_00 = local_10;
  }
  return;
}

