// addr: 0x00d51b30
// name: TiXmlElement_CopyTo
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlElement_CopyTo(void * this, void * target) */

void __thiscall TiXmlElement_CopyTo(void *this,void *target)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Copies an element to another TiXmlElement, including base node data, all
                       attributes, and cloned child nodes. Evidence: iterates attributes and calls
                       SetAttribute, then clones/link-end-child for each child. */
  FUN_00d50820(target);
  iVar2 = *(int *)((int)this + 0x4c);
  if (iVar2 != (int)this + 0x2c) {
    while (iVar2 != 0) {
      TiXmlElement_SetAttribute
                (target,(char *)(*(int *)(iVar2 + 0x14) + 8),(char *)(*(int *)(iVar2 + 0x18) + 8));
      iVar2 = FUN_00d50d40();
    }
  }
  for (piVar1 = *(int **)((int)this + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
    uVar3 = (**(code **)(*piVar1 + 0x3c))();
    TiXmlNode_LinkEndChild(uVar3);
  }
  return;
}

