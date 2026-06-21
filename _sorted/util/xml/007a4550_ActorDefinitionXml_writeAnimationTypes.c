// addr: 0x007a4550
// name: ActorDefinitionXml_writeAnimationTypes
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorDefinitionXml_writeAnimationTypes(void * actorDefinitions) */

void __fastcall ActorDefinitionXml_writeAnimationTypes(void *actorDefinitions)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes the AnimationTypes XML section with comments and AnimationType entries
                       containing name/id/boneMaskSuffix attributes. Evidence: referenced strings
                       name Animation Types, AnimationType, and boneMaskSuffix. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155c571;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c[0] = "Animation Types";
  local_1c[1] = 
  "Create the categories of animations here.  The \"AnimationType::id\" is referenced in each \"AnimationSlot::type\" below."
  ;
  local_1c[2] = "The AnimationType::id\'s must be unique.";
  local_1c[3] = 
  "The \"AnimationSlot::boneMaskIndex\" default bitmask selects the needed bones for the animation (default=\"all\"); defined in BoneMasks.xml."
  ;
  iVar4 = 0;
  do {
    pvVar2 = Mem_Alloc(0x2c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = TiXmlComment_ctor(local_1c[iVar4]);
    }
    local_4 = 0xffffffff;
    TiXmlNode_LinkEndChild(uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  pvVar2 = Mem_Alloc(0x50);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00d52e70("AnimationTypes");
  }
  local_4 = 0xffffffff;
  if (iVar4 != 0) {
    for (iVar1 = *(int *)((int)actorDefinitions + 0x4024); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)
        ) {
      pvVar2 = Mem_Alloc(0x50);
      local_4 = 2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_00d52e70("AnimationType");
      }
      local_4 = 0xffffffff;
      if (pvVar2 != (void *)0x0) {
        TiXmlElement_SetAttribute(pvVar2,"name",*(char **)(iVar1 + 0x18));
        FUN_00d53030(&DAT_017eda64,*(undefined4 *)(iVar1 + 0x10));
        TiXmlElement_SetAttribute(pvVar2,"boneMaskSuffix",*(char **)(iVar1 + 0x28));
        TiXmlNode_LinkEndChild(pvVar2);
      }
    }
    TiXmlNode_LinkEndChild(iVar4);
  }
  ExceptionList = local_c;
  return;
}

