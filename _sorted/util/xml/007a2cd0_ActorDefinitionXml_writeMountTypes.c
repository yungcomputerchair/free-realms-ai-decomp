// addr: 0x007a2cd0
// name: ActorDefinitionXml_writeMountTypes
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorDefinitionXml_writeMountTypes(void * actorDefinitions) */

void __fastcall ActorDefinitionXml_writeMountTypes(void *actorDefinitions)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes the MountTypes XML section, including explanatory comments and
                       MountType entries with id, animSlotPrefix, and description attributes.
                       Evidence: referenced strings are Mount Types/MountType and related attribute
                       names. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155c501;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20[0] = "Mount Types";
  local_20[1] = "Create the categories of mount types here.";
  local_20[2] = 
  "   MountType::id:              must be unique and strictly increasing; optionally referenced in each animation slot of a mounted type (default=0) "
  ;
  local_20[3] = 
  "   MountType::animSlotPrefix:  animation slot prefix for the given mount type (e.g., \"trex\" + \"loc_stand\" = \"trex_loc_stand\"). (default=\"\") "
  ;
  local_20[4] = 
  "   MountType::description:     description of the mount type (displayed in the Actor Tool) ";
  iVar4 = 0;
  do {
    pvVar2 = Mem_Alloc(0x2c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = TiXmlComment_ctor(local_20[iVar4]);
    }
    local_4 = 0xffffffff;
    TiXmlNode_LinkEndChild(uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  pvVar2 = Mem_Alloc(0x50);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00d52e70("MountTypes");
  }
  local_4 = 0xffffffff;
  if (iVar4 != 0) {
    for (iVar1 = *(int *)((int)actorDefinitions + 0x4968); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)
        ) {
      pvVar2 = Mem_Alloc(0x50);
      local_4 = 2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_00d52e70("MountType");
      }
      local_4 = 0xffffffff;
      if (pvVar2 != (void *)0x0) {
        FUN_00d53030(&DAT_017eda64,*(undefined4 *)(iVar1 + 0x10));
        TiXmlElement_SetAttribute(pvVar2,"animSlotPrefix",*(char **)(iVar1 + 0x18));
        TiXmlElement_SetAttribute(pvVar2,"description",*(char **)(iVar1 + 0x28));
        TiXmlNode_LinkEndChild(pvVar2);
      }
    }
    TiXmlNode_LinkEndChild(iVar4);
  }
  ExceptionList = local_c;
  return;
}

