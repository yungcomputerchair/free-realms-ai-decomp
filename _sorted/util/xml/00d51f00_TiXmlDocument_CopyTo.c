// addr: 0x00d51f00
// name: TiXmlDocument_CopyTo
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlDocument_CopyTo(void * this, void * target) */

void __thiscall TiXmlDocument_CopyTo(void *this,void *target)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  
                    /* Copies a TiXmlDocument into another document, including base node data, error
                       description, and cloned child nodes. Evidence: copies document-specific
                       string at 0x34 and clones each child via virtual Clone before LinkEndChild.
                        */
  FUN_00d50820(target);
  *(undefined1 *)((int)target + 0x2c) = *(undefined1 *)((int)this + 0x2c);
  pcVar5 = (char *)(*(int *)((int)this + 0x34) + 8);
  pcVar3 = pcVar5;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00d53650(pcVar5,(int)pcVar3 - (*(int *)((int)this + 0x34) + 9));
  for (piVar2 = *(int **)((int)this + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[10]) {
    uVar4 = (**(code **)(*piVar2 + 0x3c))();
    TiXmlNode_LinkEndChild(uVar4);
  }
  return;
}

