// addr: 0x007b01d0
// name: SoundDefinitionXml_writeMasterCategories
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoundDefinitionXml_writeMasterCategories(void * soundConfig) */

void __fastcall SoundDefinitionXml_writeMasterCategories(void *soundConfig)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes the masterCategories XML section and a child masterCategory element
                       for each configured category. Evidence: strings 'masterCategories' and
                       'masterCategory' are used as element names with id/name attributes. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155dcd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x50);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_00d52e70("masterCategories");
  }
  local_4 = 0xffffffff;
  for (iVar1 = *(int *)((int)soundConfig + 0x4c8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    pvVar2 = Mem_Alloc(0x50);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_00d52e70("masterCategory");
    }
    local_4 = 0xffffffff;
    TiXmlElement_SetAttribute(pvVar2,"name",*(char **)(iVar1 + 0xc));
    FUN_00d53030(&DAT_017eda64,*(undefined4 *)(iVar1 + 4));
    TiXmlNode_LinkEndChild(pvVar2);
  }
  TiXmlNode_LinkEndChild(uVar3);
  ExceptionList = local_c;
  return;
}

