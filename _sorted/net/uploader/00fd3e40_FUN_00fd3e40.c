// addr: 0x00fd3e40
// name: FUN_00fd3e40
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_00fd3e40(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  void *pvVar4;
  void *this;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates/configures a large render/effect object; exact type not identified
                       from available context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162f14b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar4 = Mem_Alloc(0x590);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 0x100);
    uVar7 = 1;
    uVar5 = FUN_00fd2330(1,uVar3);
    this = (void *)FUN_011746f0(uVar1,uVar5,uVar7);
  }
  fVar2 = DAT_01cb5720;
  local_4 = 0xffffffff;
  fVar6 = DAT_017ea5a4 - DAT_01cb5720;
  *(float *)((int)this + 0x2f0) = fVar6;
  *(float *)((int)this + 0x300) = fVar2;
  *(float *)((int)this + 0x2f4) = fVar6;
  *(float *)((int)this + 0x304) = fVar2;
  *param_1 = this;
  *(float *)((int)this + 0x2f8) = fVar6;
  *(float *)((int)this + 0x308) = fVar2;
  FUN_00fd00c0(this,param_3,param_4,param_5);
  ExceptionList = local_c;
  return param_1;
}

