// addr: 0x00beae80
// name: AreaDefinition_writeXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AreaDefinition_writeXml(void * this, void * element) */

bool __thiscall AreaDefinition_writeXml(void *this,void *element)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes an area definition to XML, writing name/id, optional parentAreaId
                       and AreaEnabled, then serializing properties as Property child elements.
                       Evidence: referenced XML strings and virtual calls over the property list. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015f14ab;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  TiXmlElement_SetAttribute(element,"name",*(char **)((int)this + 0x180));
  FUN_00d53030(&DAT_017eda64,*(undefined4 *)((int)this + 0x178));
  if (*(int *)((int)this + 0x1ac) != -1) {
    FUN_00d53030("parentAreaId",*(int *)((int)this + 0x1ac));
  }
  if (*(char *)((int)this + 0x1a9) == '\0') {
    FUN_00d53030("AreaEnabled",0);
  }
  (**(code **)(*(int *)this + 0x2c))(element,uVar2);
  for (piVar1 = *(int **)((int)this + 400); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    pvVar3 = Mem_Alloc(0x50);
    puStack_8 = (undefined1 *)0x0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00d52e70("Property");
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar1 + 0x24))(uVar4);
    TiXmlNode_LinkEndChild(uVar4);
  }
  ExceptionList = unaff_EBP;
  return true;
}

