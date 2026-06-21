// addr: 0x01418320
// name: PlayArea_fromPlayElementField
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayArea_fromPlayElementField(void * this) */

void __fastcall PlayArea_fromPlayElementField(void *this)

{
  void *pvVar1;
  int in_EDX;
  undefined4 uVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 uVar5;
  
                    /* Retrieves a PlayElement-related object from field +0x4c, casts it to
                       PlayArea, and discards the result. Exact caller-side purpose is unclear. */
  uVar5 = 0;
  pTVar4 = &PlayArea::RTTI_Type_Descriptor;
  pTVar3 = &PlayElement::RTTI_Type_Descriptor;
  uVar2 = 0;
  pvVar1 = find_play_element_in_maps(*(void **)((int)this + 8),in_EDX);
  FUN_00d8d382(pvVar1,uVar2,pTVar3,pTVar4,uVar5);
  return;
}

