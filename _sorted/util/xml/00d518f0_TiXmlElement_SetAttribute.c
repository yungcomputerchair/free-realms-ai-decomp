// addr: 0x00d518f0
// name: TiXmlElement_SetAttribute
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlElement_SetAttribute(void * this, char * name, char * value) */

void __thiscall TiXmlElement_SetAttribute(void *this,char *name,char *value)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Sets or creates a TinyXML string attribute: finds an existing attribute by
                       name and updates its value, otherwise allocates a TiXmlAttribute and adds it
                       to the element's attribute set. Evidence: calls TiXmlAttributeSet_Find/Add,
                       copies the value string, and reports a TinyXML allocation error if needed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616d9b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  iVar3 = TiXmlAttributeSet_Find(name);
  if (iVar3 != 0) {
    pcVar5 = value;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00d53650(value,(int)pcVar5 - (int)(value + 1));
    ExceptionList = local_c;
    return;
  }
  pvVar4 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)TiXmlAttribute_ctor(name,value);
  }
  local_4 = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    TiXmlAttributeSet_Add((void *)((int)this + 0x2c),pvVar4);
    ExceptionList = local_c;
    return;
  }
  pvVar4 = (void *)TiXmlNode_FirstChild(uVar2);
  if (pvVar4 != (void *)0x0) {
    TiXmlDocument_SetError(pvVar4,3,(char *)0x0,0,(char *)0x0);
  }
  ExceptionList = local_c;
  return;
}

