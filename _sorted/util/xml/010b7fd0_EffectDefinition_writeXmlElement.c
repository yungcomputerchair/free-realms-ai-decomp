// addr: 0x010b7fd0
// name: EffectDefinition_writeXmlElement
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EffectDefinition_writeXmlElement(void * this) */

bool __fastcall EffectDefinition_writeXmlElement(void *this)

{
  char cVar1;
  void *pvVar2;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates and serializes an EffectDefinition XML element with
                       name/id/time/loadType attributes, delegates class-specific XML writing, and
                       links the element on success. Evidence: strings 'EffectDefinition',
                       'startTimeOfDay', and 'loadType'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016484ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = (undefined4 *)FUN_00d52e70("EffectDefinition");
  }
  local_4 = 0xffffffff;
  TiXmlElement_SetAttribute(this_00,"name",*(char **)((int)this + 0x10));
  FUN_00d53030(&DAT_017eda64,*(undefined4 *)((int)this + 4));
  if (*(int *)((int)this + 0x1c) != -1) {
    FUN_00d53030("startTimeOfDay",*(int *)((int)this + 0x1c));
  }
  if (*(int *)((int)this + 0x20) != -1) {
    FUN_00d53030("stopTimeOfDay",*(int *)((int)this + 0x20));
  }
  FUN_00d53030("loadType",*(undefined4 *)((int)this + 0x24));
  cVar1 = (**(code **)(*(int *)this + 0x20))(this_00);
  if (cVar1 == '\0') {
    if (this_00 != (undefined4 *)0x0) {
      (**(code **)*this_00)(1);
    }
    ExceptionList = pvVar2;
    return false;
  }
  TiXmlNode_LinkEndChild(this_00);
  ExceptionList = pvVar2;
  return true;
}

