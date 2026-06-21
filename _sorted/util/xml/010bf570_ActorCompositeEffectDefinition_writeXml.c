// addr: 0x010bf570
// name: ActorCompositeEffectDefinition_writeXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActorCompositeEffectDefinition_writeXml(void * this) */

bool __fastcall ActorCompositeEffectDefinition_writeXml(void *this)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  void *local_90;
  int local_8c;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
                    /* Serializes composite effect triggers to XML, writing lifetime attributes,
                       Trigger elements, Effect child elements, effect type/id, scope, eventSlot,
                       and effectCount. Evidence: referenced XML strings and call to
                       ActorEffectDefinition_typeToString. */
  local_44 = 0xffffffff;
  puStack_48 = &LAB_01649056;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  iVar8 = *(int *)((int)this + 0x34);
  bVar5 = false;
  while ((bVar4 = bVar5, iVar8 != 0 && (bVar4 = true, !bVar5))) {
    if ((*(int *)(iVar8 + 0x14) == 0) ||
       (((*(int *)(iVar8 + 0x10) < 0 || (8 < *(int *)(iVar8 + 0x10))) ||
        (*(int *)(iVar8 + 0x20) < 1)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    iVar8 = *(int *)(iVar8 + 0x2c);
  }
  iVar8 = 0;
  if (bVar4) {
    if (DAT_01762a30 < *(float *)((int)this + 0x28)) {
      FUN_00d53080("minLifeTime",(double)*(float *)((int)this + 0x28));
    }
    if (DAT_01762a30 < *(float *)((int)this + 0x2c)) {
      FUN_00d53080("defaultLifeTime",(double)*(float *)((int)this + 0x2c));
    }
    for (iVar2 = *(int *)((int)this + 0x34); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
      if (((*(int *)(iVar2 + 0x14) != 0) && (-1 < *(int *)(iVar2 + 0x10))) &&
         ((*(int *)(iVar2 + 0x10) < 9 && (0 < *(int *)(iVar2 + 0x20))))) {
        iVar8 = iVar8 + 1;
        pvVar6 = Mem_Alloc(0x50);
        local_44 = 0;
        if (pvVar6 == (void *)0x0) {
          local_90 = (void *)0x0;
        }
        else {
          local_90 = (void *)FUN_00d52e70();
        }
        local_44 = 0xffffffff;
        TiXmlElement_SetAttribute(local_90,"triggerName",*(char **)(iVar2 + 4));
        pcVar7 = (char *)ActorEffectDefinition_typeToString();
        TiXmlElement_SetAttribute(local_90,"effectType",pcVar7);
        FUN_00d53030("effectId",*(undefined4 *)(iVar2 + 0x14));
        pcVar7 = "true";
        if (*(char *)(iVar2 + 0x28) == '\0') {
          pcVar7 = "false";
        }
        TiXmlElement_SetAttribute(local_90,"isLocalScope",pcVar7);
        local_8c = 0;
        if (0 < *(int *)(iVar2 + 0x20)) {
          do {
            iVar3 = *(int *)(*(int *)(iVar2 + 0x1c) + 4 + local_8c * 8);
            pfVar1 = (float *)(*(int *)(iVar2 + 0x1c) + local_8c * 8);
            if ((-1 < iVar3) && (iVar3 < 3)) {
              pvVar6 = Mem_Alloc(0x50);
              local_44 = 1;
              if (pvVar6 != (void *)0x0) {
                FUN_00d52e70();
              }
              local_44 = 0xffffffff;
              FUN_00d53080(&DAT_01804c0c,(double)*pfVar1);
              FUN_00d53030("eventSlot",pfVar1[1]);
              TiXmlNode_LinkEndChild();
            }
            local_8c = local_8c + 1;
          } while (local_8c < *(int *)(iVar2 + 0x20));
        }
        TiXmlNode_LinkEndChild();
      }
    }
    FUN_00d53030("effectCount",iVar8);
  }
  ExceptionList = local_4c;
  return 0 < iVar8;
}

