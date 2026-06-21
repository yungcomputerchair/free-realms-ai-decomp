// addr: 0x007af290
// name: SoundDefinitionXml_writeSoundDriver
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoundDefinitionXml_writeSoundDriver(void * soundConfig) */

void __fastcall SoundDefinitionXml_writeSoundDriver(void *soundConfig)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes sound driver XML settings including channel/sample/reverb option
                       groups and pan/rolloff factors. Evidence: referenced strings include
                       soundDriver, channelOptions, sampleOptions, reverbOptions, panFactor, and
                       rolloffFactor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155dc6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00d52e70();
  }
  local_4 = 0xffffffff;
  TiXmlElement_SetAttribute(pvVar1,"path",*(char **)((int)soundConfig + 0x84));
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 1;
  if (pvVar1 != (void *)0x0) {
    FUN_00d52e70();
  }
  local_4 = 0xffffffff;
  FUN_00d53030(&DAT_017ef7f4,**(undefined4 **)((int)soundConfig + 0x10));
  FUN_00d53030("medium",*(undefined4 *)(*(int *)((int)soundConfig + 0x10) + 4));
  FUN_00d53030(&DAT_017ef7e4,*(undefined4 *)(*(int *)((int)soundConfig + 0x10) + 8));
  TiXmlNode_LinkEndChild();
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 2;
  if (pvVar1 != (void *)0x0) {
    FUN_00d52e70();
  }
  local_4 = 0xffffffff;
  FUN_00d53030(&DAT_017ef7f4,**(undefined4 **)((int)soundConfig + 0x30));
  FUN_00d53030("medium",*(undefined4 *)(*(int *)((int)soundConfig + 0x30) + 4));
  FUN_00d53030(&DAT_017ef7e4,*(undefined4 *)(*(int *)((int)soundConfig + 0x30) + 8));
  TiXmlNode_LinkEndChild();
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 3;
  if (pvVar1 != (void *)0x0) {
    FUN_00d52e70();
  }
  local_4 = 0xffffffff;
  FUN_00d53030(&DAT_017ef7f4,**(undefined4 **)((int)soundConfig + 0x50));
  FUN_00d53030("medium",*(undefined4 *)(*(int *)((int)soundConfig + 0x50) + 4));
  FUN_00d53030(&DAT_017ef7e4,*(undefined4 *)(*(int *)((int)soundConfig + 0x50) + 8));
  TiXmlNode_LinkEndChild();
  FUN_00d53080("panFactor",(double)*(float *)((int)soundConfig + 0x90));
  FUN_00d53080("rolloffFactor",(double)*(float *)((int)soundConfig + 0x94));
  TiXmlNode_LinkEndChild();
  ExceptionList = local_c;
  return;
}

