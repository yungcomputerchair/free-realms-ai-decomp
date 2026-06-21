// addr: 0x00c583f0
// name: FUN_00c583f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_00c583f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fe806;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  if (param_2 == 1) {
    ExceptionList = &local_c;
    pvVar3 = Mem_Alloc(0x2c);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      pvVar3 = AppPhysics_CollisionDataAsset_ctor(pvVar3);
      ExceptionList = local_c;
      return pvVar3;
    }
  }
  else {
    if (param_2 != 2) {
      return (void *)0x0;
    }
    ExceptionList = &local_c;
    pvVar3 = Mem_Alloc(0x68);
    local_4 = 1;
    if (pvVar3 != (void *)0x0) {
      iVar4 = FUN_00769710(uVar2);
      uVar1 = *(undefined4 *)(iVar4 + 0x34);
      iVar4 = FUN_00769710();
      pvVar3 = (void *)FUN_0071bed0(*(undefined4 *)(iVar4 + 0x1c),uVar1,1);
      ExceptionList = local_c;
      return pvVar3;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

