// addr: 0x007b0bc0
// name: FUN_007b0bc0
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_007b0bc0(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *this;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_44 = 0xffffffff;
  puStack_48 = &LAB_0155dea1;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  iVar2 = FUN_00769710(DAT_01b839d8 ^ (uint)&stack0xffffff40);
  iVar2 = *(int *)(iVar2 + 0x28);
  if (iVar2 != -0xb0) {
    pvVar3 = Mem_Alloc(0x50);
    local_44 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_00d52e70();
    }
    local_44 = 0xffffffff;
    FUN_00d53080("masterMixVolume",(double)*(float *)(param_1 + 0xac));
    for (iVar2 = *(int *)(iVar2 + 0xb8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x84)) {
      this = (void *)0x0;
      pvVar3 = Mem_Alloc(0x50);
      local_44 = 1;
      if (pvVar3 != (void *)0x0) {
        this = (void *)FUN_00d52e70();
      }
      local_44 = 0xffffffff;
      TiXmlElement_SetAttribute(this,"name",*(char **)(iVar2 + 0xc));
      FUN_00d53030(&DAT_017eda64,*(undefined4 *)(iVar2 + 4));
      FUN_00d53080("volume",(double)(*(float *)(iVar2 + 0x1c) * *(float *)(iVar2 + 0x18)));
      FUN_00d53030("master",*(undefined4 *)(iVar2 + 0x2c));
      for (iVar1 = *(int *)(iVar2 + 0x38); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
        pvVar3 = Mem_Alloc(0x50);
        local_44 = 2;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_00d52e70();
        }
        local_44 = 0xffffffff;
        TiXmlElement_SetAttribute(pvVar3,"name",*(char **)(iVar1 + 0xc));
        FUN_00d53030(&DAT_017eda64,*(undefined4 *)(iVar1 + 4));
        FUN_00d53080("volume",(double)(*(float *)(iVar1 + 0x1c) * *(float *)(iVar1 + 0x18)));
        TiXmlNode_LinkEndChild();
      }
      TiXmlNode_LinkEndChild();
    }
    TiXmlNode_LinkEndChild();
  }
  ExceptionList = local_4c;
  return;
}

