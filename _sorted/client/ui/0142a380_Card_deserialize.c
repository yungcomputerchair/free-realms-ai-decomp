// addr: 0x0142a380
// name: Card_deserialize
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_deserialize(void * this, void * in) */

bool __thiscall Card_deserialize(void *this,void *in)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 *extraout_EAX;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  int elementId_;
  int unaff_ESI;
  int unaff_EDI;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  int local_10;
  int aiStack_c [2];
  int iStack_4;
  
                    /* Deserializes a Card by first deserializing the PlayElement base, then reading
                       optional ExpressionTreeNode and Card references plus boolean fields. Evidence
                       is PlayElement_deserialize, Card RTTI cast, and deserializer integer calls.
                        */
  cVar1 = (**(code **)(*(int *)this + 0x10))(in,&local_10);
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = PlayElement_deserialize(this,in);
  if (!bVar2) {
    return false;
  }
  cVar1 = Deserializer_readInteger(in,&iStack_4);
  if (!(bool)cVar1) {
    return false;
  }
  if (iStack_4 != 0) {
    ComponentFactory_initSingleton();
    uVar4 = (**(code **)*extraout_EAX)
                      (iStack_4,0,&PersistentComponent::RTTI_Type_Descriptor,
                       &ExpressionTreeNode::RTTI_Type_Descriptor,0);
    piVar5 = (int *)FUN_00d8d382(uVar4);
    *(int **)((int)this + 0x40) = piVar5;
    if (piVar5 == (int *)0x0) {
      return false;
    }
    cVar1 = (**(code **)(*piVar5 + 0x24))(in);
    if (cVar1 == '\0') {
      return false;
    }
  }
  Deserializer_readInteger(in,(int *)&stack0xffffffec);
  if (cVar1 == '\0') {
    return false;
  }
  *(bool *)((int)this + 0x44) = unaff_ESI != 0;
  if (1 < unaff_EDI) {
    bVar2 = Deserializer_readInteger(in,&local_10);
    if (!bVar2) {
      return false;
    }
    if (local_10 != 0) {
      uVar9 = 0;
      pTVar8 = &Card::RTTI_Type_Descriptor;
      pTVar7 = &PlayElement::RTTI_Type_Descriptor;
      uVar4 = 0;
      pvVar6 = find_play_element_in_maps(*(void **)((int)this + 0x28),elementId_);
      uVar4 = FUN_00d8d382(pvVar6,uVar4,pTVar7,pTVar8,uVar9);
      *(undefined4 *)((int)this + 0x48) = uVar4;
    }
  }
  if (2 < unaff_EDI) {
    bVar2 = Deserializer_readInteger(in,aiStack_c);
    if (!bVar2) {
      return false;
    }
    *(bool *)((int)this + 0x4c) = aiStack_c[0] != 0;
  }
  uVar3 = (**(code **)(*(int *)this + 0x14))(in);
  return (bool)uVar3;
}

