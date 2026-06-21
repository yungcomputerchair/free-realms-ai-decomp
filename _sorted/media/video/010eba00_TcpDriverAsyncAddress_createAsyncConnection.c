// addr: 0x010eba00
// name: TcpDriverAsyncAddress_createAsyncConnection
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
TcpDriverAsyncAddress_createAsyncConnection(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an async TCP driver/queue exists, labels it TcpDriverAsyncAddress,
                       allocates a 0x180-byte async address/connection object, and schedules it.
                       This target appears mis-bucketed under video. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164d426;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 4) == 0) {
    pvVar2 = Mem_Alloc(0x328);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00fc6db0(uVar1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_00fc70e0(1,0x10000,2,"TcpDriverAsyncAddress");
  }
  pvVar2 = Mem_Alloc(0x180);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_010eb8e0(param_1,param_2,param_3);
  }
  local_4 = 0xffffffff;
  FUN_00fc6fb0(uVar3,0,0,0,0);
  ExceptionList = local_c;
  return uVar3;
}

