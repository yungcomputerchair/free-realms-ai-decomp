// addr: 0x010dde60
// name: UdpLibrary_PooledLogicalPacket_acquire
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall
UdpLibrary_PooledLogicalPacket_acquire
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint entryOffset_;
  void *extraout_EAX;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Acquires a pooled logical UDP packet or creates one, then copies packet data
                       into it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164c3d3;
  local_c = ExceptionList;
  entryOffset_ = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if ((0 < *(int *)(param_1 + 100)) && (param_3 + param_5 <= *(int *)(param_1 + 0x6c))) {
    FUN_010da6d0();
    local_4 = 0;
    if ((*(void **)(param_1 + 0x538) == (void *)0x0) ||
       (FUN_010dc3f0((void *)(param_1 + 0x534),*(void **)(param_1 + 0x538),entryOffset_),
       pvVar1 = extraout_EAX, extraout_EAX == (void *)0x0)) {
      pvVar1 = Mem_Alloc(0x34);
      local_4._0_1_ = 1;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = UdpLibrary_PooledLogicalPacket_ctor(pvVar1,param_1,*(int *)(param_1 + 0x6c));
      }
      local_4 = (uint)local_4._1_3_ << 8;
    }
    FUN_010e5840(param_2,param_3,param_4,param_5);
    local_4 = 0xffffffff;
    FUN_010da6e0();
    ExceptionList = local_c;
    return pvVar1;
  }
  pvVar1 = (void *)FUN_010db140(param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return pvVar1;
}

