// addr: 0x010b49b0
// name: ActorModelMaterialDefinition_writeXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActorModelMaterialDefinition_writeXml(void * this, void * element) */

bool __thiscall ActorModelMaterialDefinition_writeXml(void *this,void *element)

{
  int iVar1;
  void *pvVar2;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes a model material effect definition, writing
                       material/transitionTime and Parameter child elements with name/type/value
                       attributes. Evidence: literals 'material', 'Parameter', and 'value' plus
                       iteration over the parameter list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01647c9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TiXmlElement_SetAttribute(element,"material",*(char **)((int)this + 0x34));
  FUN_00d53080("transitionTime",(double)*(float *)((int)this + 0x58));
  for (iVar1 = *(int *)((int)this + 0x4c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x38)) {
    pvVar2 = Mem_Alloc(0x50);
    this_00 = (void *)0x0;
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      this_00 = (void *)FUN_00d52e70();
    }
    local_4 = 0xffffffff;
    TiXmlElement_SetAttribute(this_00,"name",*(char **)(iVar1 + 4));
    TiXmlElement_SetAttribute(this_00,"type",*(char **)(iVar1 + 0x14));
    TiXmlElement_SetAttribute(this_00,"value",*(char **)(iVar1 + 0x24));
    TiXmlNode_LinkEndChild();
  }
  ExceptionList = local_c;
  return true;
}

