// addr: 0x014107a0
// name: Game_getOwnerPlayerIdForElement
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getOwnerPlayerIdForElement(void * this, int elementId_) */

int __thiscall Game_getOwnerPlayerIdForElement(void *this,int elementId_)

{
  int iVar1;
  undefined4 *extraout_EAX;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int extraout_EDX;
  int elementId__00;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Returns cached owner/player id for an element, or resolves the play element
                       and player element to obtain its owner id. */
  StdRbTreeInt_find_alt((void *)((int)this + 0xac),local_8,&elementId_,unaff_EDI);
  pvVar4 = (void *)*extraout_EAX;
  iVar3 = *(int *)((int)this + 0xb0);
  iVar1 = extraout_EAX[1];
  if ((pvVar4 == (void *)0x0) || (elementId__00 = iVar3, pvVar4 != (void *)((int)this + 0xac))) {
    FUN_00d83c2d();
    elementId__00 = extraout_EDX;
  }
  if (iVar1 != iVar3) {
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    return *(int *)(iVar1 + 0x10);
  }
  piVar2 = find_play_element_in_maps(*(void **)((int)this + 4),elementId__00);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    pvVar4 = PlayArea_findPlayerElementById(*(void **)((int)this + 4),iVar3);
    if (pvVar4 != (void *)0x0) {
      unknown_getField30(pvVar4);
      iVar3 = PlayElement_getId();
      return iVar3;
    }
  }
  return 0;
}

